#ifndef HANDLERS_HPP
#define HANDLERS_HPP

#include <string>

class Handler {
 public:
  virtual Handler* SetNext(Handler* handler) = 0;
  virtual std::string Handle(const std::string& request) = 0;
  virtual ~Handler() = default;
};

class AbstractHandler : public Handler {
 protected:
  Handler* next_handler_;

 public:
  AbstractHandler();
  Handler* SetNext(Handler* handler) override;
  std::string Handle(const std::string& request) override;
};

class MonkeyHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string& request) override;
};

class SquirrelHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string& request) override;
};

class DogHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string& request) override;
};

#endif // HANDLERS_HPP
