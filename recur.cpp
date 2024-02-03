#include <iostream>
using namespace std;

/*
// PRINT LINEARLY FROM 1-N
void f1(int i, int N){
    if(i > N) return;
    cout << " " << i;
    f1(i+1, N);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    f1(1, n);

    return 0;
}
*/

/*
// PRINT LINEARLY FORM 1-N -- BACKTRACKING
void f1(int i, int N){
    if(i < 1) return;
    f1(i-1, N);
    cout << " " << i;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    f1(n, n);

    return 0;
}
*/
/*
//  PRINT LINEARLY FROM N-1
void f1(int i, int N){
    if(i<1) return;
    cout << i << endl;
    f1(i-1,N);
}

int main(){
    int n;
    cout<<"Enter a number";
    cin >> n;
    f1(n,n);
    return 0;
}
*/

// PRINT LINEARLY FROM N-1 --BACKTRACKING
void f(int i,int N){
    if(i>N) return;
    f(i+1,N);
    cout << " " << i;
}
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    f(1,n);
}