// REcord breaking data. 
// [1,2,0,7,2,0,2,2]

// conditions to be noted is that : 
// the number of visitors on that day is strictly larger than the number 
// of visitors on each of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors 
// on the followijg day.
// NOTE : every first dat could be record breaking days.





#include<iostream>
#include<climits>
using namespace std;
int maxi(int arr,int n){
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        maxx=max(arr[i],maxx);
    }
    return maxx;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }
    
    // main code starts here.
    int max;
    cout<<"Record Breaking days are : ";
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                cout<<arr[i]<<endl;
            }
        }
        else if(i==n-1){
            max=maxi(arr,i-1);
            if(max<arr[i]){
                cout<<arr[i]<<endl;
                }
            }
        else{
            max=maxi(arr,i-1);
            if(max<arr[i] && arr[i]>arr[i+1])
            cout<<arr[i]<<endl;
            }
            
        }

    }



