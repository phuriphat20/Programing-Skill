#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n , m , temp ;
    queue<int> q ;

    cin >> n >> m;

    int k[n] ;

    for(int i = 0 ; i < n ; i++)
        {
            cin >> k[i];
        }

    for(int i = 1 ; i <= m ; i++)
        {
            q.push(i);
        }

    for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < k[i] ; j++ )
                {
                    if(n == i + 1 )
                        {
                            cout << q.front() << " " ;

                        }
                        temp = q.front();
                        q.push(temp) ;
                        q.pop();
                }
        }


}
