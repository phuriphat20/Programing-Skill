#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    
    vector<pair<char, int>> input(s.length());

    for (int i = 0; i < s.length(); i++) {
        input[i].first = s[i];
        cin >> input[i].second; 
    }

    
    sort(input.begin(), input.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
        return a.second < b.second;
    });


    for (int i = 0; i < s.length(); i++) {
        cout << input[i].first;
    }

    return 0;
}

