//diretiva de précompilamento, fluxo de entrada e saída
#include <iostream>

//using é igual ao import do python
//td vez que encontrar o cout, eu estou usando o espaço de nome std
using std::cout;

//tudo acontece dentro de uma função e precisa de um retorno
//auto: o compilador decide qual o tipo da variavel p você: ruim
int main()
{
    //pode criar variáveis, e nem inicializa-las, nunca declare duas vzs a mesma variável, em python ele entenderia que vc está sobrescrevendo
    int a;
    int emap = 1;
    auto i = 1;

    //inserir no fluxo de saída, cout é um buffer q vai acumulando e de tempo em tempo ele descarrega 
    cout << "Exemplo de pós incremento: " << "\n";
    cout << "valor de i: " << i << "\n";

    auto c = i++; 
    //pré incremento (o compliador primeiro incrementa a variavel e depois calcula a expressão em qual a variável está incserida) ++i
    //pós incremento, depois que tudo na linha foi feito, incrementa 1, i++
    //também existe pós (i--) e pré (--i) decremento
    cout << "valor de c: " << c << "\n";
    cout << "valor de i: " << i << "\n";

    return 0;
}




//peça só o que precisa e nada mais