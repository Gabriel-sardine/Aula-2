#include <iostream>
#include <stdlib.h>

using namespace std;
float maior(float m);
float m = 0,x,y,z;

int main(){
    cout << "Digite tres numeros " << endl;
    cin >>x;
    cin >>y;
    cin >>z;
    m = maior(m);
    else{
        cout << "O maior numero e " << m;
    }
    return 0;
}

float maior(float m){
if(x > y && x > z){
    m = x;
    return m;
}
else if(y > x && y > z){
    m = y;
    return m;
}
else if(z > x && z > y){
    m = z;
    return m;
}

}
