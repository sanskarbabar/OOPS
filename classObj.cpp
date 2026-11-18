#include <iostream>
using namespace std;

class Student{
    string name;
    float cgpa;

    void setName(string nameValue){
        name= nameValue;
    }

    void setCgpa(float cgpaValue){
        cgpa= cgpaValue;
    }

    void getName(){
        return name;
    }

    void getCgpa(){
        return cgpa;
    }

      void getPercentage(){
        cout<<(cgpa*10)<<'%'<<endl;

      }
};

int main(){
    Student s1;
    s1.cgpa = 9;
    s1.name= "Anu";
    cout<<s1.name<<endl;
    cout<< s1.cgpa<<endl;

    s1.getPercentage();

    return 0;
}