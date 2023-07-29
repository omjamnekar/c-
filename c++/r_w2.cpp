 # include <iostream>
  # include <conio.h>
  using namespace std;
   class employee
   { private: int emp_id; char emp_name[30]; double salary; void getinfo() { cout<<"Enter Name:"<<ends; cin>>emp_name; cout<<"Enter ID:"<<ends; cin>>emp_id; cout<<"Enter salary:"<<ends; cin>>salary; } public: void displayinfo() { getinfo(); cout<<endl<<"THE INFORMATION ENTERED IS :"<<endl; cout<<"Name is "<<emp_name<<endl; cout<<"ID is "<<emp_id<<endl; cout<<"Your salary is "<<salary<<endl; } }; int main() { employee e1; e1.displayinfo(); return 0; }
