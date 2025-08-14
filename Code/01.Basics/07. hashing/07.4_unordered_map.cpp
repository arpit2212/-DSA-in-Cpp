#include<bits/stdc++.h>
using namespace std ; 

int main()
{
    int n;
    cout<<"Enter the no of elements in array : ";
    cin>>n;
    unordered_map<int,int> mpp; 
    int arr[n]; 
    

    for(int i = 0; i < n ; i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
        mpp[arr[i]] ++;
    }

    for(auto it : mpp)
    {
        cout<<"element : "<<it.first<<" and its value is : "<<it.second<<endl;
    }

    int q ; 
    cout<<"Enter the number of querry : ";
    cin>>q;
    while(q--)
    {
        int n ; 
        cout<<"Enter the querry :  "; 
        cin>>n; 

        cout<<"The frequecny of query is : "<<mpp[n]<<endl; 

    }

}