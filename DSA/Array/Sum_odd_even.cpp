//Sum of all the even numbers and sum of all the odd numbers in the array 
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int evensum=0,oddsum=0;
    cout<<"Enter the array size : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
            evensum+=arr[j];
        else 
            oddsum+=arr[j];
    }
    cout<<"Sum of all the even numbers is : "<<evensum<<endl;
    cout<<"Sum of all the odd numebrs  is : "<<oddsum<<endl;
    return 0;
}