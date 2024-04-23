#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    int n_fruits[n];

    for (int i = 0; i < n; i++) {
        cin >> n_fruits[i];
    }

    int maxSum = 0;
    
    for (int i = 0; i < n; i++) {
        int currentSum = 0;

        for (int j = i; j < i + t; j++) {
            currentSum += n_fruits[j % n];
        }

        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;
    return 0;
}