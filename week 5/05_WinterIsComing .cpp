#include<iostream>
#include <cmath>
using namespace std ;

int checkPrime(int n)
{
    if (n < 2) 
    {
        return false; 
    }

    for (int i = 2; i <= sqrt(n) ; i++) 
    {
        if (n % i == 0)
        {
            return false; 
            break;
        }
    }
    return true; 

} 

int main()
{
    int n , k ;
    int temp ;

    cin >> n >> k ;

    temp = k ;
    int arr[n] ;

    for(int i=0 ; i < n ;i++)
    {
        cin >> arr[i] ;
        
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(checkPrime(arr[i]))
        {
            temp = k ;
        }else
            {
                temp-- ;
                if(temp<0)
                {
                break ;
                }
            }
        
    }

    if (temp >= 0) 
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    

}