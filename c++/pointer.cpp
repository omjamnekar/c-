#include <iostream>
using namespace std;
#define max 100
class student
{
private:
    int rno;
    char name[40];
    int marks;

public:
    void getdata(int i)
    {
        cout << "enter a roll no:" << endl;
        cin >> rno;
        cout << "enter a name:" << endl;
        cin >> name;
        cout << "enter a marks:" << endl;
        cin >> marks;
    }
    void putdata()
    {
        cout << "the roll no. of student is:" << rno << endl;
        cout << "the name of student is:" << name << endl;
        cout << "the marks of student is:" << rno << endl;
    }
};

int main()
{
    student std1[max];
    student *ptr = std1;
    int class_size;
    cout << "enter a number of student in class:" << endl;
    cin >> class_size;
    for (int i = 0; i <= class_size; i++)
    {
        (ptr + i)->getdata(i);
    }
    for (int i = 0; i <= class_size; i++)
    {
        (ptr + i)->putdata();
    }
}
