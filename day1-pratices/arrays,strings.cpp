#include <bits/stdc++.h>
using namespace std;

// Class containing the method to find string length
class Solution {
public:
  string modifyString(string str){
    string newStr = str;
    newStr[0] = 'H';
    return newStr;
  }
};

// Driver code
int main() {
    string original = "hello";
    Solution sol;

    string modified = sol.modifyString(original);

    cout << "Original String : " << original << endl;
    cout << "Modified String : " << modified << endl;
   
}
