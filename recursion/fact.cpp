#include <bits/stdc++.h> 
using namespace std; 


int fuctio(int n) {
    if((n==0) or (n ==1) ) {
        return 1 ;
    }
 return n * fuctio(n-1);
}

int  main() {
    int n ; 
    cin >> n ;
    int a = fuctio(n);
    cout << a  << endl;
}