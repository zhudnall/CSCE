#include "../bin/std_lib_facilities_3.h"

//Seeds a base dictionary to be searched. Additional words can be added in any order
vector<string> seed {"hello", "world", "i", "a", "am", "the", "computer",
						 "is", "was", "can", "do", "computation", "fast",
						 "slow", "program", "c++", "this"};

//Starts a continuous input stream, converts the string to lowercase, and checks
//for a match in the dictionary. Will sort the dictionary and then employs a
//binary search
void check() {
	string input;
	int counter = 0;
	sort(seed.begin(), seed.end());
	cout << "Start typing: " << endl;
	while(cin >> input) {
		counter = 0;
		for (unsigned int i = 0; i < input.size(); i++) { //converts word to lowercase
			input[i] = tolower(input[i]);
		}
		for (unsigned int i = 0; i < input.size(); i++) {
			if(input == "c++") break;
			if(!(isalpha(input[i]))) {
				input = input.substr(0,i) + input.substr(i+1, input.size());
				i--;
			}
		}
		if(binary_search(seed.begin(), seed.end(), input)) { // searches database for word
			++counter;
		}
		if(counter < 1) {
			cout << "Misspelled word: " << input << endl;
		}
	}
	return;
}

int main() {
	check();
}
