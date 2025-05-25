#include "handlers.hpp"

AbstractHandler::AbstractHandler() : next_handler_(nullptr) {}

Handler* AbstractHandler::SetNext(Handler* handler) {
  this->next_handler_ = handler;
  return handler;
}

std::string AbstractHandler::Handle(const std::string& request) {
  if (this->next_handler_) {
    return this->next_handler_->Handle(request);
  }
  return {};
}

std::string MonkeyHandler::Handle(const std::string& request) {
  if (request == "Banana") {
    return "Monkey: I'll eat the " + request + ".\n";
  } else {
    return AbstractHandler::Handle(request);
  }
}

std::string SquirrelHandler::Handle(const std::string& request) {
  if (request == "Nut") {
    return "Squirrel: I'll eat the " + request + ".\n";
  } else {
    return AbstractHandler::Handle(request);
  }
}

std::string DogHandler::Handle(const std::string& request) {
  if (request == "MeatBall") {
    return "Dog: I'll eat the " + request + ".\n";
  } else {
    return AbstractHandler::Handle(request);
  }
}
