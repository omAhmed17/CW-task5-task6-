
#include <iostream>

#include <vector>
using namespace std;

pair <vector<char>, int> sortDisks(int n) {
    vector<char> disks(2 * n);
    for (int i = 0;i < 2 * n;i++) {
        if (i % 2 == 0) {
            disks[i] = 'D';

        }
        else {
            disks[i] = 'L';

        }
    }
    int count=0;
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < 2 * n - 1; i++) {
            if (disks[i] == 'D' && disks[i + 1] == 'L') {
                swap(disks[i], disks[i + 1]);
                count++;
                sorted = false;
            }
        }
    }
    return{ disks,count };

}

int main() {
    int n;
    cout << "Enter the number of light and dark disks: ";
    cin >> n;

    auto result = sortDisks(n);
    vector<char> Disks = result.first;
    int moves = result.second;

    cout << "\nFinal arrangement: ";
    for (int i = 0; i < Disks.size(); i++) {
        cout << Disks[i] << " ";
    }
    cout << "\nTotal moves: " << moves << endl;
}