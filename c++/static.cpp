#include<iostream>
    using namespace std;
    class Myclass{

private:
    static int count1;
public:
    Myclass(){

        count1++;
        }
        static int showcount(){
            cout<<"the count is:"<<count1<<endl;
        }

    };

    int Myclass::count1 = 0;

    int main(){


        Myclass obj1,obj2,obj3,obj4;
            Myclass::showcount();
            return 0;
    }
