#include <iostream>
using namespace std;
class node
{
    public :
        int info;
        node* next;
        node(int x, node* n=NULL)
        {
            info=x;
            next=n;
        }
};
class stacktype
{
    node* top;
    public: stacktype()
    {
        top=NULL;
    }
    void push(node*);
    int pop();
    int isempty();
    void clear1();
    void display();
    node* createnewNode(int x);
    int count1();
    int topmost();
};
int stacktype:: isempty()
{
    if(top==NULL)
        {
            return 1;
        }
    else
        return -1;
}
void stacktype:: clear1()
{
    node* p;
    p=top;
    for(p=top;
    top!=NULL;
    top=top->next)
    {
        top=top->next;
        delete p;
        p=top;
    }
}
int stacktype::pop()
{
    int d;
    node* p;
    p=top;
    top=top->next;
    d=p->info;
    delete p;
    return d;
}
node* stacktype::createnewNode(int x)
{
    node* nptr;
    nptr=new node(x, NULL);
    return nptr;
}
void stacktype::push(node* nptr)
{
    if(top==NULL)
        {
                top=nptr;
        }
    else
        {
            nptr->next=top; top=nptr;
        }
}
void stacktype::display()
{
    node* ptr;
    if(top== NULL)
    {
            cout<<"\n Stack is empty. Nothing to display"<<endl;
    }
    else
    {
            cout<<"Contents of the stack starting from top most point are :"<<endl;
            for(ptr=top; ptr!=NULL; ptr=ptr->next)
            cout<<ptr->info<<" ";
            cout<<endl;
    }
}
int stacktype:: count1()
{
    int c1;
    node* ptr;
    if(top== NULL)
    {
        return 0;
    }
    else
    {
        for(ptr=top; ptr!=NULL; ptr=ptr->next)
        c1++;
        return c1;
    }
}
int stacktype::topmost()
{
    return(top->info);
}
int main()
{
    stacktype s;
    int e,a,d,choice,c1,top_node;
    char c='y';
    node* temp;
    while(c=='y' || c=='Y')
    {
        cout<<"Main menu : "<<endl;
        cout<<"1. Push "<<endl;
        cout<<"2. Pop "<<endl;
        cout<<"3. Isempty "<<endl;
        cout<<"4. Display "<<endl;
        cout<<"5. Clear "<<endl;
        cout<<"6. Count "<<endl;
        cout<<"7. Topmost "<<endl;
        cout<<"Enter your choice (1-7) ";
        cin>>choice;
        switch(choice)
        {
            case 1 :
                cout<<"Enter a value ";
                cin>>a;
                temp=s.createnewNode(a);
                s.push(temp);
                s.display();
                break;
            case 2 :
                e= s.isempty();
                if(e==1)
                cout<<"Stack is empty ! UnderFlow"<<endl;
                else
                {
                    d=s.pop();
                    cout<<d<<" has been deleted. "<<endl;
                    s.display();
                }
                break;
                case 3:
                    e= s.isempty();
                    if(e==1)
                    cout<<"Stack is empty "<<endl;
                    else
                    cout<<"Stack is not Empty"<<endl;
                    break;
                case 4:
                    s.display();
                    break;

                case 5 :
                    e= s.isempty();
                    if(e==1)
                    cout<<"Stack is empty "<<endl;
                    else
                    {
                        s.clear1();
                        s.display();
                    }
                    break;
                    case 6 :
                        c1=s.count1();
                        cout<<"Total elements/nodes in the stack are:"<<c1<<endl;
                        break;
                    case 7:
                        e= s.isempty();
                        if(e==1)
                        cout<<"Stack is empty "<<endl;
                        else
                        {
                            top_node=s.topmost();
                            cout<<"Topmost element/ node in the stack is :"<<top_node<<endl;
                        }
                        break;
                        default:
                            cout<<"You entered a wrong choice"<<endl;
        }
        cout<<"Do you want to continue ? "; cin>>c;
}
return 0;
}
