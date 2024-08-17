#include <iostream>

using namespace std;
struct idade
{
    int ano;
    int mes;
    int dia;
};
idade idade;
int Soma;
float conv(float d);

int main()
{
    float d;
    cout << "Digite sua idade em anos: ";
    cin >> idade.ano;
    cout << "Digite sua idade em meses: ";
    cin >> idade.mes;
    cout << "Digite sua idade em dias: ";
    cin >> idade.dia;
    int soma = conv(d);
    cout <<"Idade total em dias " << soma;
    return 0;
}
float conv(float d)
{
    d = idade.ano * 365;
    for(int i = 0; i <= 12; i++)
    {
        if( i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11)
        {
            d += idade.mes * 31;
        }
        else if( i == 1)
    {
        d += idade.mes * 28;
    }
    else
    {
        d += idade.mes * 30;
    }
    d += idade.dia;
    return d;
}
}
