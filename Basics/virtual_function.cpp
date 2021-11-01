#include <iostream>

using namespace std;




class A
{
    public:
        virtual  void display()
        {
            cout<<"Base Class"<<endl;
        }
};

class B:public A
{
    public:
        void display()
        {
            cout<<"Derived Class"<<endl;
        }
};



int main()
{
    A *ptr;

    
    B b;

    ptr=&b;

    ptr->display();

    return 0;

};