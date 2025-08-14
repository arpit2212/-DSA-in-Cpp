#include<bits/stdc++.h>

using namespace std ; 


void listexplain()
{


    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.emplace_front(10);

    for (auto it : ls)

    {
        cout<<it<<" ";
    }

}


int main ()
{


listexplain();



}