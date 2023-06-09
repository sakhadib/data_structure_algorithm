#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int *arr, int n, int key){
    //implementing binary search

    int start = 0;
    int end = n - 1;

    while (start <= end){
        int mid = (start+end)/2;

        //checks for if mid matches...
        if(arr[mid] == key){
            return mid;
        }

        //but if it is not the case.
        //we have to find for upper and lower sub_arrays...
        if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;


}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "what you wanna find ??   :  ";
    cin >> key;
    int index = Binary_Search(arr, n, key);

    if(index != -1){
        cout << key << " at index " << index << endl;
    }
    else{
        cout << key << " not found" << endl;
    }
    return 0;
    
    return 0;
}