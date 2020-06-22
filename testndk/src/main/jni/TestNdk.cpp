//
// Created by DELL on 2020/6/22.
//

#include "TestNdk.h"

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL Java_com_dyzs_testndk_AndroidNdkBridge_getNativeStr(
        JNIEnv *env,
        jclass clazz) {
    // TODO: implement getJniString()
    std::string encrypt = "i am encrypt";
    return env->NewStringUTF(encrypt.c_str());
}
extern "C" JNIEXPORT jstring JNICALL Java_com_dyzs_testndk_AndroidNdkBridge_getNativeStr2(
        JNIEnv *env,
        jclass clazz) {
    // TODO: implement getJniString()
    std::string encrypt = "i am encrypt";
    return env->NewStringUTF(encrypt.c_str());
}


extern "C"
JNIEXPORT jint JNICALL
Java_com_dyzs_testndk_AndroidNdkBridge_getNativeIntValue(JNIEnv *env, jclass clazz) {
    // TODO: implement getNativeIntValue()
    int i = 100;
    return i;
}