#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
    int tmp, A, B, len;
    int power = 0;
    string str;

    cin >> A;

    for (int i = 0; i < A; i++)
    {
        tmp = 0;
        cin >> B;
        cin >> str;

        len = str.length();

        for (int j = 0; j < len; j++)
        {
            power = pow(B, (len - (j + 1)));
            tmp = tmp + (stoi(str.substr(j, 1)) * power);
        }

        cout << tmp << endl;
    }

    return 0;
}
