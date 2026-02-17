#include<bits/stdc++.h>
using namespace std;

int main(){

int n,d;
cin>> n>>d ;
int free[d];

memset(free,0,sizeof(free));

while (n--)
{
    string s;
    cin>> s ;

    for (int i = 0; i < d; i++)
    {
        if(s[i] == 'o'){
            free[i]++;
        }
    }
    
}
 int r;
 int count = 0;
r = INT_MIN;
for(auto v:free){
    r = max(r,v);
}


for(auto c:free){
    if(c == r){
        count++;

    }
}
cout<< count ;


return 0;
}
