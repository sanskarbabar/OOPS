#include <iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    //  CONSTRUCTOR
       Car(string nameValue, string colorValue){
        cout<<"constructor is called... object being created"<< endl;
        name= nameValue;
        color= colorValue;
        }


    void start(){
        cout<<"car has started"<<endl;
    }

    void stop(){
        cout<<"car has stopped"<< endl;
    }
    
    // GETTER
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }

};

int main(){
    Car c1("maruti" , "white");

    cout<<"car name: "<< c1.getName() <<endl;
    cout<<"car color: "<< c1.getColor() <<endl;

     return 0;
}