//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
using namespace std;

//Function Overloading

class Dishant{
    public:
    void fun(){
        cout<<"a function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"a function with int argument"<<endl;
    }
    void fun(double y){
        cout<<"a function with double argument"<<endl;
    }
};

//Operator Overloading
class Complex{
    private:
    int real,imag;

    public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }

};

//Virtual Functions
class base{
    public:
    virtual void print(){
        cout<<"this is the base class print function"<<endl;
    }
    void display(){
        cout<<"this is the base class display function"<<endl;
    }
};

class derived:public base{
    public:
    void print(){
        cout<<"this is the derived class print function"<<endl;
    }
    void display(){
        cout<<"this is the derived class display function"<<endl;
    }
};

int main(){
    Dishant d;
    d.fun();
    d.fun(3);
    d.fun(4.2);

    Complex c1(4,5),c2(3,7);
    Complex c3 = c1 + c2;
    c3.display();

    base *baseptr;
    derived s;
    baseptr = &s;

    baseptr -> print();

    baseptr -> display();
    return 0;
}