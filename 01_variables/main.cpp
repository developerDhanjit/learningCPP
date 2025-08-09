#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    const float PI = 3.14159;
    string name = "Dhanjit";
    int age = 12;

    name = "Dhanjit Nath";
    // Trying to change the value of PI
    // PI= 4.14158
    // throws error

    cout << "Hi this is me, " << name << " whose age is " << age << endl;
    cout << "Value of PI is " << PI << endl;

    // cout << message << endl;
    return 0;
}
