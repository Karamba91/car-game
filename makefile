SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
LDFLAGS := -L/usr/lib -lstdc++ -lm
CPPFLAGS := -Wall -Wextra -Werror -std=gnu++11
CXXFLAGS := 

car_game: $(OBJ_FILES)
	g++ $(LDFLAGS) -o $(BIN_DIR)/$@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -r $(OBJ_DIR)/*
	@rm -r $(BIN_DIR)/*
