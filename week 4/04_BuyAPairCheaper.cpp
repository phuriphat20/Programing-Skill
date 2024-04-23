#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int pro_product , buy_product ;

    cin >> pro_product ;
    int code_pro[pro_product] ;

    for(int i = 0 ; i < pro_product ; i++)
    {
        cin >> code_pro[i];
    }

    cin >> buy_product ;

    int code_buy[buy_product] ;

    for (int i = 0; i < buy_product ; i++)
    {
        cin >> code_buy[i] ;
    }

    int code_proSize = sizeof(code_pro) / sizeof(code_pro[0]);
    int code_buySize = sizeof(code_buy) / sizeof(code_buy[0]);
    sort(code_pro, code_pro + code_proSize);
    sort(code_buy, code_buy + code_buySize);

    int count;
    queue <int> q;
    for(int i = 0; i < pro_product; i++)
    {
        count = 0;
        for(int j = 0; j < buy_product; j++)
        {
            if(code_buy[j] == code_pro[i])
            {
                count++;
            }
        }
        if(count % 2 == 1)
        {
            q.push(code_pro[i]);
        }
    }

    if(!q.empty()){
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }else{
        cout << "NO";
    }
    return 0;
}
