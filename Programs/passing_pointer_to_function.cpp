// CHECK WHETHER THE VALUE OF  'a' INSIDE FUNCTION AND MAIN CODE IS SAME OR NOT


#include<iostream>
using namespace std;
void increment(int a){
    a++;
}
int main(){
    int a=2;
    increment(a);
    cout<<a;   // HERE THE VALUE REMAINED UNCHANGED.
    return 0;
}