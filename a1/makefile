# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  =-std=c++11 -g -Wall

# the build target executable:
TARGET = RestaurantG
CLASS1 = Restaurant_g
MAIN = test_RestaurantG

all: $(TARGET)

$(TARGET): $(CLASS1).o $(MAIN).o
	$(CC) $(CFLAGS) -o $(TARGET) $(CLASS1).o $(MAIN).o

$(CLASS1).o: $(CLASS1).cpp $(CLASS1).h
	$(CC) $(CFLAGS) -c $(CLASS1).cpp

$(MAIN).o: $(MAIN).cpp $(CLASS1).h
	$(CC) $(CFLAGS) -c $(MAIN).cpp

clean:
	$(RM) -f $(TARGET) $(CLASS1).o $(MAIN).o
