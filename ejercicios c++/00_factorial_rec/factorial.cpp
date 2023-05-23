// Programa C++ que calcula el factorial de un número de forma recursiva.

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num > 1)
    {
        num = num * factorial(num - 1);
    }
    return num;
}

int main()
{
    int num, res;
    cout << "Introduce número: ";
    cin >> num;
    res = factorial(num);
    cout << "El factorial de " << num << " es: " << res << endl;
    return 0;
}