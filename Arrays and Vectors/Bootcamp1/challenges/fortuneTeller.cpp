#include <iostream>
using namespace std;

int main(){

    //srand() has to run once per program run ==>
    std::srand(std::time(0)); // Seed



    char prediction0[]={ "a blonde with blue eyes" };
    char prediction1[]={ "a brown with brown eyes." };
    char prediction2[]={ "a blonde with brown eyes" };
    char prediction3[]={ "a brown with hazel eyes" };
    char prediction4[]={ "a brown with blue eyes" };
    char prediction5[]={ "a blonde with hazel eyes" };
    char prediction6[]={ "a black with brown eyes" };
    char prediction7[]={ "a black with green eyes" };
    char prediction8[]={ "a black with hazel eyes" };
    char prediction9[]={ "a brow with green eyes" };

    bool end = false;
    const int max_length = 15; // use const for array size ALWAYS !
    char name[max_length];

    cout << "what is your name dear? : " << endl;
    cin.getline(name, max_length); // get input with spaces

    while (!end) {
        std::cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % 11));

        switch (rand_num) { // [0~10]
        case 0:
            std::cout << prediction0 << std::endl;
            break;
        case 1:
            std::cout << prediction1 << std::endl;
            break;

        case 2:
            std::cout << prediction2 << std::endl;
            break;
        case 3:
            std::cout << prediction3 << std::endl;
            break;
        case 4:
            std::cout << prediction4 << std::endl;
            break;
        case 5:
            std::cout << prediction5 << std::endl;
            break;
        case 6:
            std::cout << prediction6 << std::endl;
            break;
        case 7:
            std::cout << prediction7 << std::endl;
            break;

        case 8:
            std::cout << prediction8 << std::endl;
            break;

        case 9:
            std::cout << prediction9 << std::endl;
            break;
        default:
            std::cout << ", huum, I don't see anything" << std::endl;
        }
        std::cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true; // if this = false, else= true

    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}

