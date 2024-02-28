#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[11]={1,3,4,5,3,4,2,7,8,1,0};
    int hash[12]={0};
    
    //pre-calculate
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        hash[a[i]]+=1;
    }

    //fetch
    cout << "Enter no. of inputs";
    int q;
    cin >> q;
    cout << "Enter numbers to get their count";
    int num;
    while (q--){
        cin >> num;
        cout << hash[num] << endl;
    }
     

}