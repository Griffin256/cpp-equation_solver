#include <iostream>
using namespace std;

class Values {
public:
    int x, y, ans1, ans2, m1, m2, m3, m4;

    void interValues() {
        cout << "Enter Value for M1: "; cin >> m1;
        cout << "Enter Value for M2: "; cin >> m2;
        cout << "Enter Answer for M1*X + M2*Y: "; cin >> ans1;
        cout << "\nEnter Value for M3: "; cin >> m3;
        cout << "Enter Value for M4: "; cin >> m4;
        cout << "Enter Answer for M3*X + M4*Y: "; cin >> ans2;

        cout << "\nTherefore the equations are:\n" << endl;
        cout << "Equation 1: " << m1 << "*X + " << m2 << "*Y = " << ans1 << endl;
        cout << "Equation 2: " << m3 << "*X + " << m4 << "*Y = " << ans2 << endl;
    }

    void solveEquations() {
        // Using Cramer's Rule to solve the system of two linear equations
        int D = m1 * m4 - m2 * m3;
        int Dx = ans1 * m4 - m2 * ans2;
        int Dy = m1 * ans2 - ans1 * m3;

        if (D == 0) {
            if (Dx == 0 && Dy == 0)
                cout << "\nThe system has infinitely many solutions." << endl;
            else
                cout << "\nThe system has no solution." << endl;
        } else {
            double X = static_cast<double>(Dx) / D;
            double Y = static_cast<double>(Dy) / D;
            cout << "\nThe solution is:\n";
            cout << "X = " << X << endl;
            cout << "Y = " << Y << endl;
        }
    }

private:
    int z; // Not used in this context
};

int main() {
    Values values;
    values.interValues();
    values.solveEquations();
    return 0;
}
