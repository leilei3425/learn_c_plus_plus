#include <iostream>
#include "util.cpp"

using namespace std;

int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String


int main() {

  // print 1 to 100
  // for (int i = 1; i <= 100; i++) {
  //     cout << i << endl;
  //   }

  // convert it to while loop
// int i=1;
// while (i<=100 ) {
  
//   cout << i << "\n"; 
//   i++;
// }

  // print all odd between 1-100

// int i=1;
// while (i<100) {
//   cout << i << "\n";
//   i=i+2;
// }

  // sum 1+2+3+ ... +100


    int j=1;
    int sum=0;
    while ( j<=100 ){
        sum=sum+j;
        j++;
    }
    cout << sum << endl;

  return 0;
}