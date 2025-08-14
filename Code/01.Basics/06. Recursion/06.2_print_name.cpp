#include<bits/stdc++.h>
using namespace std;


void rec_num(int i,string name)
{
if(i > 10) // base condition you can change this to do in reverse order too
{
    return ;
}

cout<<name<<endl;

rec_num(i+1,name); // recursive function 

}

int main()
{



rec_num(0,"arpit"); // calling function 



return 0;
}