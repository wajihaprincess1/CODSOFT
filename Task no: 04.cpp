#include <iostream>
using namespace std;

string addlist[5];

void add () {
    for(int i=0; i<5; i++){
        cout<<"Enter task: "<<(i + 1)<<": "<<endl;
        getline(cin, addlist[i]); //add tasks which are completed and pending 
        
    }
}
void view() {
    for(int i=0; i<5; i++){
    cout<<"========== TASK LIST =========== "<<endl;
    cout << "Task " << (i + 1) << ": " << addlist[i] << endl; //Show the status of completed and pending tasks
}
}
void markCompleted() {
    int taskNumber;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber >= 1 && taskNumber <= 5) {
        
        cout << "Task " << taskNumber << " marked as completed." << endl;
    } else {
        cout << "Invalid task number. Please enter a number between 1 and 5." << endl;
    }
}
void removeTask() {
    int taskNumber;
    cout << "Enter the task number to delete: ";
    cin >> taskNumber;

    if (taskNumber >= 1 && taskNumber <= 5) {
        
        cout << "Task " << taskNumber << " deleted." << endl;
    } else {
        cout << "Invalid task number. Please enter a number between 1 and 5." << endl;
    }
}
int main(){
    cout<<"\t\t======================= A SIMPLE CONSOLE-BASED TO-DO LIST ============================"<<endl; //Task no: 4

    //Take input from the user those tasks that want to add in the list.
    string task1;
    cout<<"============= ENTER THE TASK1 =================="<<endl;
    getline(cin,task1);
    string task2;
    cout<<"============= ENTER THE TASK2 =================="<<endl;
    getline(cin, task2);
    string task3;
    cout<<"============= ENTER THE TASK3 =================="<<endl;
    getline(cin,task3);
    string task4;
    cout<<"============= ENTER THE TASK4 =================="<<endl;
    getline(cin,task4);
    string task5;
    cout<<"============= ENTER THE TASK5 =================="<<endl;
    getline(cin,task5);
    
    cout <<"\t\t============ Add tasks ============" << endl; //Add tasks
    cout<<"Add the tasks into a list: "<<endl;
    add();
    
    cout <<"\t\t============== View tasks ==============" << endl; //View tasks
    cout<<"View the tasks from a list: "<<endl;
    view();
    
    cout <<"\t\t=============== Mark a task as completed ================" << endl; //Mark task as completed
    cout<<"Mark the completed tasks from a list: "<<endl;
    markCompleted();
    
    int choice;
    cout<<"Enter your choice: "<<endl;
    cout <<"\t\t=============== Delete a task from the list =================" << endl; //Delete task as an option
    cin>>choice;
    switch(choice){ //Switch case to provide an option to remove the task from the list
        case 1:          
        cout<<"Delete a task from the list: "<<endl;
        removeTask();
        break;

        default:
        cout<<"Don't need to delete any task."<<endl;
        break;

    }
              
    }
