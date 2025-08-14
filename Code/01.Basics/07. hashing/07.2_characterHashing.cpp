#include<bits/stdc++.h>
using namespace std ; 

int main ()
{

    string s;
    cout<<"Enter the string : "; 
    cin>>s;

    int length = s.size();

    int hash[26] = {0};

    for(int i = 0 ; i < length ; i++)
    {
       hash[s[i] - 'a']++;
    }

    int q ; 
    cout <<"enter number of querry : ";
    cin >> q; 

    while(q--)
    {
        char n ; 
        cout<<"Enter the number you want to search : ";
        cin>> n ; 
        cout<<"frequency of character used is : "<<hash[n -'a']<<endl; 
        
    }

return 0 ; 
}