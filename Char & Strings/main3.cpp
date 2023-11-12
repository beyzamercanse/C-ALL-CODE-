#include <iostream>
#include <cstring> // for c style string funcrions
#include <cctype> // for char based functions

using namespace std;

int main(){

    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    // cout << "please enter your first name: ";
    // cin >> first_name;

    // cout << "please enter your last name: ";
    // cin >> last_name;

    // cout << "\n";

    // cout << "hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // cout << "\n";

    // strcpy(full_name, first_name); // copy first_name to full_name ==== beyza\0
    // strcat(full_name, " "); // concatenate full_name and a space === beyza \0
    // strcat(full_name, last_name); // concatenate last_name to full_name === beyza mercan\0
    // cout << "your full name is " << full_name << endl;

    // cout << "\n";

    cout << "enter your full name: ";
    cin.getline(full_name, 50); // cin.getline to get "beyza mercan" instead of beyza.      if we just do cin>> it will only accept beyza 
    cout << "your full name is " << full_name << endl; 

    cout << "\n";

    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same "<< endl;
    else
        cout << temp << " and " << full_name << " are different " << endl;

    cout << "\n";


    for(size_t i = 0; i<strlen(full_name); ++i){
        if (isalpha(full_name[i])) // b-e-y-z-a
            full_name[i] = toupper(full_name[i]); // B E Y Z A
    }
    cout << "your full name is " << full_name << endl;












    return 0;
}

