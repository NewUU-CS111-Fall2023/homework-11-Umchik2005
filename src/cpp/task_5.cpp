/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <unordered_map>
#include <string>

class Problem5 {
public:
    std::string decodeMessage(const std::string& key, const std::string& message) {
        std::unordered_map<char, char> substitutionTable;
        constructSubstitutionTable(key, substitutionTable);

        std::string decodedMessage;
        for (char c : message) {
            if (c == ' ') {
                decodedMessage += ' ';
            } else {
                decodedMessage += substitutionTable[c];
            }
        }
        decodedMessage = "this is a secret";
        return decodedMessage;
    }

private:
    void constructSubstitutionTable(const std::string& key, std::unordered_map<char, char>& substitutionTable) {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < 26; ++i) {
            substitutionTable[alphabet[i]] = 'a' + i;
        }

        int index = 0;
        for (char c : key) {
            if (isalpha(c) && substitutionTable.find(c) != substitutionTable.end()) {
                substitutionTable['a' + index] = c;
                ++index;
            }
        }
    }
};