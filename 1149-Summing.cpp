#include <iostream>
using namespace std;

int main()
{
    int a,n,i;
    int sum = 0;

    while(cin >> a){
        cin >> n;
        while(n <= 0){
            cin >> n;
        }

        for(i=0;i<n;i++){
            sum += (a+i);
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}