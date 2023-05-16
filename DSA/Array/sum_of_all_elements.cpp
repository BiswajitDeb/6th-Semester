#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j];
    }

    cout<<"The sum of all the lements in the array is : "<<sum;
}