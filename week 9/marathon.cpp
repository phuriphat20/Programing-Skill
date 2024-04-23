#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main(){
    int n, r;

    cin >> n >> r;

    int t[n];

    for(int i=0; i<n; i++){
        cin >> t[i];
    }

    int Alice_time = t[0] * r;

    int time = 0;
    for(int j=1; j<n; j++){
        if(lcm(t[0], t[j]) <= Alice_time){
            time = lcm(t[0], t[j]);
        }
    }

    cout << time;

    return 0;
}
