#include<bits/stdc++.h>
using namespace std;

void myswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                myswap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printarray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
}

int main()
{
    int arr[] = {34, 5, 7, 34, 1, 3, 12, 34};
    int n = sizeof(arr)/sizeof(int);
    printarray(arr, n);
    bubble_sort(arr, n);
    cout << "after bubble sorting :" << endl;
    printarray(arr, n);
    return 0;
}