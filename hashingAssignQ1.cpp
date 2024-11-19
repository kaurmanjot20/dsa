#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 3, 1, 3, 4};
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    int maxFreq = 0, result = -1;
    for (const auto& [key, value] : freq) {
        if (value > maxFreq) {
            maxFreq = value;
            result = key;
        }
    }
    cout << "Most frequent element: " << result << endl;
    return 0;
}
