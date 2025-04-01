// You are using GCC
#include<iostream>
#include<string>
using namespace std;

class code{
    public:
    
    void add(string inp,string inp1){
        cout<<inp1<<endl;
    }
    void add(string inp,string inp1,string inp2){
        cout<<inp1<<inp2<<endl;
    }
    void add(string inp,string inp1,string inp2,string inp3){
        cout<<inp1<<inp2<<inp3<<endl;
    }
    
    
    void add(int inp,int inp1){
        cout<<inp1<<endl;
    }
    void add(int inp,int inp1,int inp2){
        cout<<inp1+inp2<<endl;
    }
    void add(int inp,int inp1,int inp2,int inp3){
        cout<<inp1+inp2+inp3<<endl;
    }
};


int main(){
    string inp;
    cin>>inp;
    if(inp=="str"){
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        code c1,c2,c3;
        c1.add(inp,s1);
        c2.add(inp,s1,s2);
        c3.add(inp,s1,s2,s3);
    } else if(inp=="int"){
        int s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        code c1,c2,c3;
        c1.add(inp,s1);
        c2.add(inp,s1,s2);
        c3.add(inp,s1,s2,s3);
    }
}