#include<iostream>
using namespace std; 

int main ()
{
    int size;
    cout<<"What is size of array : ";
    cin>>size;
    
    int arr[size];

    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter your "<<i+1<<"th Element : ";
        cin>> arr[i];
    }

    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Your "<<i+1<<"th Element is : "<< arr[i] << endl; // Corrected line to display the element value
    }
}
