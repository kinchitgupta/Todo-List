#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
public:
    string description;
    bool isDone;

    Task(string desc) {
        description = desc;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display(int index) {
        cout << index + 1 << ". [" << (isDone ? "✔" : "✘") << "] " << description << endl;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(string desc) {
        tasks.push_back(Task(desc));
        cout << "Task added!" << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available." << endl;
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            tasks[i].display(i);
        }
    }

    void markTaskDone(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task number!" << endl;
            return;
        }
        tasks[index].markDone();
        cout << "Task marked as done." << endl;
    }

    void deleteTask(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task number!" << endl;
            return;
        }
        tasks.erase(tasks.begin() + index);
        cout << "Task deleted." << endl;
    }
};

int main() {
    ToDoList todo;
    int choice;
    string desc;
    int taskNumber;

    do {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Done\n4. Delete Task\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // flush newline

        switch (choice) {
        case 1:
            cout << "Enter task description: ";
            getline(cin, desc);
            todo.addTask(desc);
            break;
        case 2:
            todo.viewTasks();
            break;
        case 3:
            cout << "Enter task number to mark as done: ";
            cin >> taskNumber;
            todo.markTaskDone(taskNumber - 1);
            break;
        case 4:
            cout << "Enter task number to delete: ";
            cin >> taskNumber;
            todo.deleteTask(taskNumber - 1);
            break;
        case 5:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
