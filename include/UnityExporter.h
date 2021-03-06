// Copyright 2018 Dimension NXG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "AjnaSpeak.h"
#ifdef LIB_WITH_UNITY
#if defined(_MSC_VER)
//  Microsoft
#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)
#define CoreAPI __declspec(dllexport)
#define CoreAPI1 __declspec(dllexport)
#elif defined(__GNUC__)
//  GCC
#define DLL_PUBLIC __attribute__ ((visibility ("default")))
#define DLL_LOCAL  __attribute__ ((visibility ("hidden")))
#define CoreAPI DLL_PUBLIC
#define CoreAPI1 DLL_PUBLIC
#else
//  do nothing and hope for the best?
#define EXPORT
#define IMPORT
#pragma warning Unknown dynamic link import/export semantics.
#endif

//typedef void(/*__stdcall*/ * charArrayCallback)(char*);

 static AjnaSpeak speaker;

//extern "C" CoreAPI void AjnaSpeak_Start();
extern "C" CoreAPI void AjnaSpeak_Stop();
extern "C" CoreAPI1 bool AjnaSpeak_Realtime(char* message);

extern "C" CoreAPI void AjnaSpeak_Sequential(char* message);
extern "C" CoreAPI1 bool AjnaSpeak_NotSequential(char* message);




#endif





