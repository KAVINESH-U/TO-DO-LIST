#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    string tasks[20]={""},task[20]={""};
    string c_task[20]={""};
    char input1,input2;
    int task_count=0,option,i,d_task,n,t;
    cout<<"---------------------------"<<endl;
        cout<<"\t\tTO DO LIST"<<endl;
         cout<<"---------------------------"<<endl;
        cout<<"1- ADD TASKS"<<endl;
        cout<<"2- VIEW TASKS"<<endl;
        cout<<"3- UPDATE TASKS"<<endl;
        cout<<"4- DELETE TASKS"<<endl;
        cout<<"5- TO EXIT"<<endl;
        cout<<"---------------------------"<<endl;
    while(option!=5)
    {
        cout<<"Enter Your Choice:";
        cin>>option;
        switch(option)
        {
            case 1:
            {
                 cout<<"---------------------------"<<endl;
                cout<<"\t\tTASK ADD"<<endl;
                cout<<"---------------------------"<<endl;
                   system("cls");
                    cout<<"Enter Task"<<task_count+1<<" :"<<endl;
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                    cout<<"Do you want to add one more task?"<<endl;
                    cout<<"(y/n):";
                    cin>>input1;
                    if(input1=='y')
                    {
                     cout<<"Enter Task"<<task_count+1<<" :"<<endl;
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                    }
                break;
            }
            case 2:
            {
                 cout<<"---------------------------"<<endl;
                cout<<"\t\tTASK VIEW"<<endl;
                cout<<"---------------------------"<<endl;
                if(task_count==0)
                {
                    cout<<"No Tasks To View!!!"<<endl;
                }
                else
                {
                    cout<<"TASKS\t\t\t\tSTATUS"<<endl;
                for(i=0;i<task_count;i++)
                {
                    if(i+1!=n)
                    {
                    c_task[i]={"not completed"};
                    cout<<"Task "<<i+1<<" :"<<tasks[i]<<"\t\t"<<c_task[i]<<endl;
                    }
                     else
                    {
                    c_task[i]={"completed"};
                    cout<<"Task "<<i+1<<" :"<<tasks[i]<<"\t\t"<<c_task[i]<<endl;
                    }
                }
                }
                 break;
            }
            case 3:
            {
                system("cls");
                cout<<"---------------------------"<<endl;
                cout<<"\t\tTASK UPDATE"<<endl;
                cout<<"---------------------------"<<endl;
                if(task_count==0)
                {
                    cout<<" No Tasks To Update!!!"<<endl;
                }
                else
                {
                cout<<"Enter the task number";
                cin>>t;
                for(i=t-1;i<t;i++)
                {
                    cout<<"TASK"<<tasks[i]<<endl;
                }
                cout<<"Have You completed the above task?"<<endl;
                 cout<<"(y/n):";
                 cin>>input2;
                 if(input2=='y')
                 {
                     n=t;
                     cout<<"task updated successsfull"<<endl;
                 }
                 else
                 {
                     n=t+20;
                      cout<<"task updated successsfull"<<endl;
                 }
                }
                break;
            }
            case 4:
            {
                system("cls");
                 cout<<"---------------------------"<<endl;
                cout<<"\t\tTASK DELETE"<<endl;
                cout<<"---------------------------"<<endl;
                 if(task_count==0)
                {
                    cout<<" No Tasks To Delete!!!"<<endl;
                }
                else
                {
                cout<<"Enter the task number to delete it:";
                cin>>d_task;
                for(i=d_task-1;i<task_count;i++)
                {
                    tasks[i]=tasks[i+1];
                }
                task_count--;
                cout<<"Task Deleted Successfully."<<endl;
                }
                break;
            }
            case 5:
            {
                cout<<"EXITED!!!."<<endl;
                break;
            }
        }
    }
}
