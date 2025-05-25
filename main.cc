#include <iostream>
#include <string>
#include <vector>
#include "handlers.hpp"

void ClientCode(Handler& handler) {
  std::vector<std::string> food = {"Nut", "Banana", "Cup of coffee"};
  for (const std::string& f : food) {
    std::cout << "Client: Who wants a " << f << "?\n";
    const std::string result = handler.Handle(f);
    if (!result.empty()) {
      std::cout << "  " << result;
    } else {
      std::cout << "  " << f << " was left untouched.\n";
    }
  }
}

int main() {
  MonkeyHandler monkey;
  SquirrelHandler squirrel;
  DogHandler dog;

  monkey.SetNext(&squirrel)->SetNext(&dog);

  std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
  ClientCode(monkey);
  std::cout << "\n";

  std::cout << "Subchain: Squirrel > Dog\n\n";
  ClientCode(squirrel);

  return 0;
}
