// Iterative C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to reverse arr[] from start to end*/
void reverseArrayIterative(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Recursive program to reverse an array

/* Function to reverse arr[] from start to end */
void reverseArrayRecursive(int arr[], int start, int end)
{
    if (start >= end)
    {
    return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}