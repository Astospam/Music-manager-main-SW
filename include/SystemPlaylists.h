#ifndef SYSTEMPLAYLIST_H
#define SYSTEMPLAYLIST_H

#include <List.h>
#include <Playlist.h>

class SystemPlaylists
{

private:
    List<Playlist *> *playlists = new List<Playlist *>;

public:
    SystemPlaylists();
    ~SystemPlaylists();
    void addPlaylistToSystem(Playlist *playlist);
    void printSystemPlaylists();
    Playlist *searchPlaylist(string name);
};

#endif