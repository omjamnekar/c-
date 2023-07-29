#include<iostream>
using namespace std;

    class Test{

    private:
        int num;
    public:
        Test():num(6){}


        void operator ++(){
        num = num -2;
        }
        void operator --(){
        num = num +2;
        }


        void print(){
        cout<<"the count is:"<<num<<endl;
        }

    };

    int main()
    {

        Test tt,yy,xx;
        ++tt;
        --tt;
        --yy;
        ++xx;

        tt.print();
        yy.print();
        xx.print();
        return 0;
    }
