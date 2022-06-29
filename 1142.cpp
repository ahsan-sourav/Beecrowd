#include <iostream>
using namespace std;

int main()
{
    int a,i;

    cin >>a;
    for(i=0;i<a*4;i+=4){
        cout << i+1 << " " << i+2 << " " << i+3 << " " << "PUM" << endl;
    }

    return 0;
}