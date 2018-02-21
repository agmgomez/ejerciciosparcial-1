#include <iostream>

using namespace std;

main()
{
    float radio,area;
    cout << " introduzca el radio: " << endl;
    cin >> radio;
    area =3.1416 * (radio*radio);

    if (area > 5000)
        {
            cout << " Datos Erroneos ";
        }
    else
        {
            cout << "El area del circulo es: " << area;
        }

    return 0;
}
