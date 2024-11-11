#include <iostream>
using namespace std;


double sumOfMultiplications(double arr1[], double arr2[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    double arr1[n], arr2[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    double result = sumOfMultiplications(arr1, arr2, n);

    cout << result << endl;

    return 0;
}
