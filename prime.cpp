#include <iostream>
#include "util.cpp"

using namespace std;

int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String


// tips: 1. define a loop iterate from 1 - 100
//       2. define a function check if a number is prime
//       3. call the function in the loop to check every single num is prime


int main() {

    int numi=1;
    while (numi<=100){

    if (is_prime(numi)==true){
        cout << numi << "\n";
    } 

    numi++;
    }

    //cout<<is_prime(2)<<endl;

  return 0;
}