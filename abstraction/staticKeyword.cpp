#include<iostream>
#include<string>
using namespace std;

void counter(){
    static int count = 0;  //static varaible
    count++;
    cout<< count<<endl;
}


int main(){
    counter(); //1
    counter();  // 2
    counter();  //3
    return 0;
}