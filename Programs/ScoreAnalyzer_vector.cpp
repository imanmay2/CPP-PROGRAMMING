#include<iostream>
#include<vector>
using namespace std;

void displayVec(const vector<int> &scores){
    for(int i:scores){
        cout<<i<<" ";

    } cout<<endl;
}

template<class T> void addScores(vector<int> &scores,T n){
    scores.resize(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the score "<<i+1<<": ";
        cin>>scores[i];
    }
    cout<<"Scores Added Successfully."<<endl;
}

void analyzeScores(const vector<int> &scores){
    int highest=INT_MIN;
    int lowest=INT_MAX;
    for(int i=0;i<scores.size();i++){
        if(scores[i]>highest){
            highest=scores[i];
        } 
        if(lowest>scores[i]){
            lowest=scores[i];
        }
    }

    cout<<"Highest Scored is : "<<highest<<endl;
    cout<<"Lowest Scored is : "<<lowest<<endl;
}

double averageScore(const vector<int> &scores){
    int sum=0;
    for(int i:scores){
        sum=sum+i;
    } 
    return (static_cast<double>(sum)/(scores.size()));
}


template<class T1> int countStudentAvg(const vector<int> &scores,T1 average){
    int ct=0;
    for(int i:scores){
        if(i>average){
            ct++;
        }
    }
    return ct;
}

void sortScoresAsc(vector<int> &scores){
    sort(scores.begin(),scores.end());
}

void searchScore(const vector<int> &scores,int score){
    auto it=find(scores.begin(),scores.end(),score);
    if(it!=scores.end()){
        cout<<"Score Found!"<<endl;
    } else {
        cout<<"Score Not Found!"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    vector<int> scores;
    //Adding scores
    addScores(scores,n);
    displayVec(scores);
    analyzeScores(scores);
    double avg=averageScore(scores);
    cout<<"Average Score is : "<<avg<<endl;
    cout<<"No. of student above average is : "<<countStudentAvg(scores,avg)<<endl;
    sortScoresAsc(scores);
    displayVec(scores);
    cout<<"Enter the score to be searched for : ";
    int score;
    cin>>score;
    searchScore(scores,score);
}