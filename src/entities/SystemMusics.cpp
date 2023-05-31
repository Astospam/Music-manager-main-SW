#include <SystemMusics.h>
#include <Playlist.h>
#include <SystemPlaylists.h>

SystemMusics::SystemMusics()
{
}

SystemMusics::~SystemMusics()
{
}

void SystemMusics::addMusicToSystem(Music *music)
{
    musics->add(music);
}

void SystemMusics::printSystemMusics()
{
    cout << musics->getHead();
}