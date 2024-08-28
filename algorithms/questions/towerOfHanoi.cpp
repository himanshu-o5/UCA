#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char helper) {
    if (n == 1) {
        cout << "Move disk " << 1 << " from " << source << " to "<< destination << endl;
        return;
    }
    
    towerOfHanoi(n - 1, source, helper, destination);
    cout << "Move disk " << n << " from " << source << " to "<< destination << endl;
    towerOfHanoi(n - 1, helper, destination, source);

    return;
}

int main() {
    // Number of disks
    int n = 3; 

    towerOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}
