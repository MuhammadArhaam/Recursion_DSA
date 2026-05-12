#include <iostream>
using namespace std;
int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp > 0)
    {
        return base * power(base, exp - 1);
    }

    if (exp < 0)
    {
        return 1 / power(base, -exp);
    }
}
int main()
{
    int base = 2;
    int exp = 3;
    cout << "Value of Power Function = " << base << " ^ " << exp << " = " << power(base, exp) << endl;
    cout << "Value of Power Function = " << base << " ^ " << -exp << " = " << power(base, -exp) << endl;
    return 0;

}