#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    string input;
    
    getline(cin, input);
    istringstream iss(input);
    
    string prev_s, s;

    iss >> prev_s;

    for (char& ch : prev_s) 
	{
        ch = tolower(ch);
    }
    
    while (iss >> s) 
	{
        for (char& ch : s) 
		{
            ch = tolower(ch);
        }

  
        cout << prev_s << " " << s << endl;
        prev_s = s;
    }

    return 0;
}

