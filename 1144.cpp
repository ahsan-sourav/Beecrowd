#include <iostream>
using namespace std;

int main()
{
    int a,i;

    cin >>a;

    for(i=1;i<=a;i++){
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
    }

    return 0;
}