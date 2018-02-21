#include <iostream>

using namespace std;

int main()
{
    float monto, descuento;
    cout << " Ingrese el monto: " << endl;
    cin >> monto;
    if(monto >= 10000)
        {
            descuento = monto * 0.2;
        }
    else
        {
            descuento = monto * 0.1;
        }
    cout << "Su descuento es: " << descuento;

    return 0;
}
