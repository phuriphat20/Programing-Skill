#include <iostream>
using namespace std ;

int main(){
    int n,total_Joy=0,total_Jaew=0;
    cin >> n;
    while (n--)
    {
        int Joy=0,Jaew=0;
        int input ;
        cin >> input;
        input = input%360;
        if (input == 300 || input == 240 || input == 180 || input == 120 || input == 60 || input == 0)
        {
            continue;
        }
        
        if (input > 300)
        {
            Jaew++ ;
        }
        else if (input > 240)
        {
            Joy++ ;
        }else if (input > 180)
        {
            Jaew++ ;
        }else if (input > 120)
        {
            Joy++ ;
        }else if (input > 60)
        {
            Jaew++ ;
        }else if (input > 0)
        {
            Joy++ ;
        }

        if (Jaew>Joy)
        {
            total_Jaew++;
        }
        else if (Joy>Jaew)
        {
            total_Joy++;
        }
  
    }

    cout << total_Joy << " " << total_Jaew << endl ;

    if (total_Jaew>total_Joy)
    {
        cout << "Jaew" ;
    }
    else if (total_Joy>total_Jaew)
    {
        cout << "Joy" ;
    }
    else
    {
        cout << "Draw" ;
    }
    
}
/*
3
30
175
609

3
70
171
72

4
300
3300
330
30
*/

