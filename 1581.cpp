#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,j,n,k;
    bool check;
    string temp,s;

    cin >> n;
    cin.ignore();

    for(i=0;i<n;++i){
        cin >> k;
        cin.ignore();
        check = false;

        for(j=0;j<k;++j){
            getline(cin,s);
            if(j == 0) temp = s;
            if(temp != s) check = true;
        }
        if(check){
            cout << "ingles" << endl;
        }else{
            cout << s << endl;
        }
    }

    return 0;
}