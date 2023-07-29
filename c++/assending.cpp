#include<iostream>
#include<algorithm>
 using namespace std;


    int main(){
       int a;
       int ch[]={2,23,54,54,34,43,43};
       int n = sizeof(ch)/ sizeof(ch[0]);

        sort(ch,ch+n);

    for(a=0; a<=n; a++)
    {

        cout<<ch[a]<<endl;
    }

    }
