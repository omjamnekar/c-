#include<iostream>
#include<algorithm>
using namespace std;
    template<typename T>
    class sort1{
  public:
        void sorting(){
            int a[]={25,56,54,34,78,98,45,34};
            int n = sizeof(a)/sizeof(a[0]);
            cout<<"before sorting the value:"<<endl;
            for(T i= 0; i<=n ; i++)
            {
                cout<<a[i]<<endl;
            }
                sort(a,a+n);
             for(T i= 0; i<=n ; i++)
            {
                cout<<a[i]<<endl;
            }
        }

    };

        int main(){

            sort1<int>e;
            e.sorting();
        }
