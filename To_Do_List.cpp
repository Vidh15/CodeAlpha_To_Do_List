#include<iostream>
#include<string>
using namespace std;
// maximun number of tasks
const int max_tasks=100;
//define a structure for tasks
struct Task
{
    string description;
    bool isDone;
};

int main()
{
    Task tasks[max_tasks];
    int numTasks=0;

    while(true)
    {
        cout<<"To_Do List Application"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2.List Of Task"<<endl;
        cout<<"3.Mark Task as Done"<<endl;
        cout<<"4.Quit."<<endl;

        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            if(numTasks<max_tasks)
            {
                cout<<"Enter Task  description:";
                cin.ignore();
                getline(cin,tasks[numTasks].description);
                tasks[numTasks].isDone=false;
                numTasks++;
                cout<<"Task Add."<<endl;
            }
            else
            {
                cout<<"Task list is full. can't add more tasks."<<endl;
            }
            cout<<endl;
        }
        else if(choice==2)
        {
            cout<<"Tasks:"<<endl;
            for(int i=0; i<numTasks; i++)
            {
                cout<<(i+1)<<".";
                if(tasks[i].isDone)
                {
                    cout<<"[X]";
                }
                else
                {
                    cout<<"[]";

                }
                cout<<tasks[i].description<<endl;
            }
            cout<<endl;
        }
        else if(choice==3)
        {
           cout<<"Enter the task number to marks as done:";
           int taskNumber;
           cin>>taskNumber;
           if(taskNumber > 0 && taskNumber <= numTasks)
           {
            tasks[taskNumber-1].isDone=true;
            cout<<"Task marked as done."<<endl;
           }
           else
           {
            cout<<"Invalid task number."<<endl;
           }
           cout<<endl;
        }
        else if(choice==4)
           {
            cout<<"GoodBye!"<<endl;
            break;
           }
           else 
           {
            cout<<"Invalid choice. Please try again."<<endl;
           }
        }
    
    return 0;

}