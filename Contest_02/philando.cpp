#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;
int l = s.length();
for (int i = l-1; i >= 0; i--)
{
    char lo = tolower(s[i]);
    cout<< lo ;
    
}



return 0;
}
