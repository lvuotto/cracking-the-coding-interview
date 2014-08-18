
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++11
BINS = 1.1.1 1.1.2 1.2 1.3 1.4 1.5 1.6 \
       # 1.7 1.8 trivial and "no programable".
BINDIR = ../bin


.PHONY: clean

%: %.cc
	$(CXX) $(CXXFLAGS) -o $@ $<
	mv $@ $(BINDIR)

all: $(BINS)

clean:
	rm -f $(BINDIR)/*
