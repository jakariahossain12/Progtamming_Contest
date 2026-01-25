#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>even;
vector<int>odd;
int n;
cin>> n ;

while (n--)
{
    int x;
    cin>> x ;
    if(x%2==0){
        even.push_back(x);
    }else{
        odd.push_back(x);
    }
    
}

for(auto e:even){
    cout<< e <<" " ;
    
}

for(auto o:odd){
    cout<< o<<" " ;
    
}







return 0;
}
