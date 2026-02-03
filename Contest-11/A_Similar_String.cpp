#include<bits/stdc++.h>
using namespace std;


bool isTrue(char a, char b){
    if(a == b) return true;
    if((a == '1' && b == 'l') || (a == 'l' && b == '1')) return true;                  
    if((a == '0' && b == 'o') || (a == 'o' && b == '0')) return true; 
    return false;                 
    
}

int main(){

int n;
cin>> n ;
string x,y;
cin>> x >>y ;

bool isOk = true;

for (int i = 0; i < n; i++)
{

    if(!isTrue(x[i],y[i])){
        isOk = false;
        break;
    }

    
}


if(isOk){
    cout<< "Yes" ;
    
}else{
    cout<< "No" ;
    
}






return 0;
}
