#include <iostream>
#include "square.h"

using namespace std;


void print_square(double x)
{
    cout << "The square of " << x << " is " << square(x) << "\n";
}

int main()
{
    print_square(5);
    return 0;
}
