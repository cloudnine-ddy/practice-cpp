# include <iostream>
# include <string>
# include <vector>
# include <sstream>
# include <fstream>

struct task {
	std::string taskTitle;
	bool taskStatus;
};

std::ostream& operator<<(std::ostream& os, const task& t) {
	os << t.taskTitle << "," << t.taskStatus;
	return os;
}

void save (const std::vector<task>& list, const std::string& filename) {

	std::ofstream outputFile(filename);

	if (!outputFile) {
		std::cout << "Fail to load file for writing" << std::endl;
		return;
	}

	for (const task& task : list)
	{
		outputFile << task << '\n';
	}

}

std::vector<task> load(std::string filename) {

	std::vector<task> list;

	std::ifstream inputFile(filename);

	if (!inputFile) {
		std::cout << "Failed to open file for reading" << std::endl;
		return list;
	}

	std::string line;

	while (std::getline(inputFile, line)) {
		if (!line.empty()) {

			task currentTask;

			std::stringstream ss(line);
			std::string status;

			std::getline(ss, currentTask.taskTitle, ',');
			std::getline(ss, status);

			currentTask.taskStatus = (status == "1");

			list.push_back(currentTask);
		}
	}

	return list;
}

void print_menu() {
	std::cout << std::endl;
	std::cout << "Please choose an operation :" << std::endl;
	std::cout << "1. List todos" << std::endl;
	std::cout << "2. Add todo" << std::endl;
	std::cout << "3. Mark todo as done" << std::endl;
	std::cout << "4. Remove todo" << std::endl;
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

		if (taskIndex < 1 || taskIndex > static_cast<int>(list.size())) {

			std::cout << std::endl;
			std::cout << "No task with number " << taskIndex << " exist!" << std::endl;
			return;
		}

		taskIndex = taskIndex - 1;

		if (list[taskIndex].taskStatus == 1) {
			std::cout << "This task has been done!" << std::endl;
			return;
		}

		list[taskIndex].taskStatus = 1;
		std::cout << "Task has been marked as done!" << std::endl;
	}
}

void remove_todo(std::vector<task>& list) {

	std::cout << std::endl;

	list_todo(list);

	std::cout << std::endl;
	std::cout << "Which task you would like to remove: ";

	std::string userInput;
	int taskIndex;

	std::getline(std::cin, userInput);

	std::stringstream filteredInput(userInput);

	if (filteredInput >> taskIndex) {

		if (taskIndex < 1 || taskIndex > static_cast<int>(list.size())) {

			std::cout << std::endl;
			std::cout << "No task with number " << taskIndex << " exist!" << std::endl;
			return;
		}

		taskIndex = taskIndex - 1;

		list.erase(list.begin() + taskIndex);

		std::cout << std::endl;

		std::cout << "Task has been removed!" << std::endl;
	}
}
int main() {

	const std::string filename = "project01_console_todo_app.txt";
	std::vector<task> taskList;

	taskList = load(filename);

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
				save(taskList, filename);
				break;
			}
			else if (selection == 3) {
				mark_done(taskList);
			}
			else if (selection == 4) {
				remove_todo(taskList);
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
