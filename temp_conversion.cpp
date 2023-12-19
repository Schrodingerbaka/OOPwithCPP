#include <iostream>

using namespace std;

int main()
{

    float fahrenheit, celsius;
    cout << "enter the temperature in celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " c is equilent to " << fahrenheit << "F" << endl;

    return 0;
}