#The compiler: gcc for C programs, g++ for C++
CC=gcc

#Compiler flags:
#	-g: Adds debugging information to exectuable file
#	-Wall: Turns on most, but not all, compiler warnings  
CFLAGS= -g -Wall

#The build target executable
TARGET = helloWorld

#Define the source files
SOURCES =  $(wildcard *.c)

#Define the header files
HEADERS = $(wildcard *.h)

#Define the object files
OBJECTS = $(SOURCES:.c=.o)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm -f *.o
	rm -f $(TARGET)
	
