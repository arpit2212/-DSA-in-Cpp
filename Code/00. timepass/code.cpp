#include<iostream>

using namespace std ; 

int main()
{

    int num = 0 ;

    string input;
    cin>>input;

    char element;
    cin>>element;

    int size = input.length();


    for(int i = 0; i < size ; i++)
    {
        if( input[i] == element)
        {
            num++ ;
        }
    }
    
    cout<<num;


    return 0;
}


