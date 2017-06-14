#include <iostream>
using namespace std;

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "Square of " << x << " : " << square(x) << "\n";
}

int main()
{
    print_square(5);
    return 0;
}
