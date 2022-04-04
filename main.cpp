// Title : Array Forward / Backward
// Purpose : Let user determine size of array and fill in the element the output the elements
// Enjoy the process - Practice makes Improvement

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int sizeArr = 0;
    int numData = 0;
    int outputStyle = 0;

    cout << "\nInput the size of array you would like to set : " << endl;
    cin >> sizeArr;

    const int SIZE = sizeArr;                         // later on, Size can't be modified
    int arrNumbers[SIZE];

    cout << "\nInput " << SIZE << " elements in array (separated by space) : " << endl;
    for(size_t i = 0; i < SIZE; i++)
    {
        cin >> arrNumbers[i] ;
    }

    cout << "\nChoose display style to output elements in array : " << endl;
    cout << "  Option 1 =  1) element 1 newline\n              2) element 2 newline\n              so on...\n" << endl;
    cout << "  Option 2 = [ element 1, element 2, so on...]" << endl;
    cout << "\nDisplay style (the number) : \t";
    cin >> outputStyle;

    cout << endl << "===============================================================" << endl << endl;

    if( outputStyle == 1)
    {
        cout << "The element in array in 'Forward-mode' are :" << endl;
        for (size_t i = 0; i < SIZE; i++) {
            numData++;
            cout << numData << ") " << arrNumbers[i] << endl;
        }
        cout << endl;
        numData = 0;                                        // set numdata back to 0
        cout << "\nThe element in array in 'Backward-mode' are :" << endl;
        for (size_t i = 1; i <= SIZE; i++)                   // i starts at 1 to makes sure we output fill the 0 index
        {
            numData++;
            cout << numData << ") " << arrNumbers[SIZE - i] << endl;
        }
        cout << endl;
    } else if(outputStyle == 2)
    {
        cout << "The element in array in 'Forward-mode' are :" << endl;
        cout << "[ ";
        for (size_t i = 0; i < SIZE; i++) {
            cout << arrNumbers[i] << ' ';
        }
        cout << ']' << endl;

        cout << "\nThe element in array in 'Backward-mode' are :" << endl;
        cout << "[ ";
        for (size_t i = 1; i <= SIZE; i++)                   // i starts at 1 to makes sure we output fill the 0 index
        {
            cout  << arrNumbers[SIZE - i] << ' ';
        }
        cout << ']' << endl;
    } else
    {
        cout << " Invalid Input " << endl;
         return 1;
    }

    return 0;
}

