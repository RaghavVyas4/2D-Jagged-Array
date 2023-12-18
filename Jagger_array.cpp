#include<iostream>

using namespace std;

int main(){

    // Taking user input of rows
    // you need in your jagged array.

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Creating an array to store size of each 
    // row of jagged array.

    int* sizeCol = new int[rows];

    // Taking sizes of each row
    cout << "Enter size of each row:";
    
    for(int i=0; i<rows; i++){
        cin >> sizeCol[i];
    }
    
    // Creating 2D-Jagged Array
    int** arr = new int* [rows];

    for(int i=0; i<rows; i++){
        arr[i] = new int[sizeCol[i]];
    }

    //Taking user input for 2D-Jagged Array
    cout << "Enter elements of array:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<sizeCol[i]; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    //Printing 2D-Jagged Array in matrix form
    cout << "Final Array:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<sizeCol[i]; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // releasing memory

    for(int i=0; i<rows; i++){
        delete [] arr[i];
    }

    delete [] sizeCol;
    delete [] arr;

return 0;

}