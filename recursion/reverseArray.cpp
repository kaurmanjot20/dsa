/*  BRUTE
f(l,r){
    if(l>=r) return;
    swap(a[l],a[r]);
    f(l+1,r-1);
}
main(){
    f(0,n-1);
}
*/

//optimised
#include <iostream>
#include <vector>
using namespace std;

void f(int i, vector<int>& v) {
    int n = v.size();
    if (i >= n / 2) return;
    swap(v[i], v[n - i - 1]);
    f(i + 1, v);
}

int main() {
    int n;
    cout << "Enter n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter numbers";
    for (int i = 0; i < n; i++) cin >> v[i];
    f(0, v);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}
