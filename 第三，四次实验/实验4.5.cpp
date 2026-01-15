#include <iostream>
#include <vector>
using namespace std;

int indexOf(const vector<char>& s1, const vector<char>& s2) {
    int size1 = s1.size();
    int size2 = s2.size();
    if (size1 > size2) {
        return -1;
    }
    for (int i = 0; i <= size2 - size1; i++) {
        int j;
        for (j = 0; j < size1; j++) {
            if (s1[j] != s2[i + j]) {
                break;
            }
        }
        if (j == size1) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<char> list1, list2;

    cout << "Enter the first string (输入0结束): ";
    while (true) {
        char a;
        cin >> a;
        if (a == '0') {
            break;
        }
        list1.push_back(a);
    }

    cout << "Enter the second string (输入0结束): ";
    while (true) {
        char a;
        cin >> a;
        if (a == '0') {
            break;
        }
        list2.push_back(a);
    }
    int result = indexOf(list1, list2);
    cout << "匹配位置: " << result << endl;
    return 0;
}