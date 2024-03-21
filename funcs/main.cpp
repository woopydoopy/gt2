#include <iostream>
#include "funcs.h"

using namespace std;
int main()
{
int count; // переменная для выбора в switch
double a, b; // переменные для хранения операндов
    cout << "Vvedite pervoe chislo: ";
    cin >> a;
    cout << "Vvedite vtoroe chislo: ";
    cin >> b;
    cout << "Vibirite deistvie: 1 +; 2 -; 3 *; 4 : ";
    cin >> count;
switch (count) // начало оператора switch
{
    case 1: // если count = 1
{
    cout << MySum(a,b) << endl;
    break;
}
    case 2: // если count = 2
{
    cout << MySub(a,b) << endl;
    break;
}
    case 3: // если count = 3
{
    cout <<   MyMul(a,b)  << endl;
    break;
}
    case 4: // если count = 4
{
    cout <<  " This function is not ready yet"  << endl;
    break;
}
    default: // если count равно любому другому значению
    cout << "Nepravilni vvod" << endl;
}
system("pause");
return 0;
}
