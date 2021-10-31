#include<iostream>
#include<string>
#include <sstream>

using namespace std;



class Program
{
    public:
        int EmpID=0;
        string name;

};


int main()
{
   

    Program obj;

    cout<<"Enter Employee Id:"<<endl;
    cin>>obj.EmpID;

    cout<<"The Employee IDs"<<obj.EmpID<<endl;   

    cout<<"Enter the Employee Name:"<<endl;
    cin>>obj.name;

    cout<<"The Employee Name is:"<<obj.name<<endl;

    return 0;
}





