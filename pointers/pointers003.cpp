#include <iostream>
using namespace std ;

int main(){
    // Learning from CodeBeauty on YouTube

    int luckyNumbers[5];
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;
    // cout << luckyNumbers[2] << endl;
    // cout << *(luckyNumbers+2) << endl;
    for (int i =0; i<= 4; i++){
        cout << "Number : ";
        cin >> luckyNumbers[i];
    }
    for (int i =0 ; i<=4 ; i++){
        cout << *(luckyNumbers +i) <<" ";
    }

    system("pause>0");
    return 0;
}
