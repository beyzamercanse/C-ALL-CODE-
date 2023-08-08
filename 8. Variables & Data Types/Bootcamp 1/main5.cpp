// AUTO = it tells the compiler to infer the type of an expression and use that as the type for our variable

#include <iostream>
using namespace std;

int main(){
    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 14.0f;
    auto var4 = 15.0l;
    auto var5 = 'e';

    // int modifier suffixes
    auto var6 = 123u; // unsigned
    auto var7 = 123ul; //unsigned long
    auto var8 = 123ll; // long long



    cout << var1 << endl; // 12
    cout << var2 << endl; // 13
    cout << var3 << endl; //14
    cout << var4 << endl; // 15
    cout << var5 << endl; // e
    cout << var6 << endl; // 123
    cout << var7 << endl; // 123
    cout << var8 << endl; // 123



    cout << sizeof(var1) << endl; // 4 ; int
    cout << sizeof(var2) << endl; // 8  ; double
    cout << sizeof(var3) << endl; // 4  ; float
    cout << sizeof(var4) << endl; // 16  ; long double
    cout << sizeof(var5) << endl; // 1 ; char
    cout << sizeof(var6) << endl; // 4 ; int
    cout << sizeof(var7) << endl; // 8 ; long int
    cout << sizeof(var8) << endl; // 8 // long long int

    // BE CAREFUL ABOUT AUTO ASSIGNMENTS. 
    auto var_new = 333u; // means its a positive integer? but --> 
    var_new = -22; /// assigned to negative here. its a disaster
    cout << "var3_new is :  " << var_new << endl; // var_new:  4294967274

    return 0;
}

