#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    int sum = 0;

    cin >>a>>b;

    if(a > b){
        temp = b;
        b = a;
        a = temp; 
    }

    for(int i = a;i <= b; i++){
        if(i%13 != 0){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}