#include <iostream>
#include <list>
#include <string>
#include<algorithm>
using namespace std;

template <class T>
void addPlaylist(list<string> &li, T name, T push)
{
    transform(push.begin(),push.end(),push.begin(),::tolower);
    if (push== "begin")
    {
        li.push_front(name);
    }
    else if (push == "end")
    {
        li.push_back(name);
    }
}


void displayPlaylist(const list<string> &li){
    for(string i:li){
        cout<<i<<" ";
    } cout<<endl;
}

template <class T>
void deleteSong(list<string> &li,T nameD){
    auto it=find(li.begin(),li.end(),nameD);
    if(it!=li.end()){
        li.erase(it);
        cout<<"Song deleted successfully."<<endl;
    } else {
        cout<<"Song not found!. "<<endl;
    }
}

int main()
{
    list<string> li;
    while (true)
    {
        cout << "1. Add Song at Beginning or End " << endl;
        cout << "2. Display all Songs" << endl;
        cout << "3. Delete a specific Song." << endl;
        cout << "4. Reverse the Playlist" << endl;
        cout << "5. Clear the entire Playlist" << endl;
        string name, push;
        int ch;
        cout<<"Enter the choice : ";
        cin>>ch;
        if (ch == 1){
            cout << "Enter the song name: ";
            cin >> name;
            cout << "Enter begin/end to push the song at the top or bottom of the playlist";
            cin >> push;
            addPlaylist(li, name, push);
            cout<<"Playlist Updated.";
        }
        else if (ch == 2){
            displayPlaylist(li);

        } else if(ch==3){
            string nameD;
            cout<<"Enter the song name to be deleted : ";
            cin>>nameD;
            deleteSong(li,nameD);
        } else if(ch==4){
            li.reverse();
            cout<<"Playlist is being reversed.";
        } else if(ch==5){
            li.clear();
            cout<<"List is cleared."<<endl;
        }else{
            cout<<"Invalid Choice."<<endl;
            break;
        }
    }
}