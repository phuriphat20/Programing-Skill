#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;

bool IsInside(vector<string> assembly, string str)
{
    for (int i = 0; i < (int)assembly.size(); i++)
    {
        if(assembly[i] == str)
        {
            return true;
        }
    }
    return false;
}
bool compareFromLastToFirst(string& a, string& b) 
{
    int size_a = (int)a.size();
    int size_b = (int)b.size();

    int min_size = (int)min(size_a, size_b);
    for (int i = 0; i < min_size; ++i) {
        if (a[size_a - i - 1] != b[size_b - i - 1]) {
            return a[size_a - i - 1] > b[size_b - i - 1];
        }
    }
    return size_a < size_b;
}

int main()
{
    int n;
    string tmp;
    vector<string> assembly;
    string str;
    string str_binary;
    cin >> n;
    cin >> str;
    cin >> str_binary;
    for (int i = 0; i < (int)str.length(); i += n)
    {
        tmp = "";
        for (int j = i; j < i + n; j++)
        {
            tmp += str[j];
        }
        if(assembly.empty())
        {
            assembly.push_back(tmp);
        }
        else if(!IsInside(assembly, tmp))
        {
            assembly.push_back(tmp);
        }
    }
    sort(assembly.rbegin(), assembly.rend(), compareFromLastToFirst);
    for (int i = 0; i < (int)assembly.size(); i++)
    {
        cout << assembly[i] << " " << i << endl;
    }
    int bit = 0;
    for (int i = 0; i < (int)assembly.size(); i++)
    {
        if (pow(2, i) > (int)assembly.size())
        {
            bit = i;
            break;
        }   
    }
    
    for (int i = 0; i < (int)str_binary.length(); i += bit)
    {
        tmp = "";
        for (int j = 0; j < bit; j++)
        {
            tmp += str_binary[i + j];
        }
        bitset<32> bitset(tmp);
        int tmp = (int)bitset.to_ulong();
        cout << assembly[tmp];
        //cout << assembly[stoi(tmp)];
    }
    
    return 0;
}