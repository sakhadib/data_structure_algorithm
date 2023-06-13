#include<bits/stdc++.h>
using namespace std;

void myswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int n){
    for(int pos = 0; pos < n-1; pos++){
        int min_pos = pos;

        for(int j=pos; j<n; j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        myswap(&arr[pos], &arr[min_pos]);
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
    int arr[] = {7, 10, 4, 1, -4, -21, 99, 31};
    int n = sizeof(arr)/sizeof(int);
    printarray(arr, n);
    selection_sort(arr, n);
    cout << "after insertion sorting :" << endl;
    printarray(arr, n);
    return 0;
}