// 1174-Array selection 1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    float a;

    for(i=0;i<100;i++){
        cin >> a;
        if(a <= 10)
            cout << "A[" << i << "] = " << fixed << setprecision(1) << a << endl;
    }

    return 0;

}