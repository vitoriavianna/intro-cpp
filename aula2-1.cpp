#include <iostream>

using namespace std;

int main()
{
    int iDia = 2;

        switch (iDia) // Avalia a expressão e avalia a partir da encontrada
        {
            case 1:
                cout << "Segunda" << endl;
                break;
            case 2:
                cout << "Terça" << endl;
                break;
            case 3:
                cout << "Quarta" << endl;    
                break;
            case 4:
                cout << "Quinta" << endl;
                break;
            case 5:
                cout << "Sexta" << endl;
                break;
            case 6:
                cout << "Sábado" << endl;
                break;
            case 7:
                cout << "Domingo" << endl;
                break;
            default:
                cout << "Que estranho!" << endl;
        } 

    cout << "------------------------" << endl;
    
    int iContador = 0;
    do
    {
        cout<< iContador << endl;
        iContador++;
    }
    while (iContador < 5);

    cout << iContador << endl;

    for (int i = 0; i <= 2; ++i) 
    {
        cout << "Outer: " << i << "\n"; // Executes 3 times

        for (int j = 0; j <= 2; ++j) 
        {
            cout << " Inner: " << j << "\n"; // Executes 9 times (3 * 3)
        }
    }

    return 0;
}