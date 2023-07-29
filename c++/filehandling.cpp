#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   fstream rw;
   rw.open("box2.txt", ios::out);
   char name[20];
   char com[20];
   char ser[20];
   int price;

   cout << "enter a name of phone:" << endl;
   cin.getline(name, 20);
   cout << "enter a name company:" << endl;
   cin.getline(com, 20);
   cout << "enter a serial number of phone:" << endl;
   cin.getline(ser, 20);
   cout << "enter a price of price:" << endl;
   cin >> price;

   rw << name << endl
      << com << endl
      << ser << endl
      << price << endl;

   rw.close();

   rw.open("box2.txt", ios::in);

   rw.getline(name, 20);

   rw.getline(com, 20);

   rw.getline(ser, 20);

   rw >> price;

   cout << "string reading from file" << endl;

   cout << name << endl
        << com << endl
        << ser << endl
        << price << endl;

   rw.close();
}
