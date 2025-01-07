#include <iostream>
using namespace std;

// this is a function take two parameters and return an int
// add
int add(int a, int b){
    int c = a+b;
    return c;
}

// substract
int substract(int a,int b){
  int c=a-b; 
  return c;
}
   

// multiply
int mul(int a, int b){
  int c=a*b;
  return c;
}


// divide
// you need to use if statement
float divide (int a, int b){

  if (b==0){
    cout<< "varible b cannot be zero\n";
    exit(0);
  }
  else{
    float c=a/b;
    return c;
  }
  
}

void sayhi(){
  cout<<"hello"; // hello 是它行使的指令
}

float give_me_five(){
  return 5.0;
}

string get_day_by_num(int day){

  string day_name;

  // write your code here begin

    if (day == 1) {
      day_name = "Monday";
    }

    if (day == 2) {
      day_name = "Tuesday";
      }
    if (day == 3) {
      day_name = "Wednesday";
      }
    if (day == 4) {
      day_name ="Thursday";
      }
    if (day == 5) {
      day_name = "Friday";
      }
    if (day == 6) {
      day_name = "Saturday";
      }
    if (day == 7) {
      day_name ="Sunday";
    }

  // write your code here end

  return day_name;
}

// define a function to check if a num is prime

// prime can only be diveded by 1 and itself
// e.g. 2 3 7 11 13 17 23
// num = 25

bool is_prime(int num){
  if (num == 1)
    return false;

  if (num == 2)
    return true;

  bool CAN_BE_DIVIDE = false;
  int i=2;
  while (i<num){

    int reminder = num%i;
    if (reminder ==0){
      CAN_BE_DIVIDE = true;
    }

    i++;
  }

  if (CAN_BE_DIVIDE){
    return false;
  }
  else{
    return true;
  }

  
}

