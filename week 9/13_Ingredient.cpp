#include<iostream>

using namespace std;

bool check(int v, int u)
{
    return (v % u) == 0;
}

int main()
{
    int t , cakes ;

    cin >> t ;

    for(int i = 0 ; i < t ; i++)
    {
        int n ;

        cin >> n ;

        int x[n] , y[n] ,buy[n] ;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> x[i] ;
        }

        for(int i = 0 ; i < n ; i++)
        {
            cin >> y[i] ;
        }

        cakes = 1 ;
        while(1)
        {
            int Count = 0 ;
            for(int i = 0 ; i < n ; i ++)
            {
                if(check(x[i]*cakes , y[i]))
                {
                    Count++ ;
                }else
                {
                    break;
                }
            }
            if(Count == n)
            {
                for (int i = 0; i < n; i++)
                {
                    buy[i] = x[i]*cakes / y[i] ;
                }
                break;
            }

            cakes++ ;
        }

        cout << cakes << endl ;
        for(int i = 0 ; i < n ; i++)
        {
            cout << buy[i] << " " ;
        }
        cout << endl ;
    }
}
