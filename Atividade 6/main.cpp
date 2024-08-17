#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
struct y
{
    char sexo;
    float altura;
};
y pessoa;
float peso;
float pesar(float p);


int main()
{
    float p;
    cout << "Digite seu sexo M para masculino e F para feminino: " << endl;
    cin >> pessoa.sexo;
    if(pessoa.sexo == 77 || pessoa.sexo == 70 || pessoa.sexo == 102 || pessoa.sexo == 109 )
    {
        cout << "digite sua altura: ";
        cin >> pessoa.altura;
        float peso = pesar(p);
        cout << "Seu peso ideal e: "<< peso;
        return 0;
    }
    else
    {
        cout << "Sexo invalido";
        return 0;
    }

}
float pesar(float p)
{
    if(pessoa.sexo == 77 || pessoa.sexo == 109 )
    {
        p = 72.7 * pessoa.altura -58;
        return p;
    }
    else if(pessoa.sexo == 70 || pessoa.sexo == 102)
    {
        p = 62.1 * pessoa.altura -44.7;
        return p;
    }
}
