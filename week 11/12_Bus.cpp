#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

int main()
{
    int n , d , r , ot = 0 ;

    while(cin >> n >> d >> r && (n != 0 || d != 0 || r != 0))
    {

        vector<int> Route_of_morning(n), Route_of_evening(n), total_distance(n);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> Route_of_morning[i] ;
        }

        for(int j = 0 ; j < n ; j++)
        {
            cin >> Route_of_evening[j] ;
        }

        sort(Route_of_morning.begin() , Route_of_morning.end()) ;
        sort(Route_of_evening.begin() , Route_of_evening.end() , greater<int>()) ;

        for(int i = 0 ; i < n ; i++)
        {
            total_distance[i] = Route_of_morning[i] + Route_of_evening[i] ;
            if(total_distance[i] > d)
            {
                ot += (total_distance[i] - d) * r ;
            }
        }
            cout << ot << endl;
            ot = 0;
    }
}
