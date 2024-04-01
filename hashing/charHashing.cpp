#include <iostream>
#include <string>
using namespace std;
/*
//assumption : string has all lowercase char
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
*/

/*
no assumption; consider all 256 elements
int main(){
    string s;
    cout << "Enter a string";
    cin >> s;
    int hash[256] = {0};
    for(int i=0; i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout << "Enter no. of queries ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter query char " << endl;
        cin >> c;
        //fetch
        cout << "Appears " << hash[c] << " times" << endl;
    }
    return 0;
}
*/
// using map
#include <map>
int main(){
    string s;
    cout << "Enter a string";
    cin >> s;
    map<char,int> mpp;
     for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int q;
    cout << "Enter no. of queries";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the query " << endl;
        cin >> c;
        //fetch
        cout << mpp[c] << endl;
    }
    return 0;
}