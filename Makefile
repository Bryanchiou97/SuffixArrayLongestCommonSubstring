all: SuffixArray

SuffixArray: main.cpp SuffixArray.cpp
	g++ -std=c++11 -g -o SuffixArray main.cpp SuffixArray.cpp

clean:
	rm -rf SuffixArray
