#include <iostream>
class Student{

    int grade;
    public:

    Student(int grade){
        this->grade=grade;
    }
    friend int operator++(Student& ref);
};
int operator++(Student& ref){
    ++ref.grade;
    return ref.grade;
}
int main(){

    Student obj(9);
    std::cout<<++obj<<std::endl;   //Pre-Increment

    return 0;
}