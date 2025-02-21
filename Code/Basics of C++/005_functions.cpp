#include<iostream>
using namespace std; 


void input(int num ,int arr[])
{

for( int i=0 ; i < num ; i++)
{
    cout<<"enter "<<i+1<<" Number : ";
    cin>>arr[i];
}

}
void output(int num ,int arr[])
{
    int sum = 0;

for( int i=0 ; i < num ; i++)
{
    
    
    sum+= arr[i];
   
}

cout<<"the sum of your "<<num<<" are : "<<sum;

}



int main()
{

int num ; 


cout<<" Enter how many number sum do u want : ";
cin>>num;

int arr[num] ;

input(num , arr);
output(num , arr);

}

