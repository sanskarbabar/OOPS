#include <iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    
    
    void start(){
        cout<<"car has started"<<endl;
    }

    void stop(){
        cout<<"car has stopped"<< endl;
    }
    
   
};

int main(){
    Car c1;

    c1.start();
    c1.stop();

     return 0;
}