//
//  main.cpp
//  MergeSort
//
//  Created by Khang Tran on 12/20/17.
//  Copyright © 2017 Khang Tran. All rights reserved.
//

#include <iostream>
using namespace std;
# include "MergeSort.hpp"

const int SIZE = 7;
void printArray(int* arr, const int & SIZE);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // initiate an unsorted array
    int arr[SIZE] = {38, 27, 43, 3, 9, 82, 10};
   
    // print the unsorted array
    cout << "Unsorted: ";
    printArray(arr, SIZE);
    
    // sort the array
    MergeSort(arr, 0, SIZE-1);
    
    // print the sorted array
    cout << "Sorted: ";
    printArray(arr, SIZE);
    
    
    
    return 0;
}

void printArray(int* arr, const int & SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
