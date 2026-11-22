#include<iostream>
#include<string>
using namespace std;

class Complex{
    int real;
    int img;

public:
    Complex(int r, int i){
        real= r;
        img= i;

    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(2,3);

    c1.showNum();

    return 0;

}