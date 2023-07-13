// 115. Arrays of charachters

#include <iostream>
using namespace std;

int main(){

    // declare array
    char message1[] = {'H','E','L','L','O'};

    // size of this array
    int size_of_array = sizeof(message1)/sizeof(message1[0]);

    //print out the array through looping
    cout << "message: ";
    for (auto word : message1){
        cout << word; // HELLO (because we didnt put endl in the end)
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "message1: " << message1 << endl;
    cout << "size: " << size_of_array << endl;


    // string literal
    char message4[] = {"hello world, how you doing? "};
    int size_of_m4 = sizeof(message4)/sizeof(message4[0]);
    cout << "message4: " << message4 << endl;
    cout << " sizeof(message4): " << size_of_m4 << endl; // 29

    // int
    int numbers[] = {1,2,3,4,5};
    cout << "numbers " << numbers << endl; // this wont work. you need to make a loop instead


    return 0;
}

/*


void hunt_for_vowels(char message[], unsigned int size){

  unsigned int vowel_count{};   //Initialized to zero
  
  //Don't modify anything above this line
  //Your code should go below this line
  // - - - - - - - - - - - - - - - - - - - - -
  
  for(unsigned int i=0; i < size; ++i){
      if((message[i] == 'A')||
            (message[i] == 'E')||
            (message[i] == 'I')||
            (message[i] == 'O')||
            (message[i] == 'U')||
            (message[i] == 'a')||
            (message[i] == 'e')||
            (message[i] == 'i')||
            (message[i] == 'o')||
            (message[i] == 'u')){
            ++vowel_count;
            }
      
  }

 // - - - - - - - - - - - - - - - - - - - - - - -
  //Your code should go above this line
  //Don't modify anything below this line
  
  
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}


*/