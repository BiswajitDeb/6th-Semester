#include<iostream>
#include<vector>
using namespace std;


int main()
{

    vector<int> arr{5,7,1,4};
    vector<int> arr_copy{0,0,0,0};

    int n=arr.size();
    int key;
    cout<<"Key: ";
    cin>>key;

    int start,end;
    if(key>0)
    {
        for(int i=0;i<n;i++)
        {
            start=(i+1)%neswddeswazqa;
            end=(start+key);
            for(int j=start;j<start+key;j++)
            {
                arr_copy[i]+=arr[j];

            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr_copy[i]<<" ";
    }

}