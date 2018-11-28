#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, f, name;

    cout << "List of numerical grade values" << endl;

    for (a=100; a >= 90; a--)

        cout << "A: " << a << endl;

    for (b=89; b >= 80; b--)

        cout << "B: " << b << endl;

    for (c=79; c >= 70; c--)

        cout << "C: " << c << endl;

    for (d=69; d >= 60; d--)

        cout << "D: " << d << endl;

    for (f=59; f >= 0; f--)

        cout << "F: " << f << endl;

    cout << "Created by:";

    for (name=0; f <= 8; f++)

        cout << " Austin Bland";

        return 0;
}