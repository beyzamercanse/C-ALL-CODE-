// UNDERFLOW ISSUE WHILE DECREMENTING

  #include <iostream>  
    int main(){
 
        for( unsigned char i{10}; i >= 0 ; --i){
            std::cout << "value : " << static_cast<unsigned int>(i) << std::endl;
        }
     
        return 0;
    }

    // The program will run indefinitely. 
    // The reason is that when the loop hits 0 and we --i in hope to get a -1 and stop the loop, 
    // the value in our unsigned char will underflow and be the max value we can store in a char, namely 255.
    // It will be >=0 and the loop will have no reason to stop! 
    // It will keep running indefinitely printing values between 0 and 255.

