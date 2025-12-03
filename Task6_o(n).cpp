#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int weight(int left, int right) {
    int r = rand() % 3;  
    if (r == 0) return 0;
    if (r == 1) return 1;
    return -1;
}

string findFakeCoin(vector<int> coins) {

    int index_referance = coins[0]; 

    for (int i = 1; i < coins.size(); i++) {

        int w = weight(coins[i], index_referance);

        if (w != 0) {     
            if (w == 1)
                return "Fake coin is coin " + to_string(i) + " and it is heavier";
            else
                return "Fake coin is coin " + to_string(i) + " and it is lighter";
        }
    }

    return "all coins same";
}

int main() {
    srand(time(0));

    vector<int> coins = { 10, 10, 10, 10, 14, 10 };

    cout << findFakeCoin(coins) << endl;

    return 0;
}
