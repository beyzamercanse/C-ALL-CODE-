#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

void printCalendar(int year, int firstWeekday) {
    string months[] = {"January", "February", "March", "April", "May", "June", "July",
                       "August", "September", "October", "November", "December"};
    string weekdays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    
    cout << "================ Calendar for Year " << year << " ================\n";
    
    for (int month = 1; month <= 12; ++month) {
        cout << "======== " << setw(10) << left << months[month - 1] << " ========\n";
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";
        
        int daysInMonth = getDaysInMonth(month, year);
        
        for (int day = 1; day <= daysInMonth; ++day) {
            if (day == 1) {
                cout << setw(firstWeekday * 4) << "";
            }
            
            cout << setw(3) << day << " ";
            
            if ((firstWeekday + day) % 7 == 0 || day == daysInMonth) {
                cout << "\n";
            }
        }
        
        firstWeekday = (firstWeekday + daysInMonth) % 7;
    }
}

int main() {
    int year, firstWeekday;

    cout << "Enter a year: ";
    cin >> year;

    cout << "Enter the first day of the year (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> firstWeekday;

    printCalendar(year, firstWeekday);

    return 0;
}


