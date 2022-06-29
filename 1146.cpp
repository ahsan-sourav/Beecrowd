#include <iostream>
using namespace std;

int main()
{
    int x,i;
     while(true){
        cin >> x;

        if(x == 0)
                break;
        for(i=1;i<=x;i++){
            cout << i;
            cout << ((i == x)?"\n" : " ");
        }        
     }

     return 0;
}