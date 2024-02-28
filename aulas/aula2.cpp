#include <iostream>

using namespace std;

int main()
{
    int ival = 4;
    if(!(ival < 4 || ival > 6)) 
    // apenas umas das condições basta para que a condição seja verdadeira (true)
    // se o valor de ival < 4 então !( true || false ) = !( true ) = false
    // se o valor de ival > 6 então !( false || true ) = !( true ) = false
    // se o valor de ival estiver entre 4 e 6, ou seja, 4 < ival < 6, então !( false || false ) = !( false ) = true
    // ou seja, a condição é apenas verdaeira quando 4 < ival < 6.
    {
        if(ival < 5) cout << "Palmirinha says:" <<endl;
        cout << "Hello World";
    }
    else
    {
        cout << "World, yes?";
    }

    cout << endl;

    int someFunc(int arg1);
    {
        int result = 5;
        int arg1;

        if (arg1 < 5) result = 10;

        return result;
    }

    // usamos bool para variável booleana 
    bool previousThing = false;
    int anotherThing = previousThing ? someFunc(4) : 6; //if true = 10, if false = 6 (operador ternário) 

    cout << "anotherThing is: " << anotherThing << endl;

    return 0;
}

