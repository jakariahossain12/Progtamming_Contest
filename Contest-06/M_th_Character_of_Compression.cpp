#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
long long int m;
cin>> s>>m ;
int le = s.length();
long long int len = 0;
char lest ;

for (int i = 0; i < le; i++)
{
    if(s[i] >= 'a' && s[i]<='z'){
        lest = s[i];
        len++;
    }else
    {
        int l = s[i] - '0';
        len+=l-1;
    }
    
    if(len >= m){
        cout<< lest ;
        break;
        
    }
}



return 0;
}
