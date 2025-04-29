#include<iostream>
#include<map>

using namespace std;


template<class T> void addMarks(map<int,double> &marks,T n){
    int r;
    double m;
    for(int i=1;i<=n;i++){
        cout<<"Enter the roll number: ";
        cin>>r;
        cout<<"Enter marks: ";
        cin>>m;
        marks.insert({r,m});
    }

    cout<<"Data inserted successfully."<<endl;
}

template<class T> void updateMarks(map<int,double> &marks,T roll){
    
    if(marks.find(roll)!=marks.end()){
        cout<<"Enter the new marks : ";
        cin>>marks[roll];
        cout<<"Marks Updated for Roll no. "<<roll<<endl;
    } else{
        cout<<"Marks not found!"<<endl;
    }
}

template<class T> void deleteData(map<int,double> &marks,T roll){
    
    if(marks.find(roll)!=marks.end()){
        marks.erase(roll);
    } else{
        cout<<"Roll number not found in Database."<<endl;
    }
}

template<class T> void searchData(const map<int,double> &marks,T roll){
    auto it=marks.find(roll);
    if(it!=marks.end()){
        cout<<"Roll: "<<it->first<<" Marks: "<<it->second<<endl;
    } else{
        cout<<"Roll number not found!"<<endl;
    }
}

void displayAsc(const map<int,double> marks){
    // sort(marks.begin(),marks.end());
    for(auto i:marks){
        cout<<"Roll: "<<i.first<<" Marks: "<<i.second<<endl;
    }
}

int main(){
    map<int,double> marks;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    addMarks(marks,n);
    int roll;
    cout<<"Enter the roll to be updated: ";
    cin>>roll;
    updateMarks(marks,roll);

    int r;
    cout<<"Enter the roll to be deleted: ";
    cin>>r;
    deleteData(marks,r);

    int r_;
    cout<<"Enter the roll to be searched for: "<<endl;
    cin>>r_;
    searchData(marks,r_);

    displayAsc(marks);
}