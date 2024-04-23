#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool firstDo(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
	int t, n, k;
	int s, f;
	vector<pair<int, int>> water;

	cin >> t >> n >> k;
	for(int i = 0;i < n;i++)
    {
		cin >> s;
		f = (s + k) - 1;

		water.push_back(make_pair(s, f));
	}
	sort(water.begin(), water.end(), firstDo);

	int count = 0;
	int a = 1;

	for(int i = 0;i < n;i++)
    {
        if(water[i].first <= a)
        {
            a = water[i].second;
        }
        else
        {
            if(i == 0)
            {
                count += water[i].first - a;
                a = water[i].second;
            }
            else
            {
                count += (water[i].first - a) - 1;
                a = water[i].second;
            }
        }

        if(i == (n-1))
        {
            count += t - a;
        }
	}
	cout << count;

	return 0;
}
