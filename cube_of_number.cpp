#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, cube = 1;
    cout << "enter any number: ";
    cin >> n;

    while (i <= n)
    {

        cube = i * i * i;
        cout << cube << endl;
        i++;
    }
}