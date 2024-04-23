#include<iostream>
#include<math.h>
using namespace std ;

int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int find_min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void PathRobot(string input , int k)
{
    int  N = 0 , S = 0 , W = 0 , E = 0 ;

    for (int i = 0; i < (int)input.length() ; i++)
    {
        switch (input[i])
        {
            case 'N':
                N++;
                break;
            case 'S':
                S++;
                break;
            case 'E':
                E++;
                break;
            case 'W':
                W++;
                break;
        }
    }
        int max, min;
        max = find_max(N, S) + find_max(E, W);
        min = find_min(N, S) + find_min(E, W);

        if (min == 0 && k == 0)
        {
            cout << max * 2;
        }
        else if (min < k)
        {
            cout << (max - (k - min)) * 2;
        }
        else
        {
            cout << (max - (min - k)) * 2;
        }
}

int main()
{
    string input ;
    int k;

    cin >> input;
    cin >> k ;

    PathRobot(input,k);

    return 0 ;

}
