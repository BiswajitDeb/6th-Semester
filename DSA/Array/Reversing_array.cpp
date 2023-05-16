#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elemnts : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"The reversed arrya is : ";
    int j=n-1;
    while(j>=0)
    {
        cout<<arr[j];
        j-=1;
    }
}