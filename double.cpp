#include <iostream>
#include "square.h"

using namespace std;


void print_square(double x)
{
    cout << "Square of " << x << " : " << square(x) << "\n";
}

int main()
{
    print_square(5);
    return 0;
}
