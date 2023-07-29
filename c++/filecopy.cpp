#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in_file("n.txt");
    ofstream out_file("t.txt");
    string str;

    if(in_file&&out_file)
    {
        while(getline(in_file,str)!= 0)
        {
            out_file<<str<<"\n";
        }
        cout<<"file copied";
    }
    else
        {
        cout<<"file cannot copied";
        }
    in_file.close();
    out_file.close();
}
