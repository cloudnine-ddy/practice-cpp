# include <iostream>
# include <string>
# include <vector>
# include <sstream>

struct task {
	std::string taskTitle;
	bool taskStatus;
};

void print_menu() {
	std::cout << std::endl;
	std::cout << "Please choose an operation :" << std::endl;
	std::cout << "1. List todos" << std::endl;
	std::cout << "2. Add todo" << std::endl;
	std::cout << "3. Mark todo as done" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cout << std::endl;
	std::cout << "Your Selection: ";
}

void add_todo(std::vector<task>& list) {

	task currentTask;
	std::string currentTaskTitle;

	std::cout << std::endl;

	std::cout << "Please enter the title of task: ";
	std::getline(std::cin, currentTaskTitle);

	currentTask.taskTitle = currentTaskTitle;
	currentTask.taskStatus = false;

	list.push_back(currentTask);
}

void list_todo(const std::vector<task>& list) {

	std::cout << std::endl;

	std::cout << "Current Tasks: " << std::endl;

	for (std::size_t i = 0; i< list.size(); i++) {

		std::string status;

		if (list[i].taskStatus == 1) {
			status = "Done";
		}
		else {
			status = "Not Done Yet";
		}

		std::cout << i+1 << ". " << list[i].taskTitle << "          " << status << std::endl;
	}
}

void mark_done(std::vector<task>& list) {

	std::cout << std::endl;

	std::cout << "-------- Tasks Pending to be Done -------- " << std::endl;

	for (std::size_t i = 0; i < list.size(); i++) {

		std::string status;

		if (list[i].taskStatus == 1) {
			continue;
		}
		else {
			std::cout << i + 1 << ". " << list[i].taskTitle << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "Which task you would like to mark as done: ";

	std::string userInput;
	int taskIndex;

	std::getline(std::cin, userInput);

	std::stringstream filteredInput(userInput);

	if (filteredInput >> taskIndex) {

		taskIndex = taskIndex - 1;

		if (taskIndex > list.size()) {
			std::cout << "No task with number " << taskIndex << " exist!" << std::endl;
			return;
		}
		if (list[taskIndex].taskStatus == 1) {
			std::cout << "This task has been done!" << std::endl;
			return;
		}

		list[taskIndex].taskStatus = 1;
		std::cout << "Task has been marked as done!" << std::endl;
	}
}

int main() {

	std::vector<task> taskList;

	while (true) {

		std::string userInput;
		int selection;

		print_menu();

		std::getline(std::cin, userInput);

		std::stringstream filteredInput(userInput);

		if (filteredInput >> selection) {
			if (selection == 1) {
				list_todo(taskList);
			}
			else if (selection == 2) {
				add_todo(taskList);
			}
			else if (selection == 0) {
				break;
			}
			else if (selection == 3) {
				mark_done(taskList);
			}
			else {
				std::cout << "Invalid input please try again!";
				std::cout << std::endl;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "Closing the app......";

	return 0;
};
