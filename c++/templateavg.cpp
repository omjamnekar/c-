#include<iostream>
using namespace std;


    int main(){

        int var1,var2,var3;
        cout<<"enter a number:"<<endl;
            cin>>var1;
        cout<<"enter a number:"<<endl;
        cin>>var2;
         try{
             if(var2!=0)
             {

                 var3 = var1/var2;
                 cout<<"outcome:"<<var3<<endl;
             }
             else{
                throw(var2);
             }



    }
        catch(int exc)
        {

            cout<<"division by zero is not possible"<<endl;
        }
    }


