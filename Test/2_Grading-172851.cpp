#include<iostream>
using namespace std;

int main(){
    int hw,test1,test2,test3,total;
    cin >> hw;
    cin >> test1;
    cin >> test2;
    cin >> test3;
    total = hw + test1 + test2 + test3 ;

    if(total >= 80){
        cout << "A" ;
    }else if(total >=75){
        cout << "B+" ;
    }else if(total >=70){
        cout << "B" ;
    }else if(total >=65){
        cout << "C+" ;
    }else if(total >=60){
        cout << "C" ;
    }else if(total >=55){
        cout << "D+" ;
    }else if(total >=50){
        cout << "D" ;
    }else{
        cout << "F" ;
    }
    }
