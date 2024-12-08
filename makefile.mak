# Directoare
INCLUDE_DIR = include
SRC_DIR = src
APP_DIR = app
TESTS_DIR = tests

# Fișiere sursă și obiecte
BOARD_SRC = $(SRC_DIR)/board.cpp
GAME_SRC = $(SRC_DIR)/game.cpp
MAIN_SRC = $(APP_DIR)/main.cpp
TEST_SRC = $(TESTS_DIR)/test_board.cpp

BOARD_OBJ = $(BOARD_SRC:.cpp=.o)
GAME_OBJ = $(GAME_SRC:.cpp=.o)
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)
TEST_OBJ = $(TEST_SRC:.cpp=.o)

STATIC_LIB = lib/libboard.a

# Executabil final
EXEC = TicTacToe
TEST_EXEC = test_board

# Reguli de construire
all: $(STATIC_LIB) $(EXEC)

$(STATIC_LIB): $(BOARD_OBJ)
	mkdir -p lib
	ar rcs $@ $^

$(EXEC): $(GAME_OBJ) $(MAIN_OBJ) $(STATIC_LIB)
	$(CXX) $(CXXFLAGS) -o $@ $^ -I$(INCLUDE_DIR)

$(TEST_EXEC): $(TEST_OBJ) $(STATIC_LIB)
	$(CXX) $(CXXFLAGS) -o $@ $^ -I$(INCLUDE_DIR)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INCLUDE_DIR)

clean:
	rm -f $(SRC_DIR)/*.o $(APP_DIR)/*.o $(TESTS_DIR)/*.o $(EXEC) $(TEST_EXEC) $(STATIC_LIB)

# Rulare teste
test: $(TEST_EXEC)
	./$(TEST_EXEC)
