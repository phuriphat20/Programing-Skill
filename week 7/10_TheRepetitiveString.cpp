#include <iostream>
#include <string>
using namespace std;
bool isRepetitiveString(const std::string& str) {
    int n = str.length();


    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {

            if (str[i] != str[j]) {

                int distance = j - i;
                if (j + distance < n && str[i] == str[j + distance]) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {

    string inputStr;
    cin >> inputStr;


    if (isRepetitiveString(inputStr)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
