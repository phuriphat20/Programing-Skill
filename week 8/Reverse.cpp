#include<iostream>

using namespace std ;

int main()
{
	    int n , r , start , end ;
    cin >> n; 
    string s[n] ;
    for (int i = 0; i < n ;  i++)
    {
        cin >> s[i] ;
        cin >> r ;
        for (int j = 0; j < r; j++)
        {
            start = 0 ,end = 0 ;
            cin >> start >> end ;
            int count = end -  start ;
            for (int k = 0; k <= count/2 ; k++)
            {
                swap(s[i][start-1+k],s[i][end-1-k]) ;
            }
            
        }
    }
    
    for (int i = 0; i < n ; i++)
    {
        cout << s[i] << endl;
    }
}
