#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {1, 4, 6, 8, 10};
    int x = 14;
    unordered_set<int> seen;
    bool found = false;
    for (int num : arr) {
        if (seen.count(x - num)) {
            found = true;
            break;
        }
        seen.insert(num);
    }
    cout << (found ? "Pair exists" : "No pair exists") << endl;
    return 0;
}
