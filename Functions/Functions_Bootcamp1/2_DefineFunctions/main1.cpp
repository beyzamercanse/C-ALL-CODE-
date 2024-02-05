#include <iostream>
using namespace std;

int max(int a, int b); // function declaration, prototype
int min(int a, int b);
int inc_mult( int a, int b);


int main(){
    int x = 5;
    int y = 2;
    int result = max(x,y);
    cout << "max: " << result << endl;
    result =inc_mult(x,y);
    std::cout << "result : " << result << std::endl;

    return 0;
    }


// function definition , shows up after main
int max(int a, int b){
    if (a>b)
    {
        return a;
        }
    else 
    {
        return b;
        }
}

//Function definition. Shows up after main 
int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

int inc_mult( int a, int b){
    return ( (++a)*(++b));
}


