#include<iostream>
using namespace std;
int main()
{
    string str; 
    cin>>str;
    int n = str.size();
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= str[i]-48;
    }
    int oddsum=0,evensum=0;
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
            evensum+=arr[j];
        else
            oddsum+=arr[j];
    }

    int difference=evensum-oddsum;
    if(difference<0)
        difference*=-1;
    cout<<difference;
}