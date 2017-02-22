// here goes the implementation of SuffixArray.h
// ...
#include "SuffixArray.h"
bool myfunction(charSet a, charSet b);

int 
SuffixArray::doWork(string totalString, int numberOfStrings) {
	//vector<charSet> arr;
	int longestCommonPrefix = 0;
	int runningLCP = 0;
	int wordCount = 1;
	for (int i = 0; i < totalString.size(); i++) {
		if (totalString[i] == '$')
			wordCount++;
		arr.push_back(charSet{totalString.substr(i), wordCount});
	}
	sort(arr.begin(), arr.end(), myfunction);
	//lcp
	/*for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].indexWord << "     " << arr[i].substr << endl;
	}*/
	for (int i = 0; i < (arr.size() - numberOfStrings); i++) {
	//	cout << "i = : " << i << "   " << "num of strings: " << numberOfStrings << endl;		
		if (unique(numberOfStrings, i)) {
			runningLCP = lcd(i, numberOfStrings);
		}
		if(runningLCP > longestCommonPrefix)
			longestCommonPrefix = runningLCP;
	}
	return longestCommonPrefix;
}

bool 
SuffixArray::unique(int numberOfStrings, int index) {
	int mult = 1;
	int add = 0;
	for (int i = 0; i < numberOfStrings; i++) {
		add += arr[index + i].indexWord;
		mult *= arr[index + i].indexWord;
	}
	if (numberOfStrings == 2) {
		return ((mult == 2) && (add == 3));
	}
	else if (numberOfStrings == 3) {
		return ((mult == 6) && (add == 6));		
	}
	else if (numberOfStrings == 4) {
		return ((mult == 24) && (add == 10));	
	}
	else if (numberOfStrings == 5) {
		return ((mult == 120) && (add == 15));
	}
	else if (numberOfStrings == 6) {
		return ((mult == 720) && (add == 21));	
	}
	else if (numberOfStrings == 7) {
		return ((mult == 5040) && (add == 28));	
	}
	else if (numberOfStrings == 8) {
		return ((mult == 40320) && (add == 36));	
	}
	else if (numberOfStrings == 9) {
		return ((mult == 362880) && (add == 45));	
	}
	else if (numberOfStrings == 10) {
		return ((mult == 3628800) && (add == 55));	
	}
	else
		return false;
}
int 
SuffixArray::lcd(int i, int numberOfStrings) {
	if (numberOfStrings == 2) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t)) {
				break;
			}
		}
		return j;
	}
	else if (numberOfStrings == 3) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t)) {
				break;
			}
		}
		return j;

	}
	else if (numberOfStrings == 4) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t)) {
				break;
			}
		}
		return j;
	}
	else if (numberOfStrings == 5) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t)) {
				break;
			}
		}
		return j;

	}
	else if (numberOfStrings == 6) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int len6 = arr[i+5].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5) && (j < len6)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t) || (arr[i+5].substr[j] != t)) {
				break;
			}
		}
		return j;


	}
	else if (numberOfStrings == 7) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int len6 = arr[i+5].substr.size();
		int len7 = arr[i+6].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5) && (j < len6) && (j < len7)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t) || (arr[i+5].substr[j] != t) || (arr[i+6].substr[j] != t)) {
				break;
			}
		}
		return j;

	
	}
	else if (numberOfStrings == 8) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int len6 = arr[i+5].substr.size();
		int len7 = arr[i+6].substr.size();
		int len8 = arr[i+7].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5) && (j < len6) && (j < len7) && (j < len8)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t) || (arr[i+5].substr[j] != t) || (arr[i+6].substr[j] != t) || (arr[i+7].substr[j] != t)) {
				break;
			}
		}
		return j;

	}
	else if (numberOfStrings == 9) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int len6 = arr[i+5].substr.size();
		int len7 = arr[i+6].substr.size();
		int len8 = arr[i+7].substr.size();
		int len9 = arr[i+8].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5) && (j < len6) && (j < len7) && (j < len8) && (j < len9)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t) || (arr[i+5].substr[j] != t) || (arr[i+6].substr[j] != t) || (arr[i+7].substr[j] != t) || (arr[i+8].substr[j] != t)) {
				break;
			}
		}
		return j;

	}
	else if (numberOfStrings == 10) {
		int len1 = arr[i].substr.size();
		int len2 = arr[i+1].substr.size();
		int len3 = arr[i+2].substr.size();
		int len4 = arr[i+3].substr.size();
		int len5 = arr[i+4].substr.size();
		int len6 = arr[i+5].substr.size();
		int len7 = arr[i+6].substr.size();
		int len8 = arr[i+7].substr.size();
		int len9 = arr[i+8].substr.size();
		int len10 = arr[i+9].substr.size();
		int j;
		for (j = 0; ((j < len1) && (j < len2) && (j < len3) && (j<len4) && (j < len5) && (j < len6) && (j < len7) && (j < len8) && (j < len9) && (j<len10)); j++) {
			char t = arr[i].substr[j];
			if ((arr[i+1].substr[j] != t) || (arr[i+2].substr[j] != t) || (arr[i+3].substr[j] != t) || (arr[i+4].substr[j] != t) || (arr[i+5].substr[j] != t) || (arr[i+6].substr[j] != t) || (arr[i+7].substr[j] != t) || (arr[i+8].substr[j] != t) || (arr[i+9].substr[j] != t)) {
				break;
			}
		}
		return j;
	}
	else
		return 0;
}

bool myfunction (charSet a, charSet b) {
	return (a.substr < b.substr);
}
