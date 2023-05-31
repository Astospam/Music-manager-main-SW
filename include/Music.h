#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <ostream>

using std::ostream;
using std::string;

class Music
{

private:
    string nameArtist;
    string name;

public:
    Music();
    ~Music();
    Music(string nameArtist, string name);
    string getName();
    void setName(string name);
    string getNameArtist();
    void setNameArtist(string nameArtist);
    friend ostream &operator<<(ostream &os, Music *music);
};

#endif