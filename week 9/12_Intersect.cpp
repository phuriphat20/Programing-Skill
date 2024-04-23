#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i = 0 , j = 0 , k = 0 , Count = 0 ;
    int n ;

    cin >> n ;

    int A[n] , B[n] ;

    for(k = 0 ; k < n ; k++)
    {
        cin >> A[k] ;
    }

    for(k = 0 ; k < n ; k++)
    {
        cin >> B[k] ;
    }

    int a = sizeof(A) / sizeof(A[0]);
    sort(A, A + a);

    int b = sizeof(B) / sizeof(B[0]);
    sort(B, B + b);

    while(i < n && j < n)
    {
        if(A[i] == B[j])
        {
            i += 1 ;
            j += 1 ;
            Count += 1 ;
        }else
        {
            if(A[i] < B[j])
            {
                i += 1 ;
            }else
            {
                j += 1 ;
            }
        }
    }

    cout << Count << endl ;
}
