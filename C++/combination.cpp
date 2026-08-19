#include <iostream>
#include <string>
using namespace std;

void combinations(string input, string output, int index) {
    // Base case: if we've considered all characters
    if (index == input.size()) {
        cout << output << endl; // print current combination
        return;
    }

    // Case 1: include current character
    combinations(input, output + input[index], index + 1);

    // Case 2: exclude current character
    combinations(input, output, index + 1);
}

int main() {
    string input = "abc";
    cout << "All combinations of " << input << ":\n";
    combinations(input, "", 0);
    return 0;
}
