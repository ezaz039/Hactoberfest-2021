//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
using namespace std;
class student{
    private:
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//default constructor

    student(string s, int a, int g){              
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }//parameterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }//copy constructor

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    bool operator == (student &a){
    if (name == a.name && age == a.age && gender == a.gender)
    {
        return true;
    }
    return false;
    }

    void getName(){
        cout<<name<<endl;
    }

    void setName(string s){         //for accessing private member function
        name = s;               
    }

    void printinfo(){
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }
};
int main(){
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout<<"enter name"<<endl;
        cin>>s;
        arr[i].setName(s);              //assigning value to private member using  function
        cout<<"enter age"<<endl;
        cin>>arr[i].age;
        cout<<"enter gender"<<endl;
        cin>>arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printinfo();
    }
    student a("dishant",20,1);
    a.printinfo();
    student b;
    student c = a;
    if (c==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
    
    return 0;
}
