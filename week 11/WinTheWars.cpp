#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main()
{
    int n ;

    cin >> n ;

    vector<int> m(n), p(n) ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> m[i] ;
    }

    for(int j = 0 ; j < n ; j++)
    {
        cin >> p[j] ;
    }

    sort(m.begin(), m.end() , greater<int>()) ;
    sort(p.begin(), p.end() , greater<int>()) ;


    int total_armies = 0 , i = 0 , j = 0 ;

    while(i < n && j < n)
    {
        if(p[i] > m[j])
        {
            total_armies++ ;
            i++ ;
            j++ ;
        }else
            {
                j++ ;
            }
    }

    if(total_armies > n/2)
    {
        cout << total_armies ;
    }else
        {
            cout << "Lose" ;
        }

    return 0 ;

}
