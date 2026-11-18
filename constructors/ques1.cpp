// Create a User class with properties : id (private), username (public) & password (private).

// Its id should be initialized in a parameterised constructor.

// It should have a Getter & Setter for password.

#include<iostream>
#include<string>
using namespace std;

class User{

    int id;
    string password;


public:
    string username;
    User(int id){
        this-> id = id;
    }
// GETTER ,SETTER
    string getPass(){
        return password;
    }

    void setPass(string password){
       this-> password= password;
   
    }
     
};

int main(){
    User u1(01);
    u1.username = "sanskar";
    u1.setPass("sansu");

    cout<< "username: "<< u1.username<< endl;
    cout<<"password: "<< u1.getPass()<<endl;
    return 0;
}