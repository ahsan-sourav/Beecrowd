// 1173-Array fill 1
#include <iostream>
using namespace std;

int main()
{
    int n,i;

    cin >> n;

    for(i=0;i<10;i++){
        cout << "N[" << i << "] = " << n << endl;
        n *= 2;
    }

    return 0;

}