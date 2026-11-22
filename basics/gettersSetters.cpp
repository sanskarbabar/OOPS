#include <iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;

public:

    void setName(string nameValue){
        name= nameValue;
    }

    void setCgpa(float cgpaValue){
        cgpa= cgpaValue;
    }

    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }

};

int main(){
    Student s1;
    s1.setName("Sanskar");
    s1.setCgpa(9.4);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;

    

    return 0;
}