#include <iostream>
using namespace std ;

int main(){
    string input, out = "";
    int start , len, tmp  ;
    cin >> input ;
    int position[input.length()] ;

    for (int i = 0; i < input.length() ; i++)
    {
        cin >> position[i] ;
    }
    cin >> len ;
    cin >> start ;

    tmp = start-1 ;
    for (int i = 0; i < len ; i++)
    {
        if ( input.length() > tmp && tmp >= 0 )
        {
            out += input[tmp] ;
            tmp = position[tmp]-1 ;
            cout << "Positon" << position[tmp] << endl ;
            cout <<"out=" << out << endl;
            cout <<"tmp ="<< tmp  << endl;
        }else
        {
            cout << "No" ;
            return 0 ;
        }
    }
    cout << out ;
}
