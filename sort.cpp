#include <iostream>
#include <cmath>
using namespace std;


void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout <<endl;
}

int bubble_sort(){

    int num[7] = {8, 2, 4, 7, 5, 1, 3};

    for (int j=0;j<7;j++){
        for (int i=0;i<6;i++){
        if (num[i]>num[i+1]){
            int c   = num[i+1];
            num[i+1]= num[i];
            num[i]  = c;
        }
        }
        cout<<j<<endl;
        printArray(num, 7);

    }

   printArray(num, 7);

   return 0;

}



