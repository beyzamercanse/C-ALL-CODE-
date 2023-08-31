#include <iostream>
using namespace std;

int main(){

    // srand() has to run once per program run
    std::srand(std::time(0)); // Seed

    const char * predictions[] = {

        "moving to germany",
        "moving to amsterdam",
        "starting as a c++ develper",
        "starting as a python developer",
        "working in bank",
        "working in start up",
        "meeting  this year",
        "meeting  next year",
        "travelling alot",
        "working remote" };

    bool end = false;
    const int max_length = 15;
    char name[max_length];
    cout << "whats yur name dear?: " << endl;
    cin.getline(name, max_length);

    while (!end){
        cout << "oh dear " << name << " I see something ! "<< endl;
        size_t rand_num = static_cast<size_t>((rand()%(sizeof(predictions)/sizeof(predictions[0]))));
        cout << predictions[rand_num];


        cout << "do you want me to try again? (y/n): ";
        char go_on;
        cin>> go_on;

        end = ((go_on=='y')||(go_on=='Y')) ? false : true;
    }

    cout << "thats all i have for you." << endl;


    
    return 0;
}