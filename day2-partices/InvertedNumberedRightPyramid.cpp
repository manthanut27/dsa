#include <iostream>
using namespace std ;

class InvertedNumberedRightPyramid{
public:
    void RightPyramid (int x){
        for (int i = 0 ; i < x ; i++){
            for (int j = x ; j > i ; j--){   
                cout << x - j + 1 << " ";
        }
        cout << endl;
    }
    }
};

int main (){
    int x = 5 ;
    InvertedNumberedRightPyramid obj ;
    obj.RightPyramid(x);
    
}