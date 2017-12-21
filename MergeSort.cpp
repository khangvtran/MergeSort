//
//  MergeSort.cpp
//  MergeSort
//
//  Created by Khang Tran on 12/20/17.
//  Copyright © 2017 Khang Tran. All rights reserved.
//

# include "MergeSort.hpp"


void MergeSort(int* A, int low, int high)
{    
    if (low < high)
    {
        int mid = int((low+high)/2);
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, low, mid, high);
    }
    
    return;
}


void Merge(int* A, int low, int mid, int high)
{
    int l = low;
    int m = mid + 1;
    int index = low;
    int resultSize = high - low + 1;
    
    int *result = new int[resultSize];
    
    while (l <= mid && m <= high)
    {
        if (A[l] < A[m])
        {
            result[index] = A[l];
            index++;
            l++;
        }
        else
        {
            result[index] = A[m];
            index++;
            m++;
        }
    }
    
    while (l <= mid)
    {
        result[index] = A[l];
        index++;
        l++;
    }
    
    while (m <= high)
    {
        result[index] = A[m];
        index++;
        m++;
    }
    


    for (int i = low; i <= high; i++)
    {
        A[i] = result[i];
    }
    
    //cout << "";
    delete [] result;
    
    return;
}

