#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    cout << "enter temperatur in fahrenheit : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << "f is equivalent to " << celsius << "C";

    return 0;
}