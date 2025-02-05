CC = gcc
CFLAGS = -Wall -Wextra -fsanitize=address -g
SRC = server_loader.c server_selector.c main.c
TARGET = McSwitchServer.out

all: $(TARGET)

$(TARGET): $(SRC)
    $(CC) $(SRC) -o $(TARGET) $(CFLAGS)

.PHONY: all clean
