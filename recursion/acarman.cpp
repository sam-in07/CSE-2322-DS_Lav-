#include <bits/stdc++.h> 
using namespace std; 


int ackermann(int m ,  int n ) {
if(m==0) {
    return n+1 ;
}
else if (m > 0 && n == 0) {
return ackermann(m - 1, 1);
} 
else {
        return ackermann(m - 1, ackermann(m, n - 1));
}
}
int  main() {
int n , m ;
cin >> m >> n ;

cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl ;
    

}