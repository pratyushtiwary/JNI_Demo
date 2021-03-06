#include <jni.h>
#include "Test.h" // Will be generate by javac

jint getFactorial(jint n){
    if(n < 0){
        return -1;
    }
    
    if(n == 0){
        return 1;
    }
    
    jint fact = 1;
    
    for(jint i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}