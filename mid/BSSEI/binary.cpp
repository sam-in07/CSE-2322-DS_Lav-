#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) >> 1;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] < x)
            low = mid + 1;


        else
            high = mid - 1;
    }


    return -1;
}

int main() {
    int n, x;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
     {
           cout << result << endl;
     }
    else
      {
          cout << "Element is not  in array" << endl;
      }

    return 0;
}