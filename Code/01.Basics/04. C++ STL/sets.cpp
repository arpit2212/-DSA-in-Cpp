#include<bits/stdc++.h>

using namespace std ;

void normalsets()

{

// it store everything in order and also its uniquue 


set<int> st; 

// pushing elements in the sets 

st.insert(10);
st.insert(1);
st.insert(3);
st.insert(7);

// storing value in sets 

auto it1 = st.find(3);

cout<<*it1<<endl;

// traversing in sets 

for( int it : st)

{
    cout<< it <<" ";
}
    cout<<endl;
}

void Multisets()

{

    // it stores everything in order but not unique can hold many entery of same value 

    multiset <int> st; 

    // pushing elements in the sets 

st.insert(10);
st.insert(1);
st.insert(1);
st.insert(1);
st.insert(3);
st.insert(7);

// storing value in sets 

auto a = st.find(3);

cout<<*a<<endl;


// traversing in sets 

for( auto it : st)

{
    cout<< it <<" ";

}

cout<<endl;

}

int arrayandsets( int arr[], int n )
{

    int arr2[n];

    multiset <int> ms ; 

    for(int i = 0 ; i < n ; i ++ )
    {
        ms.insert(arr[i]);
    }

    
auto it = ms.begin();
advance(it,n-1);

return *it;


    
    
}



int main()
{

// normalsets();

// Multisets();

int n;

cout<<"enter the number of elements : ";
cin>>n;

int arr[n]; 

for( int i = 0 ; i < n ; i++)
{
    cout<<" Enter your "<<i+1<<" element : ";
    cin>>arr[i];
    cout<<endl;
}


cout<<arrayandsets(arr, n);








}