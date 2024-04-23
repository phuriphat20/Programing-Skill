#include<iostream>
#include<cmath>

using namespace std;

int Count_score(int x , int y)
{
    double distance = sqrt(x*x + y*y);

    if (distance >= 10)
    {
        return 0;
    } else if (distance >= 8) {
        return 1;
    } else if (distance >= 6) {
        return 2;
    } else if (distance >= 4) {
        return 3;
    } else if (distance >= 2) {
        return 4;
    } else {
        return 5;
    }
}

int main()
{
    int n , total_score = 0;

    cin >> n ;
    int x[n] , y[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i] >> y[i] ;

        total_score = total_score + Count_score(x[i],y[i]) ;
    }

    cout << total_score << endl ;
}
