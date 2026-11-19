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
class Fish: public Animal{  
    public:
    int fins;

    void swim(){
        cout<<"swims\n";
    }
};

int main(){
    Fish f1;
     f1.swim();
     f1.breathes();
     f1.eats();

     f1.color="blue";
     cout<<f1.color<<endl;
 
    return 0;
}