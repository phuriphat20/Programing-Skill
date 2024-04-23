#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int max_docked_ships(int m , int n , vector<int>depths_ports , vector<int>ship_depths)
{
    sort(depths_ports.begin(), depths_ports.end() ) ;
    sort(ship_depths.begin(), ship_depths.end() ) ;

    int max_ships = 0 ;

    for (int ship_depth : ship_depths)
    {
        for (int i = 0; i < depths_ports.size(); ++i)
        {
            int port_depth = depths_ports[i] ;
            if (port_depth >= ship_depth)
            {
                max_ships++ ;
                depths_ports.erase(depths_ports.begin() + i) ;
                break ;
            }
        }
    }

    return max_ships ;
}


int main()
{
    int m, n ;

    cin >> m >> n ;

    vector<int> depths_ports(m) ;
    vector<int> ship_depths(n) ;

    for (int i = 0 ; i < m ; i++)
    {
        cin >> depths_ports[i] ;
    }

    for (int j = 0 ; j < n ; j++)
    {
        cin >> ship_depths[j] ;
    }

    int ans = max_docked_ships(m , n , depths_ports , ship_depths) ;
    cout << ans << endl ;

    return 0 ;
}
