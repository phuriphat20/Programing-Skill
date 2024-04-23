#include<iostream>
#include <vector>
using namespace std ;

int main()
{
    string s ;
    vector<char> c ;

    cin >> s ;
    c.push_back(s[0]);

    for(int i = 1 ; i < s.length() ; i++)
        {
            if(c.back() == s[i])
                {
                    c.pop_back() ;
                }else
                {
                    c.push_back(s[i]) ;
                }
        }

    for(int i = 0 ; i < c.size() ; i++)
        {
            cout << c[i] ;
        }
}
