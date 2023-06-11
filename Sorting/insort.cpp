#include<bits/stdc++.h>
using namespace std;

void printarray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void in_sort(int *arr, int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            arr[prev] = 0;
            prev--;
            cout << "\ncurrent :" << current << "\t ||->>\t";
            printarray(arr,n);
        }

        arr[prev+1] = current;
    }
}




int main()
{
    int arr[] = {5, 3, 8, 6, 11, 9};
    int n = sizeof(arr)/sizeof(int);
    printarray(arr, n);
    in_sort(arr, n);
    cout << "\n\nafter insertion sorting \t ||->>\t";
    printarray(arr, n);
    return 0;
    
    return 0;
}