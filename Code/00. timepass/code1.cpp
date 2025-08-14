#include <iostream>
using namespace std;

char charEncrypt(char character, int key) {
    // Determine if the character is uppercase or lowercase
    char base = isupper(character) ? 'A' : 'a';

    // Apply cyclic shift
    char answer = base + (character - base + key) % 26;

    return answer;
}

int main() {
    // Input for character
    char character;
    cin >> character;

    // Input for key
    int key;
    cin >> key;

    // Output the encrypted character
    cout << charEncrypt(character, key) << endl;

    return 0;
}
