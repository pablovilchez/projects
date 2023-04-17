// Función que recibe una cadena de caracteres y devuelve el número de vocales que contiene.

#include <iostream>
using namespace std;

int vocales(char *s)
{
    int cuenta = 0;
    char a;

    while (*s)
    {
        a = toupper(*s);
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        {
            cuenta++;
        }
        s++;
    }
    return cuenta;
}

int main()
{
    char cadena[40];
    
    cout << "Introduce una frase: ";
    cin.getline(cadena, 40);
    cout << "Número de vocales: " << vocales(cadena) << endl;
    return 0;
}