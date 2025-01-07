#include <iostream>
#include <cmath>
#include "util.cpp"
#include "func1.cpp"
using namespace std;

int myNum = 5;               // Integer (whole number) 4 bytes
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String


//sizeof() is a function to get the actually physical memory size of given varible

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout <<endl;
}

// sort the array


int main() {

  // int num[7] = {8, 2, 4, 7, 5, 1, 3};

  // for (int j=0;j<7;j++){
  //   for (int i=0;i<6;i++){
  //     if (num[i]>num[i+1]){
  //       int c   = num[i+1];
  //       num[i+1]= num[i];
  //       num[i]  = c;
  //     }
  //   }
  //   cout<<j<<endl;
  //   printArray(num, 7);

  // }

  //  printArray(num, 7);

    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Intentionally access out-of-bounds index to cause a bug
    for (int i = 0; i < size; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;










  return 0;
}