#include<iostream>
using namespace std ; 


void print_star(int rows , int columns)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < columns ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}



int main ()
{

    int rows; 
    int columns;
    
    cout<<"Enter number of rows : ";
    cin>>rows;

    cout<<"Enter number of columns : ";
    cin>>columns;

    print_star(rows , columns);


}