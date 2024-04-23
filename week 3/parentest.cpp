#include <stack>
#include<iostream>
using namespace std;

bool checkSybol(string input){
    stack<char> block;
    int i ;
    for(i = 0 ; i < input.size() ; i++)
    {
        if (block.empty()){
            block.push(input[i]) ;
        }else if ((block.top() == '{' && input[i] == '}') || (block.top() == '(' && input[i] == ')') || (block.top() == '[' && input[i] == ']'))
        {
                block.pop();
            }else{
                block.push(input[i]) ;
            }
    }

    if (block.empty())
    {
        return true ;
    }
    return false ;
}

int main()
{
    int t , i;

    cin >> t ;
    string input[t] ;

    for (i = 0 ; i < t ; i++){
        cin >> input[i] ;
    }
    for(i = 0 ; i < t ;i++){
        if (checkSybol(input[i]) == true){
            cout << "Yes" ;
        }else{
            cout << "No" ;
        }
        cout << endl;
    }
    return 0 ;
}
