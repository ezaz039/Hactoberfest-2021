//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
using namespace std;

// Encapsulation ---> hiding the sensitive info. or unnecessary data
// Access Modifiers ---> Private, Public, Protected 

class a{
    private:                    //can not access outside the class & derived class 
    int a;
    void funcA(){
        cout<<"private";
    }

    public:                     //can be access outside the class & derived class
    int b;
    void funcB(){
        cout<<"public";
    }

    protected:                  //can not access outside the class but can be access by derived class
    int c;
    void funcC(){
        cout<<"protected";
    }

};

int main(){
    a d;
    d.funcB();
    return 0;
}