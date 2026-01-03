#include<bits/stdc++.h>
using namespace std;

int main(){

long long int t;
cin>> t ;
while (t--)
{
    string s;
cin>> s ;
long long int free[26] ={0};

for (char c:s)
{
    free[c-'a']++;
}
long long int count = 0;
for (int f : free)
{
    if(f%2!=0){
        count++;

    }
}

if(count == 0){
    cout<< "0"<<endl ;
    
}else
{
    cout<< count-1<<endl ;
    
}
}











return 0;
}
