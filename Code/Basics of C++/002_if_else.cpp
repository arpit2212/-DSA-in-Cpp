#include<iostream>
using namespace std; 

int main ()
{
    int marks; 
    cout<<"what is your Marks : ";
    cin>>marks;

    if(marks <= 25 ){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : F";
    }
    else if(marks > 25 && marks <= 44){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : E ";
    }
    else if(marks > 44 && marks <= 49){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : D";
    }
    else if(marks > 49 && marks <= 59){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : C";
    }
    else if(marks > 59 && marks <= 79){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : B";
    }
    else if(marks > 79 && marks <= 100){
        cout<<"Your Marks is : "<< marks <<" Your Grade is : A";
    }
    else{
        cout<<"Entered Wrong Marks";
    }
}
