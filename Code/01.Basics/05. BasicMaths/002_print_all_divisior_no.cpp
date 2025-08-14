#include<bits/stdc++.h>
using namespace std ; 

void all_divisor(int n)

{

    vector <int> v ;  

    for(int i = 1; i <=n ; i++ )

    {
        if( n % i == 0 )
        {
            v.push_back(i);
        }
    }

    for(auto it : v)
    {
        cout<<it<<" "; 
    }
}

int main ()
{

    int n; 
    cout<<"enter the no : ";;
    cin>>n ; 
    all_divisor(n);

}