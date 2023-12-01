#include <iostream>
using namespace std;



int main() {
    int A, B, C;
    cout << "write A, B и C: ";
    cin >> A >> B >> C;

    if (A < B && B < C) {
        cout << "C-B-A = " << C - B - A << endl;
    }
    else if (A % C == 0) {
        cout << "A/C+B = " << A / C + B << endl;
    }
    else {
        cout << "A+B+C = " << A + B + C << endl;
    }

    return 0
}


