#ifndef SYSTEMMUSICS_H
#define SYSTEMMUSICS_H

#include <List.h>
#include <SystemPlaylists.h>
#include <Music.h>

class SystemMusics
{

private:
    List<Music *> *musics = new List<Music *>;

public:
    SystemMusics();
    ~SystemMusics();
    void addMusicToSystem(Music *music);
    void printSystemMusics();
};

#endif