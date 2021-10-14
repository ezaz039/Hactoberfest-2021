#include <iostream>

using namespace std;
void swap(int *a,int *b){
int z;
z=*a;
*a=*b;
*b=z;
}
int main()
{ int x,y;
    cout<<"Enter any number!"<<endl;
    cin>>x;
    cout<<"Enter another number!"<<endl;
    cin>>y;
    cout<<"1st number!"<<x<<endl;
    cout<<"2nd number!"<<y<<endl;

    //int z;
    //z=x;
    //x=y;
    //y=z;
    swap(&x,&y);
    cout<<"1st number!"<<x<<endl;
    cout<<"2nd number!"<<y<<endl;
    return 0;
}
