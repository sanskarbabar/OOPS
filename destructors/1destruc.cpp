#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name= name;
        this->color=color;
        mileage= new int; //dynamic allocation 
        *mileage= 12;
        
    }

    //custom constructor
    Car(Car &original){
        cout<<"copying..."<<endl;
        name=original.name;
        color=original.color;
        mileage= new int; // deep copy
        *mileage= *original.mileage;
        
    }

    // Destructor 
    ~Car(){
        cout<<"object is destructing..."<<endl;

    }
};

int main(){
    Car c1("maruti","white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}