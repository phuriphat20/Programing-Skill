#include <iostream>
using namespace std;

int main()
{
    int n , m , A , S , sum = 0 ;
    int tts[200], cs[200];

    for(int i = 1;i < 200;i++)
    {
        tts[i] = 0;
        cs[i] = 0;
    }

    cin >> n >> m ;

    for(int i = 1 ; i <= m ; i++)
        {
            cin >> A >> S ;
            cs[A]++ ;

            if(cs[A] <= 5)
                {
                    if(tts[A] < S)
                        {
                            tts[A] = S ;
                        }
                }else
                {
                    tts[A] = 0 ;
                }
        }

    for(int i = 1;i <= n;i++)
    {
        sum = sum + tts[i];
    }
    cout << endl << sum;

    return 0;
}
