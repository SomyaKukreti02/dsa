#include <iostream>
#include <vector>
#include <string>

// Function to generate all subsequences of a string
void generateSubsequences(std::string input, std::string output, int index, std::vector<std::string>& subsequences) {
    // Base case: If we have reached the end of the input string
    if (index == input.size()) {
        subsequences.push_back(output);  // Add the current output string to the list of subsequences
        return;
    }

    // Recursive case 1: Exclude the current character and move to the next character
    generateSubsequences(input, output, index + 1, subsequences);

    // Recursive case 2: Include the current character and move to the next character
    generateSubsequences(input, output + input[index], index + 1, subsequences);
}

int main() {
    std::string input = "abc";
    std::vector<std::string> subsequences;

    generateSubsequences(input, "", 0, subsequences);

    std::cout << "All Subsequences of the string \"" << input << "\":" << std::endl;
    for (const std::string& subsequence : subsequences) {
        std::cout << "\"" << subsequence << "\"" << std::endl;
    }

    return 0;
}
