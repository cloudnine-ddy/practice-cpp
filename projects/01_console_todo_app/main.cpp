# include <iostream>
# include <string>
# include <vector>

struct task {
	std::string taskTitle;
	bool taskStatus;
};

void print_menu() {
	std::cout << std::endl;
	std::cout << "Please choose an operation :" << std::endl;
	std::cout << "1. List todos" << std::endl;
	std::cout << "2. Add todo" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << std::endl;
	std::cout << "Your Selection: ";
}

void add_todo(std::vector<task> list) {

	task currentTask;
	std::string currentTaskTitle;
	bool currentTaskStatus;

	std::cout << std::endl;

	std::cout << "Please enter the title of task: ";
	std::getline(std::cin, currentTaskTitle);

	currentTask.taskTitle = currentTaskTitle;
	currentTask.taskStatus = false;

	list.push_back(currentTask);
}

void list_todo(std::vector<task> list) {
	std::cout << std::endl;

	std::cout << "Current Tasks: " << std::endl;

	for (task eachTask : list) {
		std::cout << eachTask.taskTitle << std::endl;
	}
}

int main() {

	std::vector<task> taskList;

	while (true) {

		int selection;

		print_menu();

		std::cin >> selection;

		if (selection == 1) {
			list_todo(taskList);
		}
		else if (selection == 2) {
			add_todo(taskList);
		}
		else if (selection == 3) {
			break;
		}
		else {
			std::cout << "Invalid input please try again!";
			std::cout << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "Closing the app......";

	return 0;
};
