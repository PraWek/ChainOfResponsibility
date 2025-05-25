cmake_minimum_required(VERSION 3.14)
project(chain_of_responsibility VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем поддержку тестов
enable_testing()

# Подключаем Google Test
find_package(GTest REQUIRED)

# Добавляем нашу библиотеку
add_subdirectory(src)

# Добавляем исполняемый файл
add_executable(main main.cc)
target_link_libraries(main PRIVATE HandlersLib)

# Тесты
add_subdirectory(test)
