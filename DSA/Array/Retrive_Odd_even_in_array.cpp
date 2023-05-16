//Retrieve even and odd elements present in an array.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> even;
    vector<int> odd;
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
            even.push_back(arr[j]);
        else 
            odd.push_back(arr[j]);
    }

    cout<<"THe odd numbers are : ";
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"The even numbers are : ";
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}