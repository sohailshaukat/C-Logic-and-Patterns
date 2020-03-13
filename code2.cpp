#include <iostream>

using namespace std;

enum dayOfWeek{M, TU, W, TH, F, SA, SN};

int main(){

    dayOfWeek d = TU;

    cout << d << endl;

    cout << dayOfWeek(TU) << endl;

    return 0;

}
