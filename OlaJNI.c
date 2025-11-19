#include <jni.h>
#include <stdio.h>
#include <stdlib.h>

#include "OlaJNI.h"

JNIEXPORT void JNICALL Java_OlaJNI_olaMundo( JNIEnv *env, jobject obj ) {
    printf( "ola mundo (do programa em C)!\n" );
}