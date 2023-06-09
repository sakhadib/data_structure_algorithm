#include<bits/stdc++.h>
using namespace std;

void print_no_repeat_pairs(int *arr, int n){
    //we want to print those pairs which are not repeating. if we print 5,6 we will not print 6,5

    cout <<"printing no repeating pairs \n\n";
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            cout << arr[i] << " , " << arr[j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    print_no_repeat_pairs(arr, n);
    return 0;
}