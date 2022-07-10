#include "CalcUtils.h"


JNIEXPORT jint JNICALL Java_Test_getFactorial(JNIEnv *env, jclass cls, jint n){
    return getFactorial(n);
}

int main(){
    return 0;
}