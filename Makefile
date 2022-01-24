# GCC-c++ compiler
CXX = g++

# Add any compiler flags
CXXFLAGS = -std=c++17

# Name of final executable
TARGET_EXEC := runningavg

SRC := main.cpp RunningAverage.cpp

all: $(TARGET_EXEC) feedback

$(TARGET_EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $@


# Clean all compiled files
clean:
	rm $(TARGET_EXEC)

.PHONY: clean feedback

