#include <iostream>
#include <string>

// In order to find the index of a substring within a C++ string, we can use the  " find " method
using namespace std;

int main() 
{

    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};
    cout << "Enter your secret message : ";
    getline(cin, secret_message);

    string encrypted_message {};

    cout << "\nEncrypting message..." << endl;
    for (size_t i =0; i<secret_message.length(); ++i){
        size_t position = alphabet.find(secret_message[i]);

        if (position  != string :: npos){
            char new_char {key[position]};
            encrypted_message += new_char;}
        else {
            encrypted_message += i;    }
    }

    cout << "\nEncrypted message: " << encrypted_message << endl;
//
//
//
//
    string decrypted_message {};
    cout << "\nDecrypting message..." << endl;
    
    for (size_t i =0; i<secret_message.length(); ++i){
        size_t position = key.find(secret_message[i]);
        if (position != string::npos) {
            char new_char { alphabet[position] };
            decrypted_message += new_char;
        } else {
            decrypted_message += i; }
    }

    cout << "\nDEncrypted message: " << decrypted_message << endl;

    return 0;
}
