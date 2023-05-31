#include <iostream>
#include <limits>
#include <ios>
#include <List.h>
#include <Music.h>
#include <Playlist.h>
#include <SystemMusics.h>
#include <SystemPlaylists.h>

int main(){


    Playlist *p = new Playlist("Ronaldo Musics");
    Music *m = new Music("Ronaldo", "Florentina");
    p->addMusic(m);

    cout << m;
    cout << p;

    delete m;
    delete p;

    return 0;
}