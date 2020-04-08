//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013-2019 Automatak, LLC
// 
// Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
// LLC (www.automatak.com) under one or more contributor license agreements.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership. Green Energy Corp and Automatak LLC license
// this file to you under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may obtain
// a copy of the License at:
// 
//   http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef OPENDNP3JAVA_JNIDATABASE_H
#define OPENDNP3JAVA_JNIDATABASE_H

#include "../adapters/LocalRef.h"

#include "JNIWrappers.h"

namespace jni
{
    struct JCache;

    namespace cache
    {
        class Database
        {
            friend struct jni::JCache;

            bool init(JNIEnv* env);
            void cleanup(JNIEnv* env);

            public:

            // methods
            void freezeCounter(JNIEnv* env, JDatabase instance, jint arg0, jboolean arg1, JEventMode arg2);
            void freezeCounter(JNIEnv* env, JDatabase instance, jint arg0, jboolean arg1);
            void update(JNIEnv* env, JDatabase instance, JAnalogInput arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JDoubleBitBinaryInput arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JBinaryInput arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JAnalogOutputStatus arg0, jint arg1);
            void update(JNIEnv* env, JDatabase instance, JCounter arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JBinaryOutputStatus arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JAnalogOutputStatus arg0, jint arg1, JEventMode arg2);
            void update(JNIEnv* env, JDatabase instance, JBinaryInput arg0, jint arg1);
            void update(JNIEnv* env, JDatabase instance, JDoubleBitBinaryInput arg0, jint arg1);
            void update(JNIEnv* env, JDatabase instance, JAnalogInput arg0, jint arg1);
            void update(JNIEnv* env, JDatabase instance, JBinaryOutputStatus arg0, jint arg1);
            void update(JNIEnv* env, JDatabase instance, JCounter arg0, jint arg1);

            private:

            jclass clazz = nullptr;

            // method ids
            jmethodID method0 = nullptr;
            jmethodID method1 = nullptr;
            jmethodID method2 = nullptr;
            jmethodID method3 = nullptr;
            jmethodID method4 = nullptr;
            jmethodID method5 = nullptr;
            jmethodID method6 = nullptr;
            jmethodID method7 = nullptr;
            jmethodID method8 = nullptr;
            jmethodID method9 = nullptr;
            jmethodID method10 = nullptr;
            jmethodID method11 = nullptr;
            jmethodID method12 = nullptr;
            jmethodID method13 = nullptr;
        };
    }
}

#endif
