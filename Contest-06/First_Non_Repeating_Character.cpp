#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;
vector<int>a(26);
int len = s.length();

for (int i = 0; i < len; i++)
{
    a[s[i]-'a']++;
}

int fin = 0;

for (int i = 0; i < len; i++)
{
    if(a[s[i]-'a'] == 1){
        fin = 1;
        cout<< s[i] ;
        break;
    }
}

if(fin == 0){
    cout<< -1 ;
    
}






return 0;
}
