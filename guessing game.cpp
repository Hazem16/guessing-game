#include <ctime>
#include <iostream>

#define MAX_GUESSES 3

int main() {
  std::srand(std::time(nullptr));

  int guess{};
  int answer = std::rand() % 10;
  int guess_count{0};

  std::cout << "Choose a number between 1-10\n";
  std::cout << "You have 3 guesses.\n";

  while (guess_count < MAX_GUESSES) {
    std::cout << "Number: ";
    if (std::cin >> guess) {

      if (guess == answer) {
        std::cout << "You Won!\n";
        break;
      } else if (guess < 1 || guess > 10) {
        std::cout << "Invalid number\n";
      } else if (guess != answer) {
        std::cout << "Wrong Answer\n";
        guess_count++;
      }
    } else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Please put number noob!\n";
      continue;
    }

  } // End of loop
}
