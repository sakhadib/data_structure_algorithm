#include<bits/stdc++.h>
using namespace std;

// function to print an array
int printarray(int *arr, int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// function to swap with pointers.
int myswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to reverse the array  
int reversearray(int *arr, int n){
    int left = 0;
    int right = n-1;
    while(left <= right){
        myswap(&arr[left], &arr[right]);
        left++;
        right--;
    }
}

// main function
int main()
{
    int arr[] = {1,2,3,4,5,6};
    printarray(arr, 6);
    reversearray(arr, 6);
    printarray(arr, 6);
    
    return 0;
}