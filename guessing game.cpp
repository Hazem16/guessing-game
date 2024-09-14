#include <iostream>
#include <ctime>


int main()
{
	std::srand(std::time(nullptr));

	int guess{};
	int answer = std::rand() % 10;
	int guess_count{0};
	int max_guess_count{ 3 };

	std::cout << "Choose a number between 1-10" << '\n';
	std::cout << "You have 3 guesses." << '\n';
	
	while (guess_count < max_guess_count) {
		std::cout << "Number: ";
		std::cin >> guess;

		if (guess == answer) {
			std::cout << "You Won!" << '\n';
			break;
		} 
		else if (guess < 1 || guess > 10) {
			std::cout << "Invalid number" << '\n';
		}
		else if (guess != answer) {
			std::cout << "Wrong Answer" << '\n';
			guess_count++;
		}
	}//End of loop
}

