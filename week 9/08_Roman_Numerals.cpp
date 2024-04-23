#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<pair<int,string >> base;

    base.push_back(make_pair(1000,"M"));
    base.push_back(make_pair(900,"CM"));
    base.push_back(make_pair(500,"D"));
    base.push_back(make_pair(400,"CD"));
    base.push_back(make_pair(100,"C"));
    base.push_back(make_pair(90,"XC"));
    base.push_back(make_pair(50,"L"));
    base.push_back(make_pair(40,"XL"));
    base.push_back(make_pair(10,"X"));
    base.push_back(make_pair(9,"IX"));
    base.push_back(make_pair(5,"V"));
    base.push_back(make_pair(4,"IV"));
    base.push_back(make_pair(1,"I"));


    int input ;
    cin >> input ;
    for (int i = 0; i < 13; i++)
    {
        while (input >= base[i].first)
        {
            input -= base[i].first ;
            cout << base[i].second ;
        }

    }
}
