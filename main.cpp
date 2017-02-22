#include <iostream>
#include <fstream>

#include "SuffixArray.h"

using namespace std;

void task(ifstream &reader, ofstream &writer){
    // Start coding here
    // remember that for each case you need to start by reading the number of strings
    // see the webpage for further reference on the input format
    // ...
    	string str;
	reader >> str;
	//cout << str << " str length: " << str.size() <<  endl;
	int numberOfStrings = stoi(str, nullptr, 10);
	string totalString;
	for (int i = 0; i < numberOfStrings; i++) {
		//cout << "i: " << i << "  numberofstr:  " << numberOfStrings << endl;
		reader >> str;
		totalString += str;
		if (i != (numberOfStrings - 1))
			totalString += '$';
//		cout << totalString << endl;
	}
	SuffixArray sa;
	int LCP = sa.doWork(totalString, numberOfStrings);
	//write the lcp into output.txt
	writer << LCP << '\n';

}

int main(int argc, char* argv[]){
    
    ifstream infile;
    ofstream outfile;

    infile.open("input.txt");
    outfile.open("output.txt");

    int nTestCases;

    infile >> nTestCases;
    int ncase = 0;
 
    while ( nTestCases-- ){
        cout << "Running test case #: " << ++ncase << endl;
        task(infile, outfile);
        cout << "Finished Case" << endl;
    }

    infile.close();
    outfile.close();
    cout << "End of Program" << endl;
    
    return 0;
}
