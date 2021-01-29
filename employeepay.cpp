#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int hours; // number of hours worked this week
    cout << "input number of hours worked this week: ";
    cin >> hours; // read user hour input
    
    // assume regular times are 40 hours a week
    // $16 normal pay, 1.5x pay for overtime
    double paycheck = hours * 16.0;
    if (hours > 40) {
        paycheck += (40 - hours) * 1.5;
        // calculate overtime w/ hours past 40
    }
    cout << "gross pay: $" << paycheck << endl;

    double ssTax = paycheck * 0.14; // 14% social security tax
    cout << "social security tax witholding amt: $" << ssTax << endl;
    double fiTax = paycheck * 0.05; // 5% federal income tax
    cout << "federal income tax witholding amt: $" << fiTax << endl;
    double medInsure = 10.0; // $10 medical income tax
    cout << "medical income tax witholding amt: $" << medInsure << endl;

    // calculate net pay by subtracted witheld money
    double netPay = paycheck - (ssTax + fiTax + medInsure);
    cout << "net pay: $" << netPay << endl;

    return 0;
}
