#include<iostream>
#include <ctime>
using namespace std;
int main()
{
    int n;
    bool flag;
    int sum;
    int arr[]={2,-2,5,8,-8};
    n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0,j=n-1;i<n,j>0;i++,j--)
    {
        if(arr[i]<0 && arr[j]>0)
        {
            swap(arr[i],arr[j]);
        }
    }

    cout<<"The final array is : ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}