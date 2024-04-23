#include <iostream>
using namespace std;

int main()
{
    int n , n_f , n_l ;

    cin >> n ;

    n_l = n%10 ;
    while(n>=10)
    {
        n = n/10 ;
    }

    n_f = n ;

    cout << n_f << n_l ;
}
