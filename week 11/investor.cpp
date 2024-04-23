#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int m, n, count=0 ;
    cin >> m >> n ;
    int k[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i] ;
    }
    sort(k,k+n) ;
    for (int i = 0; i < n; i++)
    {
        m -= k[i] ;
        count++ ;
        if (m < 0)
        {
            count-- ;
            break;
        }
        
    }
    cout << count ;
}