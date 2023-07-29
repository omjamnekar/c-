
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream rw;
	rw.open("demo.txt",ios::out);
	char name[20];
	int rollno,age;
	cout<<"Enter your name:"<<ends;
	cin.getline(name,20);
	cout<<"Enter your Rollno.:"<<ends;
	cin>>rollno;
	cout<<"enter your age:"<<ends;
	cin>>age;
	rw<<name<<ends<<rollno<<ends<<age<<endl;
	rw.close();
	rw.open("demo.txt",ios::in);
	rw.getline(name,20);
	rw>>rollno;
	rw>>age;
	cout<<"Student details read for file"<<endl;
	cout<<"Name:="<<name<<endl;
	cout<<"Rollno:="<<rollno<<endl;
	cout<<"Age:="<<age<<endl;
	rw.close();
}
