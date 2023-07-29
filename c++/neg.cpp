#include<iostream>
using namespace std;
 class stdl{

private:
    int a,b;
public:
    stdl(int x,int y){
        a=x;
        b=y;
    }

    void operator -(){
        a=-a;
        b=-b;
    }

    void display(){

        cout<<a<<b<<endl;
    }
 };

    int main(){
        stdl f(2,4);
        f.display();
        -f;
        f.display();
    }
