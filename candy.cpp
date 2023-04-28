#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> rating{1,0,0,2};
    vector<int> candies;
    int n = rating.size();
    int sum=0;

    for(int i=0;i<n;i++)
    {
        candies.push_back(1);
    }

    for(int i=0;i<=n;i++)
    {
        if(i==0 && rating[i]>rating[i+1])
            candies[i]=candies[i+1]+1;
        if(i==n && rating[i]>rating[i-1])
            candies[i]=candies[i-1]+1;

        if(rating[i]>rating[i+1] || rating[i]>rating[i-1])
        {
            candies[i] = max(candies[i+1],candies[i-1]) + 1;
        }

    }

    for(int i=0;i<n;i++)

    {
        cout<<candies[i]<<endl;
        sum+=candies[i];
    }

    cout<<sum;
    return 0;
}