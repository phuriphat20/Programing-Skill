#include<iostream>
#include<string.h>
using namespace std;
 int main(){
    string movement ;
    int x = 0 ,y = 0 ;
    cin >> movement ;

    for(int i=0; i < movement.size(); i++){
        switch (movement[i]){
        case 'N' :
            y++ ;
            break ;
        case 'S' :
            y-- ;
            break ;
        case 'W' :
            x-- ;
            break ;
        case 'E' :
            x++ ;
            break ;
        case 'Z' :
            x =0 ;
            y =0 ;
        }
    }
    cout << x<< " " << y ;
 }
