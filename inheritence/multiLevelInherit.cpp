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

//MULTILEVEL-INHERITENCE
class Mammals: public Animal{  
    public:
    string bloodType;
    
    Mammals(){
        bloodType = "warm";
    }

};

class Dog: public Mammals{
public:
    void tailWags(){
        cout<<"a dog wags its tail";
    }
};

int main(){
    Dog d1;
    d1.color= "blue";

    d1.eats();
    d1.breathes();
    
    cout<<d1.bloodType<<endl;
    d1.tailWags();
 
    return 0;
}