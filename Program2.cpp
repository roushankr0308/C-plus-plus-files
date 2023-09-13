#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int rollNo;
    int x,y,z;
    int average  ;

public:
    //member function to get student's details
    void getDetails(void);
    //member function to print student's details
    void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter the marks of three test: ";
    cin >>x>>y>>z;

    average  = (x + y + z)/3 ;
}

//member function definition, outside of the class
void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",Roll Number:" << rollNo << ",The aveage marks is :" << average ;
}

int main()
{
    student std[MAX]; //array of objects creation
    int n, loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;

    for (loop = 0; loop < n; loop++) {
        cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].putDetails();
    }

    return 0;
}
