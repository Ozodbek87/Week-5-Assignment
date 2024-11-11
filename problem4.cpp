#include <iostream>
using namespace std;


int maxProfit(int prices[], int n) {
    if (n < 2) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;


    for (int i = 1; i < n; ++i) {
        minPrice = min(minPrice, prices[i]);

        int currentProfit = prices[i] - minPrice;

        maxProfit = max(maxProfit, currentProfit);
    }

    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    int prices[n];

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    cout << maxProfit(prices, n) << endl;

    return 0;
}
