#include<bits/stdc++.h>
using namespace std;


void rec_num(int i)
{
if(i > 10) // base condition you can change this to do in reverse order too
{
    return ;
}

cout<<i<<endl;

rec_num(i+1); // recursive function 

}

int main()
{



rec_num(0); // calling function 



return 0;
}