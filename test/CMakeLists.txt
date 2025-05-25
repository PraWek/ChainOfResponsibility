add_executable(test_handlers test_handlers.cpp)
target_link_libraries(test_handlers PRIVATE GTest::GTest GTest::Main HandlersLib)
