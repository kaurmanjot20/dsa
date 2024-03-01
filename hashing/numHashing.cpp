#include <iostream>
#include <string>
using namespace std;
/*
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
    return 0;
}
*/
#include <vector>
#include <map>
int main(){
    cout << "Enter integer array size";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    //pre compute
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    /*
    iterate in map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    */
    int q;
    cout << "Enter no. of queries";
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the query " << endl;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }
}