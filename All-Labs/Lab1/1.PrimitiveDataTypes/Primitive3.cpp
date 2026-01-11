/*
 *  Course: CSSSKL342A
 *  Lab 1: Toolchains, type conversion, references, file I/O
 *
 *  Primitive3.cpp
 *  Author: Tejasvi Konakanchi
 *  Date: 1/9/2025
 *
 */

#include <iostream> 
using namespace std;

int myRoundingFunction(double value) {

    
    int integerPart = static_cast<int>(value);
    double fractionPart = value - integerPart;

    //for positive values
    if(value > 0){
        //Rounding up, if value is greater than 0.5 
        if(fractionPart >= 0.5){
            return integerPart + 1;
        }

        //Rounding down, if value is less than 0.5 
        if(fractionPart < 0.5){
            return integerPart;
        }
    }


    //for negative values
    if(value < 0){
        //Rounding up, if value is greater than 0.5 
        if(fractionPart >= -0.5){
            return integerPart;
        }

        //Rounding down, if value is less than 0.5 
        if(fractionPart <-0.5){
            return integerPart-1;
        }
    }

    

return 0;
}

int main() {
  double a = 0.4;
  double b = 0.6;
  double c = -0.4;
  double d = -0.6;

  cout << myRoundingFunction(a);
  cout << myRoundingFunction(b);
  cout << myRoundingFunction(c);
  cout << myRoundingFunction(d);
}