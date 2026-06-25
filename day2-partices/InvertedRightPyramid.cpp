#include <iostream>
using namespace std ;

class InvertedRightPyramid{
public:
    void RightPyramid (int x){
        for (int i = 0 ; i < x ; i++){
        for (int j = x ; j > i ; j--){
        cout << "* " ;
        }
        cout << endl;
    }
    }
};

int main (){
    int x = 5 ;
    InvertedRightPyramid obj ;
    obj.RightPyramid(x);
    
}