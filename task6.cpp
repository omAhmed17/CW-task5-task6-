#include <iostream>
using namespace std;



int weight(int left, int right) {
    if (left > right) return 1;
    if (left < right) return -1;
    return 0;
}
string faketype(int A, int B, int C) {

    int w1 = weight(A, B);

    if (w1 == 0) {
        int w2 = weight(C, A);

        if (w2 > 0)
            return "Fake coin is C and it is heavier";
        else
            return "Fake coin is C and it is lighter";
    }

    else {
        int w2 = weight(A, C);

        if (w1 == 1) {  
            if (w2 == 1)
                return "Fake coin is A and it is heavier";
            else
                return "Fake coin is B and it is lighter";
        }

        else {         
            if (w2 == -1)
                return "Fake coin is A and it is lighter";
            else
                return "Fake coin is B and it is heavier";
        }
    }
}

int main() {
    int A = 13;
    int B = 10;
    int C = 11; 

    cout << faketype(A, B, C) << endl;

    return 0;
}


