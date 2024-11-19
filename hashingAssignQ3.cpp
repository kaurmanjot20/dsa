#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 6};
    unordered_set<int> set2(arr2.begin(), arr2.end());
    vector<int> result;
    for (int num : arr1) {
        if (!set2.count(num)) {
            result.push_back(num);
        }
    }
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
