#include<bits/stdc++.h>
using namespace std ;

class IfElse {
public:
// single use if else case 
    void SingleUseIfElse (){
    int age ;
    cout << "Enter Your age : ";
    cin >> age ;

    if (age >= 18 ){
        cout << "Your are Adult." << endl;
    }
    else {
        cout << " your are underage." << endl;
    }
    }

    void MutipleUseIfElse(){
        
    int marks ;

    cout << "Enter Your marks ";
    cin >> marks ;
     if (marks < 25) {
        cout << "Grade: F" << endl;  // Less than 25 is Grade F
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;  // Between 60 and 69 is Grade B
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;  // 70 and above is Grade A
    } else {
        cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    }
    }
    
};

int main (){
    
    IfElse obj1 , obj2 ;
    obj1.SingleUseIfElse();
    obj2.MutipleUseIfElse();
}