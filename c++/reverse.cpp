#include<iostream>
#include<string>
    using namespace std;
    int main(){

string rem,rev,num;
        cout<<"enter a string"<<endl;
        getline(cin,num);
         int length=num.length();
        for(int i =0; i<=length;i++)
        {
            rem[i] = num[i] %10;
            rev[i+1] = rev[i]*10+rem[i];
            num[i+1] = num[i] /10;
        }
        cout<<"the reverse is:"<<rev<<endl;
        return 0;

        }
