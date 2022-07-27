// 1180-Lowest number and position
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,N;
    int position,min;
    int X[N];
    cin >> N ;

    for(a=0;a<N;a++){
        cin >> X[a];
    }
    min = X[0];
    for(a=1;a<N;a++){
        if(min>X[a]){
            min = X[a];
            position = a;
        }
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << position << endl;

    return 0;
}