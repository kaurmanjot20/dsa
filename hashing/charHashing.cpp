#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string";
    cin >> s;

    //pre compute
    int hash[26]= {0};
    for(int i=0; i<s.size();i++){
        hash[s[i]- 'a']++;
    }
    int q;
    cout << "Enter no. of queries";
    cin>>q;
    while(q--){
        char c;
        cout << "Enter query char" << endl;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}