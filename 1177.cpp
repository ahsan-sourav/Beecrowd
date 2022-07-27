// 1177-Array fill
#include <iostream>
using namespace std;

int main()
{
    int n[1000],a,b,c;
    cin >> a;

    for(b=0, c=0; b<1000; b++){
        cout << "N[" << b << "] = " << c << endl;
        c++;
        if(c==a){
            c=0;
        } 
    }

    return 0;
}
