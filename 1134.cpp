#include <iostream>
using namespace std;

int main()
{
    int option;
    int Alcohol = 0,Gasoline = 0, Diesel = 0;

    while(true){
        cin >> option;
        if(option == 1) Alcohol++;
        else if(option == 2) Gasoline++;
        else if(option == 3) Diesel++;
        else if(option == 4) break;
        else continue;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcohol << endl;
    cout << "Gasolina: " << Gasoline << endl;
    cout << "Diesel: " << Diesel << endl;

    return 0;
}