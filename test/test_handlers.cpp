#include <gtest/gtest.h>
#include "handlers.hpp"

TEST(MonkeyHandlerTest, HandlesBanana) {
  MonkeyHandler monkey;
  EXPECT_EQ(monkey.Handle("Banana"), "Monkey: I'll eat the Banana.\n");
}

TEST(MonkeyHandlerTest, PassesOther) {
  MonkeyHandler monkey;
  EXPECT_EQ(monkey.Handle("Nut"), "");
}

TEST(SquirrelHandlerTest, HandlesNut) {
  SquirrelHandler squirrel;
  EXPECT_EQ(squirrel.Handle("Nut"), "Squirrel: I'll eat the Nut.\n");
}

TEST(SquirrelHandlerTest, PassesOther) {
  SquirrelHandler squirrel;
  EXPECT_EQ(squirrel.Handle("Banana"), "");
}

TEST(DogHandlerTest, HandlesMeatBall) {
  DogHandler dog;
  EXPECT_EQ(dog.Handle("MeatBall"), "Dog: I'll eat the MeatBall.\n");
}

TEST(DogHandlerTest, PassesOther) {
  DogHandler dog;
  EXPECT_EQ(dog.Handle("Coffee"), "");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
