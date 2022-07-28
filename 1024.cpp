#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void reverse(char word[],int size);

int main(){
    int n,i,j,size;
    char lines[1001];
    
    cin >> n;
    cin.getline(lines,0);
    for(i = 0; i < n; i++){
            cin.getline(lines,1001);
            
            for(j = 0; lines[j] != '\0'; j++)
                  if(lines[j] >= 65 && lines[j] <= 90 ||  lines[j] >= 97 && lines[j] <= 122)
                              lines[j] += 3;
            
            size=strlen(lines);
            reverse(lines,size);
            
            for(j = size/2; lines[j] != '\0'; j++)
                              lines[j]--;
            
           cout << lines << endl;              
    } 
    
    return 0;
}

void reverse(char word[],int size)
{
    char temp;
    for (int i=0;i<size/2;i++)
    {
            temp=word[i];
            word[i]=word[size-i-1];
            word[size-i-1]=temp;
    }
}