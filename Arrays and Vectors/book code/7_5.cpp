// This program uses an array of ten characters to store the
// first ten letters of the alphabet. The ASCII codes of the
// characters are displayed.


#include <iostream>
using namespace std;

int main(){
    const int num_letters = 10;
    char letters[num_letters] = {'A','B', 'C', 'D', 'E',
                                'F', 'G', 'H', 'I', 'J'};
    cout << "charachter" << "\t" << "ASCII Code\n";
    cout << "---------" << "\t" << "----------\n";

    for (int count =0; count<num_letters; count++){
        cout << letters[count] << "\t\t";
        cout << static_cast<int>(letters[count]) << endl;
    }
}

/*


charachter      ASCII Code
---------       ----------
A               65
B               66
C               67
D               68
E               69
F               70
G               71
H               72
I               73
J               74


*/