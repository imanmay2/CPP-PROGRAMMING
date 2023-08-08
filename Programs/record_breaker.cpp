// REcord breaking data. 
// [1,2,0,7,2,0,2,2]

// conditions to be noted is that : 
// the number of visitors on that day is strictly larger than the number 
// of visitors on each of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors 
// on the following day.
// NOTE : every first day could be record breaking days.





#include<iostream>
#include<climits>
using namespace std;


// function for printing the maximum element from the subarray.
int f_max(int num,int a[num]){
    int maxi=INT_MIN;
    for(int i=0;i<num;i++)
    {
        maxi=max(mx,a[i]);
    }
    return maxi;
}



int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {// inserting elements into the array 
        cout<<"Enter the element : ";
        cin>>a[i];
    }



// finding the max element from array.
int mx=INT_MIN;
int indx=0;
for(int j=0;j<n;j++){
    mx=max(mx,a[j]);
}


//traversing the array.
int ct=0,k=0;
while(a[k]!=mx){
    if(k==0 && a[k]>a[k+1]){
        cout<<a[k]<<" IS A RECORD BREAKING DAY."<<endl;
        int maxi=a[k];
    }
    else if(a[k]>a[k+1] && a[k]>f_max(k,a[k])){
        cout<<a[k]<<"IS THE RECORD BREAKING DAY."<<endl;
    }

}
return 0;
}

