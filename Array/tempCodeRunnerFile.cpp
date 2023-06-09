int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "what you wanna find ??   :  ";
    cin >> key;
    int index = Binary_Search(arr, n, key);
