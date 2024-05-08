#include <iostream>
using namespace std;
int main ()
{
    char letra = ' ';
    cout << "Ingrese X para continuar al menu. \n";
    cin >> letra;

    while (true)
    {
        if (letra == 'X' || letra == 'x')
        {
            cout << "Menu: \n";
            cout << "1. Arroz. \n";
            cout << "2. Pollo \n";
            cout << "3. Lasagna \n";
            cout << "4. Frijoles \n";
            cout << "5. Pizza \n";
            cout << "Seleccion X para salir del menu.  \n";
        }

        cout << "Seleccione un numero para seleccionar su comida: \n";
        cin >> letra;

        switch (letra)
        {
        case '1':
            cout << "Ha seleccionado: Arroz. \n";
            break;

        case '2':
            cout << "Ha seleccionado: Pollo. \n";
            break;

        case '3':
            cout << "Ha seleccionado: Lasagna. \n";
            break;        

        case '4':
            cout << "Ha seleccionado: Frijoles. \n";
            break;

        case '5':
            cout << "Ha seleccionado: Pizza. \n";
            break;
        
        case 'X':
        case 'x':
            cout << "Saliendo del menu... \n";

        default:
            cout << "Opcion no valida, intente de nuevo.";
            break;
        }

        if (letra == 'X' || letra == 'x')
        {
            break;
        }
                
    }
    
    return 0; 

}