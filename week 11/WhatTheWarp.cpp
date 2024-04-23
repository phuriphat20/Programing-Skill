#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<int> G) {
    for (int k = 0; k < G.size(); k++) {
        cout << G[k] << endl;
    }
}

int main() {
    int n;
    vector<int> positive, negative, G;

    while (cin >> n && n != 0) {
        if (n > 0) {
            positive.push_back(n);
        } else if (n < 0) {
            negative.push_back(n);
        }
    }

    cout << 0 << endl;
    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end(), greater<int>());

    auto it_pos = positive.begin();
    auto it_neg = negative.begin();

    while (it_pos != positive.end() || it_neg != negative.end()) {
        if (it_neg != negative.end()) {
            cout << *it_neg << endl;
            ++it_neg;
        }

        if (it_pos != positive.end()) {
            cout << *it_pos << endl;
            ++it_pos;
        }
    }

    return 0;
}
