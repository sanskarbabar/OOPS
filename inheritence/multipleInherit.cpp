#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    string name;
    int salary;
};

class Student{
    public:
    int rollno;
    float cgpa;

};

class TA: public Teacher, public Student{
    public:
    string name;

};

int main(){
    TA t1;

    t1.name= "beta";
    t1.rollno= 24;

    cout<<t1.name<<endl;
    cout<<t1.rollno<<endl;
 
    return 0;
}