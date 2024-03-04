#include <iostream>

using namespace std;

//função para calcular o IMC recebendo a massa e a altura
float calculo_imc (float fMassa, float fAltura)
{
    float fImc = fMassa / (fAltura * fAltura);
    return fImc;
}

int main()
{   
    setlocale(LC_ALL, "portuguese");
    float fMassa, fAltura;
   
    cout << "Digite a massa (em kg): " << endl;
    cin >> fMassa;
    cout << "Digite a altura (em m): " << endl;
    cin>> fAltura;
   
    float fImc = calculo_imc(fMassa, fAltura);
    cout << "Seu IMC é de: " << fImc << endl;
   
    if(fImc <= 17) cout << "você está muito abaixo do peso." << endl;
    else if(fImc <= 18.5) cout << "você está abaixo do peso." << endl;
    else if(fImc <= 25) cout << "você está com um peso normal." << endl;
    else if(fImc <= 30) cout << "você está acima do peso." << endl;
    else if(fImc <= 35) cout << "você tem obesidade." << endl;
    else if(fImc < 40) cout << "você tem obesidade severa." << endl;
    else if(fImc >= 40) cout << "você tem obesidade mórbida. Cuidado!" << endl;
   
    return 0;
}