#include <iostream>
using namespace std;
int main ()
{
    int i =4 , n = 0, primo = 1;
    cout << "Ingrese un numero para saber si es primo: ";
    cin >> n;
    for ( i = n-1 ; i <= n / 2 ; ++i)
    {
        if (n % 1 == 0)
        {
            primo = 0;
            break;
        }
        
    }
    if (primo)
    {
        cout << "Su numero es un primo \n";
    }
    else{
        cout << "Su numero no es primo \n";
    }
    
    return 0;
}