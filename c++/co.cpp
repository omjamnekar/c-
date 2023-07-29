
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[20],b[20],temp[20];
    cout<<"Enter string 1:";
    cin>>a;
    cout<<"Enter string 2:";
    cin>>b;
    string v=strcpy(temp,a);
    cout<<"STRING COPY:"<<v<<endl;
    cout<<"STRING LENGTH:"<<strlen(a)<<endl;
    string d=strcat(a,b);
    cout<<"CONCATINATION:"<<d<<endl;

    string s1="NIKHIL";
    string r=s1.substr(2,2);
    cout<<"SUB STRING:"<<r<<endl;

        string p = s1;
    reverse(p.begin(),p.end());
    cout<<"REVERSE:"<<p<<endl;
    return 0;
}
