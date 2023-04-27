#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag;
    int sum;
    int arr[]={1,3,6,5,0,1,-1};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        sum=arr[i];
        for (int j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
                flag=true;
        }

    }

    if(flag==true)
        cout<<"Present";
    return 0;
}