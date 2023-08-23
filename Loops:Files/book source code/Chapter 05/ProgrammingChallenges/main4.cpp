/*

Calories Burned
Running on a particular treadmill you burn 3.6 calories per minute.
Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.

*/
#include <iostream>

int main() {
    const double caloriesPerMinute = 3.6;
    
    // Display the header
    std::cout << "Minutes\tCalories Burned" << std::endl;
    
    // Generate the table
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = caloriesPerMinute * minutes;
        std::cout << minutes << "\t" << caloriesBurned << std::endl;
    }
    
    return 0;
}

/*
Minutes Calories Burned
5       18
10      36
15      54
20      72
25      90
30      108
*/