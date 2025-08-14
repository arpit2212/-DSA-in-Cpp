#include<bits/stdc++.h>
using namespace std ; 

void pairs()
{
    pair<int,int> pd = {1,1};
    
    pair<int , pair<int,int>> npd = { 1, {2,3}};

    pair<int,int> arr[] = {{1,2}, {2,3} , {4,5}};

    cout<<pd.first<<" "<<pd.second;
    cout<<endl;
    cout<<npd.first<<" "<<npd.second.second<<" "<<npd.second.first;
    cout<<endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<"  ";
    }
}


int main()
{

pairs();


    return 0 ;
}