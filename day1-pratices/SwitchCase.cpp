#include <bits/stdc++.h>
using namespace std ;

class SwitchCase {
public:
    void Days (){
        int day;

        cout << "Enter a number (1-7): ";
        cin >> day;

        switch (day) {
            case 1:
                cout << "Monday" << endl;
                break; 
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Invalid" << endl;
            }
        }

    void constantIntegers (){
        const int x = 10;
        const int y = 5;

        // Evaluate the sum of x and y using a switch statement
        switch (x + y) {
            case 15: // If the sum equals 15
                cout << "Result is 15." << endl;
                break; // Exit the switch block
            case 20: // If the sum equals 20
                cout << "Result is 20." << endl;
                break; // Exit the switch block
            default: // If no case matches
                cout << "No match found." << endl;
        }
    }
};

int main(){
    SwitchCase obj1 , obj2 ;
    obj1.Days();
    obj2.constantIntegers();
}