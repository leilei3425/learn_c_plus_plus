#include <iostream>
#include <cmath>

using namespace std;



//  send message , no return

void greeting() {
  cout << "hi" << endl;
}


// 2. define a function return hi

string get_greeting() {
  return "hi";

}

// define a function for multification with plus sign, assue int only
// 0, 4

int multify(int a, int b){
  int result=0;
  int i=0;

  while (i<b){
    result=result+a;
    i++;
  }

  return result;
}


// define a function for division with minus sign
int division(int a, int b){
  int result=0;
  int remind=0;

  if (b==0){
    cout<<"error"<<endl;
    exit(0);
    }


  while(true){
    if (a<b){
      remind=a;
      break;
    }
    a=a-b;
    result++;
  }
  int result2[2]={result, remind};

 // cout <<"result: "<< result << ", remind: "<< remind <<endl;
}


// define a function to check if a string is "hi"

// input: string
// output: bool
bool is_string(string a){
  if (a=="hi")
    return true;
  else
    return false;
}

// define a function check if num less 100
bool is_less100(float num){
  if (num<100)
  return true;
  else
  return false;
}
