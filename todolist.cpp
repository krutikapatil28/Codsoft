#include <iostream>
using namespace std;

const int Max = 100;

class TODOlist
{
	private:
	string tasks[Max];
	int count;
	
	public:
	TODOlist() : count(0){}
	
	void add()
	{
		if(count< Max)
		{
			cout<<"Enter the task:";
			cin.ignore();
			getline(cin,tasks[count]);
			count++;
		}
		else {
            cout << "To-Do List is Full!" << endl;
        }
    }

    void del() {
        if (count == 0) {
            cout << "To-Do List is Empty!" << endl;
            return;
        }

        int taskNo;
        cout << "Enter the task number to remove: ";
        cin >> taskNo;

        if (taskNo <= 0 || taskNo > count)
        {
            cout << "Invalid task number!" << endl;
        } 
        else 
        {
            for (int i = taskNo-1 ; i < count-1; ++i)
             {
                tasks[i] = tasks[i + 1];
            }
            count--;
            cout << "Task removed successfully!" << endl;
        }
    }

    void printList() 
    {
        if (count == 0) 
        {
            cout << "To-Do List is empty!" << endl;
            return;
        }
        cout << "+--------------------------------+" << endl;
        cout << "|       Tasks in To-Do List      |" << endl;
        cout << "+--------------------------------+" << endl;
        for (int i = 0; i < count; ++i) 
        {
            cout << "| " << i + 1 << ". " << tasks[i];
            for (int j = tasks[i].length(); j < 25; ++j) 
            {
                cout << " ";
            }
            cout << "|" << endl;
        }
        cout << "+--------------------------------+" << endl;
    }
};

int main() {
    TODOlist T;
    int choice;

    do {
        cout << "\n===== To-Do List Menu =====" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. Remove a task" << endl;
        cout << "3. Print the to-do list" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                T.add();
                break;
            case 2:
                T.del();
                break;
            case 3:
                T.printList();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
	
	
	
	
	
	
