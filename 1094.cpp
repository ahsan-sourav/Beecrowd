#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    int n,q;
    int total=0,coelho=0,sapo=0,rato=0;
    char t;

    cin >>n;

    for(int i=0;i<n;i++){
        cin >>q;
        cin >>t;

        total += q;

        if(t == 'C') coelho += q;
        if(t == 'S') sapo += q;
        if(t == 'R') rato +=q;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;

    cout << fixed << setprecision(2) << "Precentual de coelhos: " << ((float)coelho/(float)total)*100.00 << " %" << endl;
    cout << fixed << setprecision(2) << "Precentual de ratos: " << ((float)rato/(float)total)*100.00 << " %" << endl;
    cout << fixed << setprecision(2) << "Precentual de sapos: " << ((float)sapo/(float)total)*100.00 << " %" << endl;

    return 0;
}