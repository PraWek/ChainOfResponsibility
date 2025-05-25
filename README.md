## Chain of Responsibility Pattern Example  

Пример реализации паттерна проектирования **Цепочка обязанностей (Chain of Responsibility)** на C++ с использованием CMake, GoogleTest и автоматической сборкой в CI/CD через GitHub Actions.  

### Назначение  
Позволяет передавать запросы последовательно по цепочке обработчиков. Каждый обработчик решает, может ли он обработать запрос сам и стоит ли передавать запрос дальше по цепи.  

## Структура проекта  
```
.
├── CMakeLists.txt
├── main.cc
├── include/
│   └── handlers.hpp
├── src/
│   ├── handlers.cpp
│   └── CMakeLists.txt
├── test/
│   ├── test_handlers.cpp
│   └── CMakeLists.txt
└── .github/
    └── workflows/
        └── build-deploy.yml
```  
## Требования  
- CMake 3.14 или выше  
- C++17  
- g++ / clang++  
- Google Test  
- Ruby + fpm (для создания `.deb` пакета)  

## Установка и запуск  
### Локальная сборка:  
```bash
git clone https://github.com/yourusername/chain-of-responsibility.git
cd chain-of-responsibility

mkdir build && cd build
cmake ..
make

./main
```  

## Запуск тестов  
```bash
cd build
ctest --output-on-failure
```  

## Пример вывода  
```
Client: Who wants a Nut?
  Squirrel: I'll eat the Nut.
Client: Who wants a Banana?
  Monkey: I'll eat the Banana.
Client: Who wants a Cup of coffee?
  Cup of coffee was left untouched.
```
