#include<bits/stdc++.h>
using namespace std;

int main(){

int N;
cin>> N ;

 // First row
    for (int i = 1; i <= N; i++) cout << i;
    cout << "\n";


     // Middle rows
    for (int i = 2; i <= N-1; i++) {
        cout << i; // left number
        for (int j = 1; j <= N-2; j++) {
            if (j == N-i) cout << " "; // spaces
            else cout << " ";
        }
        cout << N-i+1; // right number
        cout << "\n";
    }
    
    

    // Last row (only if N > 1)
    if (N > 1) {
        for (int i = N; i >= 1; i--) cout << i;
        cout << "\n";
    }


  




return 0;
}
