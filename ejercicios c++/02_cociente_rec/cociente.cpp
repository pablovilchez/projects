// Función recursiva que calcule el cociente de dos números enteros.

#include <iostream>
using namespace std;

int cociente(int num, int den)
{
    if (num < den)
    {
        return 0;
    }
    return 1 + cociente(num - den , den);
}

int main()
{
    int num, den, coc;
    cout << "Introduce el numerador: ";
    cin >> num;
    cout << "Introduce el denominador: ";
    cin >> den;
    coc = cociente(num, den);
    cout << "El cociente de " << num << " entre " << den << " es: " << coc << endl;
    return 0;
}