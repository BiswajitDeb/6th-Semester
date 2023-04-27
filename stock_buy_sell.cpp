#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,7,6,3,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> profit;
    //int buy,sell;
    vector<int> buy;
    vector<int> sell;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit.push_back(arr[i]-arr[i-1]);
            //buy=i-1;
            //sell=i;
            buy.push_back(i-1);
            sell.push_back(i);
        }
    }

    int index;
    int max_profit=profit[0];
    for(int i=0;i<profit.size();i++)
    {
        if(profit[i]>max_profit)
        {
            max_profit=profit[i];
            index=i;
        }
            
    }

    cout<<"The best day to buy the stock is : "<<buy[index]<<endl;
    cout<<"The best day to sell the stock is : "<<sell[index]<<endl;
    cout<<"The profit is : "<<profit[index];

    return 0;
}