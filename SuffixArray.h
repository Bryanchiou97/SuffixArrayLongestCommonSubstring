#ifndef SUFFIX_ARRAY_H
#define SUFFIX_ARRAY_H

// Feel free to add libraries
//...
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>	
#include <iostream>
using namespace std;

struct charSet{
	string substr;
	int indexWord;
};

class SuffixArray {
public:
    // Feel free to add any methods or members that work best for your code    
	// ...
	int doWork(string totalString, int numberOfStrings);
	vector<charSet> arr;
	bool unique(int numberOfStrings, int index);
	int lcd(int index, int numberOfStrings);
};


#endif //SUFFIX_ARRAY_H
