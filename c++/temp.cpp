#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream rw;
    rw.open("demo1.txt",ios::out);
    char name[20];
    int rollno,age;
    cout<<"Enter your name:"<<endl;
    cin.getline(name,20);
    cout<<"Enter your Rollno.:"<<endl;
    cin>>rollno;
    cout<<"enter your age:"<<endl;
    cin>>age;
    cout<<name<<endl<<rollno<<endl<<age<<endl;
    rw.close();

    rw.open("demo1.txt",ios::in);
    rw.getline(name,20);
    rw>>rollno;
    rw>>age;
    cout<<"Student details read for file"<<endl;
    cout<<"Name:="<<name<<endl;
    cout<<"Rollno:="<<rollno<<endl;
    cout<<"Age:="<<age<<endl;
    rw.close();
}
