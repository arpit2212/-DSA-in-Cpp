#include<bits/stdc++.h>
using namespace std ; 


void twoPointer(int i, int j, int arr[],int n)
{

    if(i >= j){

        return ; 
    }

    swap(arr[i],arr[j]);

    twoPointer(i+1,j-1,arr,n);

}



int main ()
{
    int n;
    cout<<"Enter no of elements in array :"; 
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter array "<<i<<" element :";
        cin>>arr[i];
    }

    twoPointer(0,n-1,arr,n);

    for(int i = 0 ; i < n ; i++)
    {
       
        cout<<arr[i];
    }
}