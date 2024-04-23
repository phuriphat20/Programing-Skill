#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n , W ,w ;
    int Truck = 1 , Totalweight = 0 ;

    do{

        cin >> n >> W ;

        if(n != 0 &&  W != 0)
            {
                for(int i = 0 ; i < n ; i++)
                    {
                        cin >> w ;
                        Totalweight += w ;

                        if( Totalweight > W)
                            {
                                Truck++ ;
                                Totalweight = w ;
                            }

                    }

            cout << Truck << endl ;
            Totalweight = 0;
            Truck = 1;

            }

        }while(n != 0 &&  W != 0);

    return 0 ;
}


