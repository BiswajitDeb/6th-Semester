#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> matchsticks{3,3,3,3,4};
    int max = *max_element(matchsticks.begin(),matchsticks.end());
    //int total_perimeter=0;

//Calculating perimeter
    // for(int i=0;i<matchsticks.size();i++)
    // {
    //     total_perimeter+=matchsticks[i];

    // }
    // int perimeter_per_side=(total_perimeter-max)/3;
    int flag=-1;
    int sum=0;
    for(int i=0;i<matchsticks.size();i++)
    {
        sum=0;
        for(int j=i;j<matchsticks.size();j++)
        {
            if(matchsticks[j]==max)
                continue;
            sum+=matchsticks[j];
        }
        if(sum==max)
            {
                flag=1;
                break;
            }
    }
    if(flag==1)
        cout<<"Possible";
    else
        cout<<"Not possible";

}