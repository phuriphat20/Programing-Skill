#include<iostream>
#include<algorithm>
#include<stack>
using namespace std ;

int main()
{
    int n , t , stolen_money = 0 ;
    stack<int> s ;

    cin >> n >> t ;

    int money_n[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> money_n[i];

    }

    int money_nSize = sizeof(money_n) / sizeof(money_n[0]) ;
    sort(money_n , money_n + money_nSize) ;

    for (int i = 0; i < n; i++) 
    {
            s.push(money_n[i]) ;
    }

    for (int i = n; i > n - t ; i--)
    {
        stolen_money += s.top();
        s.pop() ;
    }
    cout << stolen_money ;

    return 0 ;
}