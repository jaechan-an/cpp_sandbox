CXX      := g++
CC       := gcc
CXXFLAGS := -Wall -Wextra -std=c++17
CFLAGS   := -Wall -Wextra

SRC_DIR := projects
BIN_DIR := bin

CPP_SRCS := $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/*.cc)
C_SRCS   := $(wildcard $(SRC_DIR)/*.c)

CPP_BINS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%,$(wildcard $(SRC_DIR)/*.cpp)) \
            $(patsubst $(SRC_DIR)/%.cc,$(BIN_DIR)/%,$(wildcard $(SRC_DIR)/*.cc))
C_BINS   := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(C_SRCS))

ALL_BINS := $(CPP_BINS) $(C_BINS)

.PHONY: all clean

all: $(BIN_DIR) $(ALL_BINS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/%: $(SRC_DIR)/%.cc | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/%: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)
