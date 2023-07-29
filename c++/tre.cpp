#include<iostream>
    using namespace std;

  class A{



public:
    int a,b,c;
        void acc(){

            cout<<"enter a marks of subject1:"<<endl;
            cin>>a;
            cout<<"enter a marks of subject2:"<<endl;
            cin>>b;
            cout<<"enter a marks of subject3:"<<endl;
            cin>>c;
        }

  };
  class B:public A{



public:
     int total;
        void Total(){
        total = a+b+c;

            }


  };
  class C :public B{



  public:

       float result;

    void result1(){
    result = (total*100)/300;
        cout<<"the result of student is:"<<result<<endl;
    }


  };

  int main()
  {

      C c;
      c.acc();
      c.Total();
      c.result1();
      return 0;
  }

