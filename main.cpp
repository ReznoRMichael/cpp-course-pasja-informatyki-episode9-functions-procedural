#include <iostream>

using namespace std;

float metry;            // zmienna globalna

float ile_cali(float c) // naglowek funkcji - (argument/parametr funkcji) m = argument formalny
{                       // cialo funkcji
//    float cale=c*39.37  // zasieg widocznosci zmiennej - variable scope; cale = zmienna lokalna
//    return cale;        // zwroc taka wartosc
    return c*39.37          // prostszy sposob
}

float ile_jardow(float j);  // nazwa funkcji zakonczona srednikiem - cala funkcja pod main

void ile_mil(float m)       // void - procedura, nie zwraca zadnej wartosci (nie mozna uzyc w rownaniach matematycznych)
{
    cout << "na mile: " << m*0.0006213 << endl;
}

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry;

    cout << "na cale: " << ile_cali(metry) << endl;    // wywolanie funkcji ile_cali (argument/parametr funkcji) metry = argument aktualny
    cout << "na jardy: " << ile_jardow(metry) << endl;
    ile_mil(metry);

    return 0;
}

float ile_jardow(float j)
{
    return j*1.0936;
}
