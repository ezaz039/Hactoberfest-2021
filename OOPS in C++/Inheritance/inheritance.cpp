//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
using namespace std;

//  Inheritance
/*  Types Of Inheritance
    1. Single Inheritance
    2. Multiple Inheritance
    3. Multilevel Inheritance
    4. Hybrid Inheritance
    5. Hierarchical Inheritance     */

//Single Inheritance
class first{
    private:
    int a;
    public:
    void funcA(){
        cout<<"function of class a"<<endl;
    }
};

class second:public first {
    public:
    void funcB(){
        cout<<"function of class b"<<endl;
    }
};

//Multiple Inheritance
class first{
    private:
    int a;
    public:
    void funcA(){
        cout<<"function of class a"<<endl;
    }
};

class second {
    public:
    void funcB(){
        cout<<"function of class b"<<endl;
    }
};

class third:public first,public second {
    public:
};

//Multilevel Inheritance
class first{
    private:
    int a;
    public:
    void funcA(){
        cout<<"function of class a"<<endl;
    }
};

class second:public first {
    public:
    void funcB(){
        cout<<"function of class b"<<endl;
    }
};

class third:public second {
    public:
};

int main(){
    second s;
    s.funcA();
    third t;
    t.funcA();
    t.funcB();
    
    return 0;
}