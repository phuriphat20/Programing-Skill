#include<iostream>
using namespace std ;

int main()
{
    int x , y , n ;
    int count = 0 ;
    int temp = 0 ;

    cin >> x >> y >> n ;

    int arr[n] ;

    for(int h = 0 ; h < n ; h++)
    {
        cin >> arr[h] ;

    do
    {
        temp += x ;

        if(temp < arr[h])
        {
            temp = temp - y ;
            count++ ;
        }else
            {
                temp = 0 ;
                count++ ;
            }

    }while(temp != 0) ;

    }

    cout << count ;

}