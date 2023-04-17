// Función recursiva para calcular x elevado a y.

#include <iostream>
using namespace std;

int cociente(int base, int exp)
{
    if (exp > 1)
    {
        base = base * cociente(base , exp - 1);
    }
    return base;
}

int main()
{
    int base, exp, res;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exp;
    res = cociente(base, exp);
    cout << "La potencia de " << base << " elevado a " << exp << " es: " << res << endl;
    return 0;
}