CXX = g++
CXXFLAGS = -std=c++2a -Wall -Wextra -O2 -flto -pedantic-errors -fsanitize=address -fsanitize=undefined
LDFLAGS = -O1 -fsanitize=address -fsanitize=undefined

PREFIX ?= /usr/local
BINDIR ?= $(PREFIX)/bin

OBJS = main.o

all: ccipher

ccipher: $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: ccipher
	@echo "-- Example of encryption:"
	echo "Hello World" | ./ccipher --shift 3
	@echo "-- Example of decryption:"
	echo "Khoor Zruog" | ./ccipher --decrypt --shift 3

clean:
	rm -f $(OBJS) ccipher

install: ccipher
	install -m 755 ccipher $(BINDIR)/

uninstall:
	rm -f $(BINDIR)/ccipher