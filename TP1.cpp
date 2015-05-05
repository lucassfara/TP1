# TP1
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Suma de variables: Ingrese Opcion" << endl;
    cout << "1. Int" << endl;
    cout << "2. Float" << endl;
    cout << "3. Char" << endl;
    cin >> a;

    switch (a){
        case 1:
            int c,b;
            cout << "Numeros a sumar" << endl;
            cin >> b >> c;
            cout << "Resultado " << b+c;
            break;
        case 2:
            float d,e;
            cout << "Numeros a sumar" << endl;
            cin >> d >> e;
            cout << "Resultado " << d+e;
            break;
        case 3:
            char f,g;
            cout << "Numeros a sumar" << endl;
            cin >> f >> g;
            cout << "Resultado " << f+g;
            break;
    }
    return 0;
}
