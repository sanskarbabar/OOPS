#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
     void show(){
        cout<<"parent class"<<endl;
     }
};

class Child: public Parent{
public:
    void show(){
        cout<<"child class"<<endl;
    }
};

int main(){
    Child c1;
    c1.show();

    return 0;
}