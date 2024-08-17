#include <iostream>

using namespace std;
float C,F;
float conv(float c);

int main()
{
    float c;
    cout << "digite a temperatura de 0 a 100 graus farenhait" << endl;
    cin >> F;
    if(F > 100)
    {
        cout << "Erro temperatura maior que 100";
        return 0;
    }
    float C = conv(c);
    cout << "valor em graus celsius: " << C;
    return 0;
}

float conv(float c)
{
    c = 5*(F-32)/9;
    return c;
}
