#include <iostream>

using namespace std;

int main()
{
    float descuento, sueldo, sueldoneto;
    cout << " Ingrese el sueldo: " << endl;
    cin >> sueldo;
    if(sueldo <=1000)
        {
            descuento = sueldo * 0.1;
            cout << "su descuento es: " << descuento << endl;
            sueldoneto = (sueldo-descuento);
            cout << "su sueldo neto es: " << sueldoneto;

        }
    else
        {
            if(sueldo > 1000 && sueldo <=2000)
                {
                    descuento = (sueldo - 1000) * 0.5 + 1000 * 0.1;
                    cout << "su descuento es: " << descuento << endl;
                    sueldoneto = (sueldo-descuento);
                    cout << "su sueldo neto es: " << sueldoneto;
                }
    else
        {
            descuento = (sueldo - 1000) * 0.3 + 1000 * 0.1;
            cout << "su descuento es: " << descuento << endl;
            sueldoneto = (sueldo-descuento);
            cout << "su sueldo neto es: " << sueldoneto;
        }

        }

    return 0;
}
