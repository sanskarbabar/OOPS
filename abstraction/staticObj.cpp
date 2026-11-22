#include<iostream>
#include<string>
using namespace std;

class Example{
    public:
   Example(){
    cout<<"constructor"<<endl; 
   }
    
   ~Example(){
    cout<<"destructor"<<endl;
   }
};


int main(){
    int x=0;

    if(x==0){
        static Example e1; // static obj created 
    }
    
    cout<<"code ending"<<endl;
    return 0;
}