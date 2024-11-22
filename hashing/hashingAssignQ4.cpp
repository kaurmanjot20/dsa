#include <iostream>
#include <list>
#include <unordered_set>
using namespace std;

int main() {
    list<int> list1 = {1, 2, 3, 4};
    list<int> list2 = {3, 4, 5, 6};
    unordered_set<int> set1(list1.begin(), list1.end());
    unordered_set<int> set2(list2.begin(), list2.end());
    list<int> unionList, intersectionList;

    for (int num : set1) {
        unionList.push_back(num);
    }
    for (int num : set2) {
        if (!set1.count(num)) {
            unionList.push_back(num);
        }
        if (set1.count(num)) {
            intersectionList.push_back(num);
        }
    }
    cout << "Union: ";
    for (int num : unionList) {
        cout << num << " ";
    }
    cout << "\nIntersection: ";
    for (int num : intersectionList) {
        cout << num << " ";
    }
    return 0;
}
