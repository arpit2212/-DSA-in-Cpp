#include<iostream>
#include<string>

using namespace std; 

class teachers 
{
    private: 
    double sallary; 
    public:
    string name; 
    string age; 
    string department; 

    void changeDepartment(string newDepartment)
    {
        department = newDepartment; 
    }

    void setSallary(double s)
    {
        sallary = s;
    }

    double getSallary()
    {
        return sallary;
    }
};

int main()
{
    double s;
    teachers t1;

    cout << "What is Teacher name: ";
    cin >> t1.name;

    cout << "What is Teacher age: ";
    cin >> t1.age;

    cout << "What is Teacher department: ";
    cin >> t1.department;

    cout << "What is Teacher salary: ";
    cin >> s;
    t1.setSallary(s);

    cout << "Teacher details are:" << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Department: " << t1.department << endl;

    // Fix: Call getSallary() with parentheses
    cout << "Teacher Salary is: " << t1.getSallary() << endl;

    return 0;
}
