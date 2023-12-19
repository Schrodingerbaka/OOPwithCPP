#include <iostream>

using namespace std;

int main()
{
    float radius, area;
    const float PI = 3.14159F;
    cout << "enter radius of circle:";
    cin >> radius;
    area = PI * radius * radius;
    cout << "area of circle is :" << area;

    return 0;
}