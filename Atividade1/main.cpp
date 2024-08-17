#include <iostream>

using namespace std;
struct aluno
{
    char nome[100];
    int matricula;
};

int main()
{

    aluno vetor[50];
    int x;

    cout << "digite o numero de alunos maximo 50: ";
    cin >> x;
    if(x > 50)
    {
        cout << "Erro mais de 50 alunos";
        return 0;
    }

    for(int i = 0; i < x; i++)
    {
        cout <<"Digite o nome do aluno n " << i <<": ";
        cin >> vetor[i].nome;
        cout <<"Digite a matricula do aluno n " << i <<": ";
        cin >> vetor[i].matricula;
    }
    for(int i = 0; i < x; i++)
    {
        cout <<"Nome do aluno n " << i <<": " << vetor[i].nome <<"\n";
        cout <<"Matricula do aluno n " << i <<": "<<  vetor[i].matricula <<"\n";
    }



    return 0;
}
