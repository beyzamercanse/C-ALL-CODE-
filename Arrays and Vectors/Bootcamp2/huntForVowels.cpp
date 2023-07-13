// Hunt for vowels


/* Given an array of char types, your job is to hunt for vowels in that array and store the number of vowels in a given variable. 
For example if you input is
char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u,'e',' ','m','y',' ','f','r','i','e,'n','d'};
your code should find that it contains 6 vowels and store the 6 is a specified vowel_count variable.

You will assume that the characters are stored in an array of char called message available to you within these two comments.
*/
 

 #include <iostream>
 using namespace std;

 int main(){
    int vowel_count = 0; // Variable to store the count of vowels and initialize it to zero

    char message[] = {'T','a','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u,','e',' ','m','y',' ','f','r','i','e,','n','d'};

    for (char c : message){
        char lowercase_c = tolower(c);
        if (lowercase_c == 'a' || lowercase_c == 'e' || lowercase_c == 'i' || lowercase_c == 'o' || lowercase_c == 'u') {
            vowel_count++;
        }
    }

    cout << "The number of vowels in the message is: " << vowel_count << endl;

    return 0;
 }