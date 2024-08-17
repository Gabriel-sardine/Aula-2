#include <iostream>

using namespace std;
float a = 90000000,b = 200000000;
float cres(float c);
int ano;

int main()
{
    float c = cres(c);
    cout <<"Demorara " << c << " anos para o pais a superar o pais b" << endl;
    return 0;
}

float cres(float c)
{
    for(a; a <= b;)
    {
        a = a + (a * 3) / 100;
        b = b + (b * 1.5) / 100;
        ano ++;
        c = ano;
    }

    return c;
}
