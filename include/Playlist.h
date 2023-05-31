#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <List.h>
#include <Music.h>

using std::ostream;

class Playlist
{

private:
    string name;
    Node<Music *> *currentNode;
    List<Music *> *musics = new List<Music *>();

public:
    Playlist();
    ~Playlist();
    Playlist(string name);
    string getName();
    void setName(string name);
    List<Music *> *getPlaylist();
    void addMusic(Music *music);
    Music *nextMusic();
    void printMusics();
    int getSize();
    void remove(Music *music);
    Music *searchByName(string name);
    friend ostream &operator<<(ostream &os, Playlist *Playlist);
};

#endif