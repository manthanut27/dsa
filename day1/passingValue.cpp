#include <iostream>
using namespace std ;

class Pass {
public:
    void PassbyValue (int a){
        a = a + 10;
    }

    void PassbyReference(int &a){
        a = a + 10;
    }
};

int main () {
    Pass obj1 , obj2 ;
    int x = 5 , y = 10 ;

    obj1.PassbyValue(x);
    cout << x << endl;

    obj2.PassbyReference(y);
    cout << y << endl;


}
