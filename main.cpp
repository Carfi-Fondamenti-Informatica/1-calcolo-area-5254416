#include <iostream>
using namespace std;

int main(){
    float a;
    float b;
    float c;
cin >> a >> b >> c;
    float triangolo = a*b/2;
    float quadrato = a*a;
    float rettangolo = a*b;
    float trapezio = (a+b)*c/2;
    cout << triangolo <<endl;
    cout << quadrato <<endl;
    cout << rettangolo <<endl;
    cout << trapezio <<endl;
    return 0;
  
}
