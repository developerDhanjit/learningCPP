#include <iostream>
// pre presessor directives

// using namespace std;
// namespace helps in containerising code blocks
// this fetches the whole namespace

/* using only specific keywords from the lib */

using std::cout;
using std::endl;

// Creating your own namespace
/* namespace MySpace{
    void show(){
        // some code goes here
    }
} */

/* int main()
{
    // MySpace::show();
    cout << "Hello C++" << endl;
} */

// code where we don't directly fetch the namespace

int main()
{
    cout << "Some Code of C++" << std::endl;
}
