#include <iostream>
#include <string>
 
using namespace std;
 
#include <stdio.h>
 
template <typename T>
T ArrMin(T Arr[], int Count) {
 return Count == 0 ? Arr[0] : ArrMin(Arr + (Arr[0] > Arr[Count]), Count - 1);
}
 
template <typename T>
T ArrMax(T Arr[], int Count) {
 return Count == 0 ? Arr[0] : ArrMax(Arr + (Arr[0] < Arr[Count]), Count - 1);
}
 
#define SIZE 7
 
int main(void){
    double arr[SIZE] = {-7, 3, 5, 2, 545645, 5, 4 };
    
    std::cout << "\nMin: " << ArrMin(arr, SIZE - 1);
    std::cout << "\nMax: " << ArrMax(arr, SIZE - 1);
    
    return 0;
}
