#include<iostream>
#include<cstring>
using namespace std;
    int main(){

    char std1[20]= "mango",buffer[20];
    do{

    cout<<"enter a name"<<endl;
    cin>>buffer;
    }
      while(strcmp(std1,buffer)!=0);

            cout<<"answer is correct"<<endl;


    }

