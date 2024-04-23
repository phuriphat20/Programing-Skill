#include<iostream>
#include <algorithm>
using namespace std ;

bool Check_Anagram(string s , string t)
{	
	if(s.length() != t.length())
	{
		return false ;
	}
	string ss = s ;
	string ts = t ;
	
	sort(ss.begin(), ss.end());
	sort(ts.begin(), ts.end());
	
	return (ss == ts);
	
}

int main()
{
	int n ;
	string s , t ;
	
	cin >> n ; 
	
	for(int i = 0 ; i < n ; i++)
	{
		cin >> s >> t ;

		if(Check_Anagram(s,t))
		{
			cout << "ANAGRAM \n" ;
		}else
		{
			cout << "NOT ANAGRAM \n" ;
		}
		
	}
	
}
