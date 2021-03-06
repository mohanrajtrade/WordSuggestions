//
// Created by Amit Shekhar on 19/05/16.
//

#ifndef WORDSUGGESTIONS_UTILS_H
#define WORDSUGGESTIONS_UTILS_H


#include "ds/Trie.h"

class Utils {
public:
    static bool loadDictionary(Trie* trie,string path);
    static string boolToString(bool b);
};

#endif //WORDSUGGESTIONS_UTILS_H
