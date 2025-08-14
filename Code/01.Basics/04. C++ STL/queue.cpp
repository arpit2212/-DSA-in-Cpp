#include<bits/stdc++.h>

using namespace std ; 


void queueexplain()
{


    queue <int> qu ; 

    // pushing elements in the queue 
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.emplace(4);


    // using queue fucntions 

    cout<<qu.back()<<endl;
    qu.back() += 5 ;  // add 5 in the last the element of the queue 
    cout<<qu.back()<<endl;


    //printing front of queue

    cout<<qu.front()<<endl;
    
    // pop in queue
    
    qu.pop();
    
    cout<<qu.front()<<endl;


    // travelsing whole queue 

    cout<<" whole queue : "; 

    while(!qu.empty())
    {
 
        cout<<qu.front()<<" ";
        
        qu.pop();

        

    }

    cout<<endl;

}

void preorityqueue()
{

    // priority queue always stroe the maximum number first 

priority_queue <int> pq ; 

pq.push(2);
pq.push(4);
pq.emplace(10);
pq.push(3);


cout<<pq.top();  // it will store like this { 10 , 4 , 3 , 2 }

// travelsing whole priority queue 

cout<<" whole priority queue : "; 

    while(!pq.empty())
    {
 
        cout<<pq.top()<<" ";
        
        pq.pop();

        

    }

    cout<<endl;



}


int main ()
{


    queueexplain();

    preorityqueue();

        


}