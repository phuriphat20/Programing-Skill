#include<iostream>
#include<queue>
using namespace std ;

int main()
{
    int  n = 0 ;
    cin >> n ;

    int hen = 1;
    int total_chickens = 0 ;
    int die = 0 ;
    int temp1 = 0 , temp2 = 0 ;

    queue<int> q ;
    queue<int> q_temp ;

    for(int day = 0 ; day < n ; day++)
        {
            if(day == 0)
                {
                    q.push(hen) ;
                    total_chickens = q.front();

                }else if(day < 6)
                    {
                        hen = hen * 3 ;
                        q.push(hen) ;
                        total_chickens = hen ;
                    }else
                    {
                    if (temp1 == 0)
                    {
                        temp1 = q.front();
                        die = q.front();
                    }
                    else
                    {
                        temp1 = q.front();
                        die = temp1 - temp2;
                        if (day >= 12)
                        {
                            die += q_temp.front();
                            q_temp.pop();
                        }
                    }
                    total_chickens -= die;
                    temp2 = q.front();
                    q_temp.push(die);
                    q.pop();
                    q.push(total_chickens*3);
                    total_chickens = q.back();
                }
        }

        cout << total_chickens << endl ;
}
