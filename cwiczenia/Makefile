CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGETS = cw1_pid cw2_fork
all: $(TARGETS)

cw1_pid: cw1_pid.cpp
	$(CXX) $(CXXFLAGS) -o cw1_pid cw1_pid.cpp

cw2_fork: cw2_fork.cpp
	$(CXX) $(CXXFLAGS) -o cw2_fork cw2_fork.cpp


clean:
	rm -f $(TARGETS) *.o

