#include <iostream>
using namespace std ;

class solution {
public:
    void RightAngledNumberPyramid (int n){
        for (int i = 1; i <= n ; i ++){
            for (int j = 1; j <=i ; j++  ){
                cout << j << " ";
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
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 