#include <iostream>
#include <string>
#include <sstream>

/*
This is a simple C++ program that performs basic encryption on input text using a Caesar cipher. 
The program takes a string input from the user and shifts each character by a specified number of positions in the alphabet. 
The user can specify the shift value (or use the default value of 3), and the program will output the encrypted text.
*/

using namespace std;

string caesarCipher(const string& text, int shift) {
    string result;

    for (char c : text) {
        if (isupper(c)) {
            result += char(((c - 'A' + shift) % 26 + 26) % 26 + 'A');
        }
        else if (islower(c)) {
            result += char(((c - 'a' + shift) % 26 + 26) % 26 + 'a');
        }
        else {
            result += c;
        }
    }

    return result;
}

int main(int argc, char* argv[]) {
    bool decrypt = false;
    int shift = 34;

    // Parse arguments
    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];

        if (arg == "--decrypt" || arg == "-d") {
            decrypt = true;
      }
      else if (arg == "--shift" || arg == "-s") {
          if (i + 1 < argc) {
         shift = stoi(argv[++i]);
          }
          else {
         cerr << "Error: --shift requires a value" << endl;
         return 1;
          }
        }
        else {
            cerr << "Unknown argument: " << arg << endl;
            return 1;
        }
    }

    if (decrypt) {
        shift = -shift;
    }

    // Read entire stdin
    string input((istreambuf_iterator<char>(cin)),
                  istreambuf_iterator<char>());

    string output = caesarCipher(input, shift);

    cout << output;

    return 0;
}