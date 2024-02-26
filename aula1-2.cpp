#include <iostream>

using std::cout;
using std::endl; //assim q a linha é executada, o buffer é descarregado e fica zerado

//Hungarian Notation, Systems hungarian x  Apps hungarian
int main()
{
    int iNum = 42;

    cout << "valor de Num: " << iNum << endl;
    cout << "Endereço de Num: " << &iNum << endl;

    iNum = 111;

    cout << "valor de Num: " << iNum << endl;
    cout << "Endereço de Num: " << &iNum << endl;
    //mesmo endereço

    return 0;
}

//leitura de teclado, for e while
