#include<bits/stdc++.h>
using namespace std ; 

bool Check_prime(int n)

{
    bool yes = true ; 
    bool no = false ; 

    int cnt = 0 ; 

    for(int i = 1; i <=sqrt(n); i++ )

    {
        if( n % i == 0 )
        {
            cnt++;
        }
        if((n/i) != 1)
        {
            cnt++;
        }
    }

    if(cnt == 2 )
    {
        return yes ; 
    }
    else 
    {
        return no ; 
    }

   
}

int main ()
{

    int n; 
    cout<<"enter the no : ";;
    cin>>n ; 
    cout<<Check_prime(n);

}