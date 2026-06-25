#include <iostream>
using namespace std ;

class solution {
public:
    void RightAngledNumberPyramid (int n){
        for (int i = 1; i <= n ; i ++){
            for (int j = 1; j <= i ; j++  ){
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main (){
    solution obj ;
    int n = 5;
    obj.RightAngledNumberPyramid(n);
}

// output 

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 