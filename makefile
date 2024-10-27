CPPFLAGS=-std=c++2a
CFLAGS=-Wall -Wextra -Werror -Iinclude
CC=gcc
BIN=bin
LIBS=-lstdc++
OBJS=$(BIN)/proc.o


$(BIN)/%.o: %.cpp
	$(CC) -c -o $@ $<  $(CPPFLAGS) $(CFLAGS)

proc: $(OBJS)
	$(CC) -o $@ $^ $(CPPFLAGS) $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -rf $(BIN)/*
	rm -f proc
