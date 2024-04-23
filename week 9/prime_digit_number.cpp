#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int findMaxPrime(int N)
{
    for (int i = N - 1; i >= 2; --i)
        {
        int num = i;
        bool allPrime = Strue;
        while (num > 0) {
            int digit = num % 10;
            if (!isPrime(digit)) {
                allPrime = false;
                break;
            }
            num /= 10;
        }
        if (allPrime) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; ++i)
    {
        int num;
        cin >> num;

        int result = findMaxPrime(num);
        cout << result << endl;
    }

    return 0;
}
