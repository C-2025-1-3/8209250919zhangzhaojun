#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    bool lockers[N + 1] = { false }; 
    for (int student = 1; student <= N; student++) {
        for (int locker = student; locker <= N; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }
    cout << "打开的门有：";
    for (int i = 1; i <= N; i++) {
        if (lockers[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}