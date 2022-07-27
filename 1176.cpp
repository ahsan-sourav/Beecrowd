// 1176-Fibonacci array
#include <iostream>
using namespace std;

int main()
{
    int i,n,k;
    long long int N[61];

    N[0] = 0;
    N[1] = 1;

    for(i=2;i<61;i++){
        N[i] = N[i-1]+N[i-2];
    }

    cin >> n;

    for(i=0;i<n;i++){
        cin >> k;
        cout << "Fib(" << k << ") = " << N[k] << endl;
    }

    return 0;
}