#include <iostream>
using namespace std;

double Total = 0, Price, Payment, Change;

int main() {
    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter Item " << i << " Price: ";
        cin >> Price;
        Total += Price;
    }

    cout << "\nTotal Price: " << Total << endl;

    cout << "\nPlease Enter Payment: ";
    cin >> Payment;
    cout << "\nAmount Received: " << Payment << endl;

    do while (Payment < Total){ 
      cout << "Insufficient Amount. Please Try Again" << endl;
    } 
    
    Change = Payment - Total;
    cout << "Your Change is: " << Change << endl;

    return 0;
}