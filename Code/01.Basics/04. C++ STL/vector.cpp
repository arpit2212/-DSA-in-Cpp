#include<bits/stdc++.h>
using namespace std ; 

void vecto1()
{

    // vector initialization 

    vector<int> v;
    
    v.push_back(1);  // push 1 in the vector 
    v.emplace_back(2); // p 2 inush vector but it is more faster that push back

    vector<pair<int,int>> v2; // vector and pairs combination

    v2.push_back({1,2}); // needs curly braces 
    v2.emplace_back(1,2); // in emplace back it doenst need curly bracces 

    vector<int> v3(5,100); // makes 5 index for 100
    vector<int> v4(5); // makes 5 vector for 0 or garbage value depending on compiler 
    
    // vector transversing without iterator 
    
    cout<<v[0]<<" "<<v.at(1) <<" "<<v.size(); // old method not used 

    cout<<v.back() <<" "<<v.size(); // to point to the the last element of the vector 

    cout<<endl;
    
    
    
    
    
}
void vecto2()
{

    vector<int> v = {1,2,3,4,5};
    
    // vector transversing with iterator 
    
    vector<int>:: iterator it= v.begin();

    cout<<*(it)<<endl; //points to first index
    
    it++;
    
    cout<<*(it)<<endl; //points to second index because we increased the iterator 
    
    vector<int>:: iterator it2 = v.end(); //will points to the ouuter of the vector so we need to do it2--

    it2--;
    cout<<*(it2)<<endl; 


}

void vecto3()
{

    vector<int> V = {1,2,3,4,5,6};

    // Method 1 : 
    
    cout<<"using simple for loop"<<endl;

    for(int i = 0 ; i < 6; i++ )
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
    
    // Method 2 : 
    
    cout<<"using Complex loop"<<endl;

    for(vector<int>::iterator it= V.begin(); it!= V.end();it++)
    {
        cout<<*(it)<<" ";
        
    }
    cout<<endl;
    
    // Method 3 :
    
    cout<<"using Complex loop but using auto"<<endl;

    for(auto it= V.begin(); it!= V.end();it++) // Most recommnded 
    {
        cout<<*(it)<<" ";  
        
    }
    cout<<endl;
    
    // Method 4 :

    cout<<"using auto Advance loop"<<endl;

    for(auto it : V)
    {
        cout<<it<<" ";
       
    }
    cout<<endl;


}

void vecto4()
{
    vector<int> v = {1,2,3,4,5,6};

    v.erase(v.begin()+1);  // removes 2 {1,2,3,4,5,6} --> {1,3,4,5,6}

    v.erase(v.begin()+2,v.end()-1); // removes 2 {1,3,4,5,6} --> {1,3,6}

    for(auto it=v.begin(); it!= v.end();it++)
    {
        cout<<*(it)<<" ";
    }
}
void vecto5()
{
    vector<int> v = {1,2,3,4,5,6};

  

    for(auto it=v.begin(); it!= v.end();it++)
    {
        cout<<*(it)<<" ";
    }
}



int main()
{

// initalization + traversing 

// vecto1(); 

// traversing using itteretor 

// vecto2();

// printing a vector 

// vecto3();

// deleation in vector 

// vecto4();

//  insertion in Vector 

vecto5();


    return 0 ;
}