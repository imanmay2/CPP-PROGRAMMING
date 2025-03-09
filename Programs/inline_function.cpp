#include<iostream>
#include<cmath>
using namespace std;
inline float sqrRoot(float num){
    return sqrt(num);
}

int main(){
    float n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<"The square Root of the number : "<<sqrRoot(n);
}