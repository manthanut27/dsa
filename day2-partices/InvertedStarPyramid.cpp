#include <iostream>
using namespace std ;

class StarPyramid{
    public: 
    void Pyramid (int n ){
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < i; j++){
                cout << " " ;
            }
            for (int j = 0 ; j < 2 * n - (2 * i + 1) ; j++){
                cout << "*" ;
            }
            for (int j = 0 ; j < i ; j++){
                cout << " " ;
            }
            cout << endl;
        }
    }
};

int main (){
    StarPyramid obj ;
    int x = 5 ;
    obj.Pyramid(x);

}