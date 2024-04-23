#include<iostream>
using namespace std ;

    int x = 0;
    int y = 0;
    char direction = 'N';

void change_Direction()
{
    switch (direction)
    {
    case 'N' :

        direction = 'E' ;

        break;

    case 'E' :

        direction = 'S' ;
        
        break;

    case 'S' :

        direction = 'W' ;
        
        break;

    case 'W' :

        direction = 'N' ;
        
        break;
    
    default:
        break;
    }

    cout << "R" ;

}


int main()
{
    string input;

    cin >> input;

    for (int i = 0; i < (int)input.length(); i++)
    {
        if (input[i] == 'Z')
        {
            x = 0;
            y = 0;
            direction = 'N';

            cout << "Z";

            continue;
        }else if(input[i] == direction)
            {
                cout << "F" ;
            }else
                {
                    while(input[i] != direction)  
                    {
                    
                            change_Direction() ;
                        
                    }
                    cout << "F" ;
                }
    }
    
    return 0;
}
