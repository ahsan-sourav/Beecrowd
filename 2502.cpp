#include <iostream>
#include <cstring>
using namespace std;

int min(char c)
{
    if(c<='Z' && c>='A'){
        return 'a' + c-'A';
    }
    return c;
}

int max(char c)
{
    if(c<='z' && c>='a'){
        return 'A' + c-'a';
    }
    return c;
}

int main()
{
    string a,b;
    int x,y;
    int criptography[1000];

    while(scanf("%d%d",&x,&y)== 2){
            for(int i=0;i<1000;i++){
                criptography[i] = i;
            }
            cin.ignore(1);
            getline(cin,a);
            getline(cin,b);

            for(int i=0;i<(int)a.size();i++){

                criptography[(int)a[i]] = max(b[i]);
                if(a[i]<='Z' && a[i]>='A')
                    criptography['a'+(a[i]-'A')] = min(b[i]);

                criptography[(int)b[i]] = max(a[i]);
                if(b[i]<='Z' && b[i]>='A')
                    criptography['a'+(b[i]-'A')] = min(a[i]);
            }

            for(int i=0;i<y;i++){
                getline(cin,a);
                string s = "";

                for(int j=0;j<(int)a.size();j++){
                    if(a[j]<='Z' && a[j]>='A'){
                         s += max(criptography[(int)a[j]]);
                    }else{
                        s += min(criptography[(int)a[j]]);
                    }
                }
                cout << s << endl;
            }
            cout << endl;
    }

    return 0;
}