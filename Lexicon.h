/**
* Defines Lexicon class
*
* @author      Craig Panek
* Created:     May 22, 2014
* Source File: Lexicon.h
*/

//#include <vector>
#include "myTrie.h"
#include <string>
using namespace std;

#ifndef LEXICON_H_
#define LEXICON_H_

/**
 * A class that represents a list of words and that can be interrogated to
 * determine whether or not word exists in the list. The file that contains
 * the list of words is sent to the constructor.
 */

class Lexicon {
public:
    /**
     * Initializes the lexicon, given the file name that contains the list
     * of words.
     * @param lexiconFileName the file name that contains the list of words.
     */
    Lexicon(string lexiconFileName);

    /**
     * Returns true if word exists in lexicon
     * @param word the word for which to search
     * @return true if word exists in lexicon, and false otherwise
     */
    bool isWord(string word);

private:
    //vector<string> lexicon;
    Trie trie;

    /**
     * Loads lexicon from lexiconFileName, exiting with an error message on
     * stderr if lexiconFileName cannot be opened.
     * @param lexiconFileName the file name that contains the list of words.
     */
    void loadLexicon(string lexiconFileName);
};

#endif /* LEXICON_H_ */

