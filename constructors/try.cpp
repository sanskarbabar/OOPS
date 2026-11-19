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
        this->id= id;
     }

     string getUser(){
        return username;
     }

     void setUser(string username){
        this->username= username;
     }

     string getPass(){
        return password;
     }
     void setPass(string password){
        this->password= password;
     }
};

int main(){
    User u1(123);
    u1.setUser("sanskar");
    u1.setPass("abcd");

    cout<<u1.getUser();
    cout<<u1.getPass();

    return 0;


}