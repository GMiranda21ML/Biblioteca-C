# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Pastas
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Arquivos fonte
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Arquivos objeto gerados em build/
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Nome do executável
TARGET = $(BUILD_DIR)/programa

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)/*

run: all
	./$(TARGET)
