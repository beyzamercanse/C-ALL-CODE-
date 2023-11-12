#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string unformatted_full_name {"StephenHawking"};
    
    
    string first_name {unformatted_full_name, 0, 7};
    string last_name = unformatted_full_name.substr(7, 7); // The arguments 7, 7 in the substr function specify the starting index and the length of the substring to be extracted, not the ending index. So, 7 is the starting index, and 7 is the length of the substring.
    
    string formatted_full_name = first_name + " " + last_name;
    
    // formatted_full_name.insert(7, " ");
    

    
    cout << formatted_full_name;
    return 0;
}