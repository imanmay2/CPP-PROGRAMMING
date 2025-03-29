// 2. Gym Membership Management
// Design a program to manage gym memberships using arrays to store member details such as IDs, names, and membership statuses (Active or Inactive). The program should include the following functionalities:
// 1. Add new members to the system by providing their IDs and names. The membership status of newly added members should default to "Active."
// 2. Search for a member by their ID and display their details, including their name and membership status. If the member is not found, display an appropriate message.
// 3. Update the membership status of an existing member (e.g., mark as "Inactive").
// 4. Calculate and display the total number of active and inactive members.
// 5. Display the details of all members, including their IDs, names, and membership statuses.
// These operations should be implemented using functions, and a menu-driven interface should allow the user to manage gym memberships interactively

// Sample Input:
// Menu
// 1. Add Member
// 2. Search Member
// 3. Update Membership Status
// 4. Calculate Membership Totals
// 5. Display All Members
// 0. Exit
// Enter your choice: 1
// Enter member ID: 101
// Enter member name: Alice
// Enter your choice: 1
// Enter member ID: 102
// Enter member name: Bob
// Enter your choice: 2
// Enter member ID to search: 101
// Enter your choice: 3
// Enter member ID to update: 102
// Enter new status (Active/Inactive): Inactive
// Enter your choice: 4
// Enter your choice: 5
// Enter your choice: 0
// Sample Output:

// Member 101 (Alice) added successfully.

// Member 102 (Bob) added successfully.


// Member Found:

// ID: 101, Name: Alice, Status: Active


// Membership status of Member 102 updated to Inactive.


// Membership Totals:

// Active Members: 1

// Inactive Members: 1


// All Members:

// ID: 101, Name: Alice, Status: Active

// ID: 102, Name: Bob, Status: Inactive


// Exiting program.

#include<iostream>
#include<string>

using namespace std;
int main(){
    cout<<"MENU : "<<endl;
    cout<<"1. ADD MEMBERS"<<endl;
    cout<<"2. SEARCH MEMBERS"<<endl;
    cout<<"3. UPDATE MEMBERSHIP STATUS"<<endl;
    cout<<"4. CALCULATE MEMBERSHIP TOTALS"<<endl;
    cout<<"5. DISPLAY MEMBERS"<<endl;
    cout<<"0. EXIT"<<endl;
    int ch;
    int id[1000];
    string name[1000];
    string status[1000];
    int ct=-1;
    while(true){
        cout<<"Enter the choice : "<<endl;
        cin>>ch;
        if(ch==1){
            ct++;
            cout<<"Enter the Member ID : ";
            cin>>id[ct];
            cout<<"Enter member name : ";
            cin.ignore();
            getline(cin,name[ct]);
            status[ct]="Active";
            cout<<"Member "<<id[ct]<<" ("<<name[ct]<<") "<<"added successfully."<<endl;
        }
        else if(ch==2){
            int search_id;
            cout<<"Enter member ID to search : ";
            cin>>search_id;
            bool f=false;
            for(int i=0;i<=ct;i++){
                if(id[i]==search_id){
                    f=true;
                    cout<<"Member Found: "<<endl;
                    cout<<"ID: "<<search_id<<", Name: "<<name[i]<<", Status: "<<status[i]<<endl;
                }
            }
            if(f==false){
                cout<<"Member not Found !"<<endl;
            }
        } else if(ch==3){
            int update_id;
            cout<<"Enter the member ID to update: ";
            cin>>update_id;
            bool f=false;
            for(int i=0;i<=ct;i++){
                if(id[i]==update_id){
                    f=true;
                    cout<<"Enter new status (Active/Inactive): ";
                    cin>>status[i];
                    cout<<"Membership status of Member "<<id[i]<<" updated to "<<status[i]<<endl;
                }
            }
            if(f==false){
                cout<<"Member not found!!"<<endl;
            }
        } else if(ch==4){
            int active=0;
            int inactive=0;
            for(int i=0;i<=ct;i++){
                if(status[i]=="Active"){
                    active++;
                } else if(status[i]=="Inactive"){
                    inactive++;
                }
            }
            cout<<"Membership Totals: "<<endl;
            cout<<"Active Members: "<<active<<endl;
            cout<<"Inactive Members: "<<inactive<<endl;
        } else if(ch==5){
            cout<<"All Members: "<<endl;
            for(int i=0;i<=ct;i++){
                cout<<"ID: "<<id[i]<<", Name: "<<name[i]<<", Status: "<<status[i]<<endl; 
            }
        } else if(ch==0){
            cout<<"Exiting the Program ! ";
            break;
        }
    }
}