#include <iostream>

//Function that takes a single parameter, and doesn't 
//give back the result explicitly
void enter_bar(size_t age){ // Functions parameters
    if(age > 18){
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    }else{
        std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
    }
    return ;
}

int main(){
    enter_bar(22); // Function Arguments
    enter_bar(12); // Function Arguments
    std::cout << std::endl;

    for (size_t i=1; i<20; ++i){
        enter_bar(i);
    }

    return 0;
}
