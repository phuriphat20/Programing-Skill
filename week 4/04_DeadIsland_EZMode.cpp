#include <iostream>
using namespace std;

int main()
{
    int w = 0, h =0 , count = 0 ;

    cin >> w >> h ;

    int arr[h][w] ;

    for(int i = 0 ; i < h ; i++)
        {
            for(int j = 0 ; j < w ; j++)
                {
                    cin >> arr[i][j] ;

                }
        }

    for(int i = 0 ; i < h ; i++)
        {
            for(int j = 0 ; j < w ; j++)
                {
                    if(arr[i][j] == 1)
                        {
                            count = 0 ;

                            for(int m = i-1 ; m <= i+1 ; m++)
                                {
                                    for(int n = j-1 ; n <= j+1 ; n++)
                                        {
                                            count += arr[m][n] ;
                                        }
                                }
                            if(count < 3)
                                {
                                    cout << "No";
                                    return 0;
                                }
                        }
                }
        }

        cout << "Yes" ;

    return 0 ;
}
