/*#include <iostream>
using namespace std;
// PRINT LINEARLY FROM 1-N
void f1(int i, int N){
    if(i>N) return;
    cout << " " << i;
    f1(i+1, N);
}
int main(){
    int n;
    cout<< "Enter a number";
    cin >> n;
    f1(1,n);

    return 0;
}*/

#include <iostream>
using namespace std;

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
