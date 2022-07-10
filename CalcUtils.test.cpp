#include <iostream>
#include "CalcUtils.h"

int main(){
    jint fiveFact = getFactorial(5);
    jint zeroFact = getFactorial(0);
    jint negativeFact = getFactorial(-5);
    if(fiveFact != 120){
        std::cout<<"Invalid result provided by getFactorial, input : 5 | output : "<<fiveFact<<std::endl;
    }
    else{
        std::cout<<"Test ran successfully, input: 5 | output : "<<fiveFact<<std::endl;
    }

    if(zeroFact != 1){
        std::cout<<"Invalid result provided by getFactorial, input : 0 | output : "<<zeroFact<<std::endl;
    }
    else{
        std::cout<<"Test ran successfully, input: 0 | output : "<<zeroFact<<std::endl;

    }

    if(negativeFact != -1){
        std::cout<<"Invalid result provided by getFactorial, input : -5 | output : "<<negativeFact<<std::endl;
    }
    else{
        std::cout<<"Test ran successfully, input: -5 | output : "<<negativeFact<<std::endl;

    }

    return 0;
}
