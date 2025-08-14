#include<bits/stdc++.h>
using namespace std ; 
int func(int &a )
{

    return a ; 

}


int main()
{

    int a = 5 ; 

    int b = 10 ; 

   

    a = func(b);
    b = func(a);

    cout<<a<<b;

}