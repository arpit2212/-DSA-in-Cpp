#include<bits/stdc++.h>
using namespace std ; 

int main ()
{

 int n;
    cout<<"Enter no of elements in array :"; 
    cin>>n;
    int arr[n];
    int hash[13] = {0};

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter array "<<i+1<<" element :";
        cin>>arr[i];
        hash[arr[i]]++;
    }

    int q ; 
    cout <<"enter number of querry :";
    cin >> q; 

    while(q--)
    {
        int n ; 
        cin>> n ; 
        cout<<hash[n]<<endl; 
        
    }

return 0 ; 
}