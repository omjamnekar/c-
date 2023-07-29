#include<iostream>

using namespace std;

class cal
{
private:
    int num,rev=0,rem;

public:
    void revers()
    {
        cout<<"enter a number:"<<endl;
        cin>>num;
        int n =sizeof(num);

        for(int i = 0; i<=n ; i++)
        {
            rem = num%10;
            rev = rev*10+rem;
            num = num/10;
        }

        cout<<"the reverse of the number:"<<rev<<endl;
    }


void fibonnaci()
{
    int  c=1,b=0,temp;
    cout<<b<<endl;
    cout<<c<<endl;

    for(int i =0; i<=10; i++)
    {


        temp = c+b;
        b=c;
        c=temp;

        cout<<temp<<endl;

    }


}

void fact(){

        int a ,b=1,i;
            cout<<"enter a number for factorial:"<<endl;
            cin>>a;
            for (i=1; i<=a ; i++)
            {

                b=b*i;
            }
            cout<<"the factorial is:"<<b<<endl;
          }



};

int main()
{

    cal t;
    t.revers();
    t.fibonnaci();
    t.fact();

}
