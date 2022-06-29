#include <iostream>
using namespace std;

int main()
{
    int x,z,i;
    int sum = 0;

    while(cin >> x){
        cin >> z;
        while(z < x){
            cin >> z;
        }
        for(i=1;i<z;i++){
            sum += x;
            x++;
            if(sum > z){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}