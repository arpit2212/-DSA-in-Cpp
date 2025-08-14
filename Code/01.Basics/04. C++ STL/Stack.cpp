#include<bits/stdc++.h>

using namespace std ; 


void stackexplain()
{


    stack<int> st; 

    // push element in the stack
    st.push(1); 
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    // pop element in the stack
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;


    // to see all the elements of stack
   stack <int> temp = st; 

   cout << "All elements in the stack (top to bottom): ";

   while(!temp.empty())
   {
    cout<<temp.top()<<" ";
    temp.pop();
   }

}




int main ()
{


stackexplain();



}