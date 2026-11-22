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

    //OPERATOR OVERLOADING
    Complex operator +(Complex &obj){
        int resReal= this-> real + obj.real;
        int resComp= this-> img + obj.img;

        Complex c3(resReal, resComp);
        c3.showNum();
        

    }
};

int main(){
    Complex c1(2,3);
    Complex c2(2,4);

    c1.showNum();
    c2.showNum();

    c2+c2; // c1.operator+(c2); can be written as this too, it also means same

    return 0;

}