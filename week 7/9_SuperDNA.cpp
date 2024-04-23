#include <iostream>
#include <string>

using namespace std;

int findOverlap(const string &a, const string &b)
{
    for (int length = min(a.size(), b.size()); length > 0; --length)
    {
        if (a.substr(a.size() - length) == b.substr(0, length))
        {
            return length;
        }
    }
    return 0;
}

string findSuperDNA(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return s1;
    if (s2.find(s1) != string::npos)
        return s2;

    int overlap1 = findOverlap(s1, s2);
    int overlap2 = findOverlap(s2, s1);

    if (overlap1 > overlap2 || (overlap1 == overlap2 && s1 < s2))
    {
        return s1 + s2.substr(overlap1);
    }
    else
    {
        return s2 + s1.substr(overlap2);
    }
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s1;
        string s2;

        cin >> s1 >> s2;

        cout << findSuperDNA(s1, s2) << endl;
    }
}
