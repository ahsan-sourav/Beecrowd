#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,j,n,x,k;
    cin >> n;

    for(i=0; i<n; i++){
        k=0;
        cin >> x;
        if(x<4) cout << x << " eh primo" << endl;
        else{
            for(j=2; j<x; j++){
                if(x%j==0){
                    k=1;
                    break;
                }
                else k=2;
            }
        }
        if(k==1) cout << x << " nao eh primo" << endl;
        else if(k==2) cout << x << " eh primo" << endl;
    }

    return 0;
}
