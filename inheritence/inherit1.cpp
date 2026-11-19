#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    string color;

    void eats(){
        cout<<"eating\n";
    }

    void breathes(){
        cout<<"breathes\n";
    }
    
};

//INHERITENCE
class Fish: public: Animal{  
    int fins;

    void swim(){
        cout<<"swims\n";
    }
};

int main(){

    return 0;
}