#include<iostream>
using namespace std ;

int main()
{
	string s ;
	int count = 0 ;
	
	cin >> s ;
	
	for(int i = 0 ; i < s.size()/2 ; i++)
	{
		if(s[i] != s[s.size()-1-i])
		{
			count++ ;
		}
	}
	
	if (s.size()%2 == 1 && count == 0)
    {
        cout <<  "YES" ;
        return 0;
    }
    
    if (count == 1)
    {  
        cout << "YES" ;
    }else
    {
        cout << "NO" ;
    }
}
