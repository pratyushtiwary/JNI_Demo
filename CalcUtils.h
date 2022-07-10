#include <jni.h>
#include "Test.h" // Will be generate by javac

jint getFactorial(jint n){
    if(n < 0){
        return -1;
    }
    
    if(n == 0){
        return 1;
    }
    return n * getFactorial(n - 1);
}