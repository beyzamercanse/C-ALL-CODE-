#include <iostream>
using namespace std;

int main(){

    const int months = 12;
    int days[months] = {31,28,30,30,30,31,31,31,30,30,31,31};

    for (int i=0; i<months; i++){
        cout << "month[" << i+1 << "]: " << days[i] << endl;
    }

    return 0;
}

/*
month[1]: 31
month[2]: 28
month[3]: 30
month[4]: 30
month[5]: 30
month[6]: 31
month[7]: 31
month[8]: 31
month[9]: 30
month[10]: 30
month[11]: 31
month[12]: 31
*/