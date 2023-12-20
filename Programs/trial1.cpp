#include <iostream>
#include <cmath>
using namespace std;

 bool isSingleDigit (int x) {
   return (x >= 0 && x < 10);
 }

  int main () {
    // cout << isSingleDigit (2) << endl;
    // bool bigFlag = !isSingleDigit (17);
    // cout << bigFlag;
    if(isSingleDigit(1)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
  }