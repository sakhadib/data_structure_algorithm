#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(int);
    printf("index\tvalue\tmemory block\n");
    for(int i=0; i<n; i++){
        printf("%3d\t%3d\t%d\n",i,array[i],&array[i]);
    }    
    
    return 0;
}