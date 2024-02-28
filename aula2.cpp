#include <iostream>

using namespace std;

int main()
{
    int ival = 4;
    if(!(ival < 4 || ival > 6))
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

    bool previousThing = false;
    int anotherThing = previousThing ? someFunc(4) : 6; //if true = 5, if false = 6

    cout << "anotherThing is: " << anotherThing << endl;

    return 0;
}

//else if varios