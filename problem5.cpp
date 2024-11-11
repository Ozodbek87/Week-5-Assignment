#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int upperCount = 0;
    int lowerCount = 0;

    string upperChars = "";
    string lowerChars = "";

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            upperCount++;
            upperChars += c;
        } else if (c >= 'a' && c <= 'z') {
            lowerCount++;
            lowerChars += c;
        }
    }
    cout << upperCount;
    if (upperCount > 0) {
        cout << " " << upperChars;
    }
    cout << endl;

    cout << lowerCount;
    if (lowerCount > 0) {
        cout << " " << lowerChars;
    }
    cout << endl;

    return 0;
}