#include<iostream>
using namespace std;
  class Myclass{

public:
        int pi=3.14,r;
            void function1(){
                cout<<"enter radius of circle:"<<endl;
                cin>>r;
            }
  };

    class A:public Myclass{
        public:
             float tr;
            void function2(){

                    tr = r*r*(pi);
                 cout<<"the area of circle is:"<<tr<<endl;
            }

    };
    class B:public A{
        public:
            void function3(){
                float t;
                t = 4*tr*(r/3);
                cout<<"the volume of sphere is:"<<t<<endl;

            }

    };

    int main(){

        B g;
        g.function1();
        g.function2();
        g.function3();
        return 0;
    }


