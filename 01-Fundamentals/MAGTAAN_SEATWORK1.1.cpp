#include <iostream>
using namespace std;

double Quiz, Total = 0, Average;

int main() {
    int i;
    for (i = 1; i <= 3; i++) {
        cout << "\nEnter Quiz " << i << " Score: ";
        cin >> Quiz;
        Total += Quiz;
    }

    Average = Total / 3;

    cout << "\nTotal Score: " << Total << endl;
    cout << "Average Score: " << Average << endl;

    return 0;
}