// NESTED LOOPS

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const size_t ROWS = 5;
    const size_t COLS = 2;


    // // 2D TABULAR DATA VISUALIXATION WITH NESTED FOR LOOP

    for (size_t row=0; row<ROWS; ++row){
        for (size_t col=0; col < COLS; ++col){
            cout << "(row " << setw(2) << row << ", col " << setw(2) << col << ")";
        }
        cout << endl;

    }

    /*

(row  0, col  0)(row  0, col  1)
(row  1, col  0)(row  1, col  1)
(row  2, col  0)(row  2, col  1)
(row  3, col  0)(row  3, col  1)
(row  4, col  0)(row  4, col  1)

*/

    // 2D TABULAR DATA VISUALIXATION WITH NESTED WHILE LOOP

    // remember to reset col to 0 after the inner loop is done for the next row to use the right columns.
    size_t row_new = 0;
    size_t col_new = 0;

    while (row_new < ROWS){
        while (col_new < COLS){
            cout << "( row   " << setw(2) << row_new << ", col  " << setw(2) << col_new << ")";
            ++col_new;
        }
        cout << endl;
        col_new = 0; // reset col to 0 to allow printing from col 0 . col is in main function local scope now.
        
        ++row_new;
        
    }
/*
( row    0, col   0)( row    0, col   1)
( row    1, col   0)( row    1, col   1)
( row    2, col   0)( row    2, col   1)
( row    3, col   0)( row    3, col   1)
( row    4, col   0)( row    4, col   1) */



    // 2D TABULAR DATA VISUALIXATION WITH NESTED DO-WHILE LOOP
    row_new = 0;
    col_new = 0;

    do { // ROW
        do { // COL

            cout << "( row   " << setw(2) << row_new << ", col  " << setw(2) << col_new << ")";
            ++col_new;

        } while (col_new < COLS);
        cout << endl;
        col_new=0;
        ++row_new;

    } while (row_new < ROWS);

/*
( row    0, col   0)( row    0, col   1)
( row    1, col   0)( row    1, col   1)
( row    2, col   0)( row    2, col   1)
( row    3, col   0)( row    3, col   1)
( row    4, col   0)( row    4, col   1) */



    return 0;
}



// setw function is a C++ manipulator which stands for set width (yazilar arasinda bosluk olusturmak icin kullanilir)