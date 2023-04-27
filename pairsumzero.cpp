#include<iostream>
#include <ctime>
using namespace std;
int main()
{

    time_t s = std::time(0); // time_t is int64 in windows 10 64bit.
    time_t n;

    int n;
    bool flag;
    int sum;
    int arr[]={2,-2,5,8,-8,0,0,0};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
           
            if((arr[i]+arr[j])==0)
            {
                cout<<"The elements are : "<<arr[i]<<" and "<<arr[j]<<" \n";
            }
            
            
        }
    }

    return 0;
}