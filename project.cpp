#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Function to generate a randam value between 1 and max
int randomValue(int max, bool odd) {
    int num;
    
    while(true){
        num = rand() % max + 1;  // generats a int num between 1-max

        if (odd==true){
            if (num%2!=0)
                return num; // get an odd
        }

        if (odd!=true){
            if (num%2==0)
                return num; // get an even
        }
    }
}

// write the array to a file
void writeArray(int arr[][12], int rows) {
    std::ofstream outFile("out.txt");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 12; j++) {
            outFile << std::setw(6) << arr[i][j];  
        }
        outFile << std::endl; 
    }

    outFile.close();  
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  

    int max;
    std::cout << "Enter the maximum random value: ";
    std::cin >> max;

    const int rows = 10;
    const int cols = 12;
    int arr[rows][cols];  

    // create the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 10; j++) {

            if (i % 2 != 0) // the row index is odd
                arr[i][j] = randomValue(max, true);
            else // the row index is even
                arr[i][j] = randomValue(max, false);
        }

        // get sum for the row 
        int sum = 0;
        for (int j = 0; j < 10; j++) {
            sum += arr[i][j];
        }
        arr[i][10] = sum;

        // Find max value for the row 
        int maxValue = arr[i][0];
        for (int j = 1; j < 10; j++) {
            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];
            }
        }
        arr[i][11] = maxValue;
    }

    // Write to a file
    writeArray(arr, rows);

    std::cout << "Finished.\n";
    
    return 0;
}