#include <iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    //  CONSTRUCTOR
       Car(string name, string color){
        cout<<"constructor is called... object being created"<< endl;
        this-> name= name;
        this-> color= color;
        // *this.name or *this.color is also same as this-> name.....
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