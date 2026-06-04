# include <iostream>
# include <string>



void print_menu() {
	std::cout << std::endl;
	std::cout << "Please choose an operation :" << std::endl;
	std::cout << "1. List todos" << std::endl;
	std::cout << "2. Add todo" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << std::endl;
	std::cout << "Your Selection: ";
}

void add_todo() {
	std::cout << std::endl;
	std::cout << "adding todo" << std::endl;
}

void list_todo() {
	std::cout << std::endl;
	std::cout << "listing todo" << std::endl;
}

int main() {
	while (true) {

		int selection;

		print_menu();

		std::cin >> selection;

		if (selection == 1) {
			list_todo();
		}
		else if (selection == 2) {
			add_todo();
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
