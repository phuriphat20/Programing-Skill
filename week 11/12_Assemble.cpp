#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main()
{
    int n , p_enemy ;

    cin >> n ;

    vector<int> p_avenger(n) ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> p_avenger[i] ;
    }

    sort(p_avenger.begin(), p_avenger.end() , greater<int>()) ;

    cin >> p_enemy ;

    int total_avenger_power = 0 ;
    int avenger_count = 0 ;

    for(int power : p_avenger)
    {
        total_avenger_power += power ;
        avenger_count++ ;

        if (total_avenger_power > p_enemy)
        {
            break ;
        }
    }

    if (total_avenger_power <= p_enemy)
    {
        cout << "YOU DIE" << endl ;
    } else
        {
            cout << avenger_count << endl ;
        }

}
