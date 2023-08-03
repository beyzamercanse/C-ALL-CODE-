 // This program initializes a string array.

#include <iostream>
#include<string>
using namespace std;

int main(){

    const int size = 9;
    string planets[size] = {"mercury", "venus", "earth","mars","jupiter","saturn","uranus","neptune","pluton"};
    cout << "Here are the planets:\n";

    for (int count=0; count<size; count++){
        cout << planets[count] << endl;
    }
    return 0;
}


/*

Here are the planets:
mercury
venus
earth
mars
jupiter
saturn
uranus
neptune
pluton

*/