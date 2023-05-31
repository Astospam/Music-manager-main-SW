#include <Music.h>
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

Music::Music()
{
    this->nameArtist = string();
}

Music::~Music()
{
}

Music::Music(string nameArtist, string name)
{
    this->nameArtist = string(nameArtist);
    this->name = name;
}

string Music::getName()
{
    return this->name;
}

void Music::setName(string name)
{
    this->name = name;
}

string Music::getNameArtist()
{
    return this->nameArtist;
}

void Music::setNameArtist(string nameArtist)
{
    this->nameArtist = nameArtist;
}

ostream &operator<<(ostream &os, Music *music)
{
    os << "Music: " << music->getName() << endl;
    os << "Artist/Band: " << music->getNameArtist() << endl;

    return os;
}