#include<iostream>
#include<algorithm>
    using namespace std;
        template<typename T>

        class sudo{

        public:
                sudo(){
                cout<<"before the sorting the value"<<endl;
                int a[]={34,63,24,45,56,45,23,37,454,56,76,78};
                int n =sizeof(a)/sizeof(a[0]);
                    sort(a,a+n);

                    for(T i= 0 ;i<=n ; i++)
                    {
                        cout<<a[i]<<endl;

                    }
                }


            };
            int main(){



                sudo<int>r;

            }
