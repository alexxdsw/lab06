# Teste unitare
TEST_SRC = tests/board_test.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_EXEC = run_tests

GTEST_DIR = /usr/src/gtest
GTEST_FLAGS = -I$(GTEST_DIR)/include -pthread -L$(GTEST_DIR) -lgtest -lgtest_main

tests: $(STATIC_LIB) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $^ $(GTEST_FLAGS)

run_tests: tests
	./$(TEST_EXEC)
