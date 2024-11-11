#include <iostream>
using namespace std;

bool isDivisorOfAll(int arr[], int n, int num) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] % num != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (isDivisorOfAll(arr, n, arr[i])) {
            cout << arr[i] << endl;
            return 0;
        }
    }
    cout << "-1" << endl;

    return 0;
}
