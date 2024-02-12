//basic C++ Conditions
#include <iostream>
using namespace std;

int main() {
    float score;
    cout << "Please input the score. : ";
    cin >> score;

    if (score >= 80 && score <= 100) {
        cout << "Grade A" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade B" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Grade C" << endl;
    } else if (score >= 50 && score < 60) {
        cout << "Grade D" << endl;
    } else if (score >= 0 && score < 50) {
        cout << "Grade F" << endl;
    } else {
        cout << "wrong input !" << endl;
    }
    return 0;
}
