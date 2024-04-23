#include <iostream>
#include <algorithm>
using namespace std;

string lcp(string s, string t) {
    int n = min(s.length(), t.length());
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            return s.substr(0, i);
        }
    }
    return s.substr(0, n);
}

int main() {
    string str;
    getline(cin, str);

    string lrs = "";
    int n = str.length();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string x = lcp(str.substr(i), str.substr(j));
            if (x.length() > lrs.length()) {
                lrs = x;
            }
        }
    }

    cout <<lrs;
    return 0;
}