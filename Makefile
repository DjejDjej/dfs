# Define the compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g

# Define the target executable and source file
TARGET = dfs
SOURCE = dfs.c

# Default rule to build and install the executable
all: build install

# Rule to compile the source file into an executable
build: $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

# Rule to move the executable to /bin and set permissions
install: build
	sudo mv $(TARGET) /bin/$(TARGET)
	sudo chmod 755 /bin/$(TARGET)

# Clean rule to remove the compiled executable in the local directory
clean:
	rm -f $(TARGET)

