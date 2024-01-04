#include <iostream>

using namespace std;



  // Class to represent a to-do list
class to_do_list{
 private :
     string  tasks [10] ;   // Array to store tasks
     int task_count;        // Number of tasks in the list



public:

   // Method to display a label for the to-do list
 void label(){
 cout<< "         *****************************************************************"<<endl;
 cout <<"         *                     OUR TO DO LIST PROGRAME ^-^               *"<<endl;
 cout <<"         *****************************************************************"<<endl;

 }

   // Constructor to initialize the task count
 to_do_list(){

 task_count=0;

 }

   // Method to add a task to the list

void add_task(string task){



 if (task_count < 10) {
               cout << "Enter a task: ";
                cin.ignore();
                getline(cin,task);
                tasks[task_count++] = task;



        }

         else {
            cout << "To do list is full. Cannot add more tasks." << endl;
        }

}

   // Method to display all tasks in the list

 void show_tasks(){

cout << "your tasks : "<<endl;
  for (int i = 0; i < task_count; ++i) {
           cout << i + 1 << ". " << tasks[i] <<endl;
        }

 }


   // Method to mark a task as completed

 void markTaskCompleted(int index) {
        cout << "Enter the number of the task to mark as completed: ";
        cin >> index;

    if (index >= 1 && index <= task_count) {
           cout << "Task completed: " << tasks[index - 1] <<endl;

            // Remove the completed task
            for (int i = index - 1; i < task_count - 1; ++i) {
                tasks[i] = tasks[i + 1];
            }

            --task_count;
        } else {
            cout << "Invalid task index." <<endl;
        }
    }






};




  // Main function to execute the to-do list program.
int main (){

    to_do_list todo;  // Create an instance of the to_do_list class.
    todo.label();     // Display the label for the to-do list.

    int choice;
    string task;

       // Menu-driven loop to interact with the to-do list

    while (true) {
        cout << "Menu :"<<endl;
        cout << "1. Add Task."<<endl;
        cout << "2. Display Tasks."<<endl;
        cout << "3. Mark Task as Completed."<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:

                todo.add_task(task);
                cout <<"__________________________________________"<<endl;
                break;

            case 2:
                todo.show_tasks();
                cout <<"__________________________________________"<<endl;
                break;

            case 3:
                int taskindex;
                todo.show_tasks();

                todo.markTaskCompleted(taskindex);
                cout <<"__________________________________________"<<endl;
                break;

            case 0:
               cout << "Exiting program."<<endl;
               cout <<"__________________________________________"<<endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again."<<endl;
        }





    }








}
