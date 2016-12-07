#ifndef SESSION_H
#define SESSION_H

#include <iostream>
#include <utility>
#include <vector>
#include <list>

class Session
{
private:
    std::string _sessionName; //eg.: Angol szódoga
    std::pair<std::string, std::string> _languages; //eg.: Hungarian - English
    std::vector<std::pair<std::string, std::string>> _words; //eg.: (Alma - Apple), (Pen - Toll)

public:
    Session();

    void addWord(std::string w1, std::string w2);

    std::vector<std::pair<std::string, std::string>> getWords();
};

#endif // SESSION_H
