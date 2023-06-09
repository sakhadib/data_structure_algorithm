#include<bits/stdc++.h>
using namespace std;

int linear_search(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
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
    int index = linear_search(arr, n, key);

    if(index != -1){
        cout << key << " at index " << index << endl;
    }
    else{
        cout << key << " not found" << endl;
    }
    return 0;
}