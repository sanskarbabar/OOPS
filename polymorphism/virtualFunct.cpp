#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    virtual void hello(){
        cout<<"parent hello"<<endl;
     }
};

class Child: public Parent{
public:
    void hello(){
        cout<<"child hello"<<endl;
     }
};

int main(){
    Child c1;
    Parent *ptr;

    ptr= &c1; //runtime binding
    ptr->hello(); //virtual function

    return 0;
}