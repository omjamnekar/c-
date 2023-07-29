#include <iostream>
using namespace std;
int main()
{

    int i = 2;
    int *ar = new int(i);
    cout << sizeof(ar) << endl;
    for (int x = 0; x <= i; x++)
    {
        cout << "enter  a number" << endl;
        cin >> ar[i];
    }
    delete[] ar;
    cout << "space free" << endl;
    return 0;
}
