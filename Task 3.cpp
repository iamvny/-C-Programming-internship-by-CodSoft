#include <iostream>
#include <vector>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
        std::cout << "Task added: " << task << std::endl;
    }

    void displayTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the to-do list." << std::endl;
        } else {
            std::cout << "To-Do List:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i] << std::endl;
            }
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            std::cout << "Task removed: " << tasks[index - 1] << std::endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;

    do {
        std::cout << "\nTo-Do List Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Display Tasks\n";
        std::cout << "3. Remove Task\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string task;
                std::cout << "Enter task: ";
                std::cin.ignore();  // Clear input buffer
                std::getline(std::cin, task);
                toDoList.addTask(task);
                break;
            }
            case 2:
                toDoList.displayTasks();
                break;
            case 3: {
                size_t index;
                std::cout << "Enter task index to remove: ";
                std::cin >> index;
                toDoList.removeTask(index);
                break;
            }
            case 4:
                std::cout << "Exiting program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
