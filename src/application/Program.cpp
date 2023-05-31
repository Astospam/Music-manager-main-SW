#include <iostream>
#include <limits>
#include <ios>
#include <List.h>
#include <Music.h>
#include <Playlist.h>
#include <SystemMusics.h>
#include <SystemPlaylists.h>

using std::cin;
using std::string;

void flush()
{
    int ch;
    while ((ch = fgetc(stdin)) != EOF && ch != '\n')
    {
    }
}

int main()
{

    SystemPlaylists *sp = new SystemPlaylists();
    SystemMusics *sm = new SystemMusics();
    Playlist *p = new Playlist();
    string name;
    string nameArtist;

    int choice = 0;

    while (choice != 6)
    {
        system("clear");
        cout << "1 - Criar uma playlist" << endl;
        cout << "2 - Acessar uma playlist" << endl;
        cout << "3 - Adicionar música ao sistema" << endl;
        cout << "4 - Mostrar todas as músicas" << endl;
        cout << "5 - Listar playlists" << endl;

        cout << "Escolha uma opção: ";
        cin >> choice;
        flush();

        switch (choice)
        {
        case 1:
        {
            system("clear");
            cout << "Defina o nome da playlist: ";
            getline(cin, name);
            sp->addPlaylistToSystem(new Playlist(name));

            cout << "Playlist criada com sucesso" << endl;

            cout << "Pressione '0' para voltar a tela inicial: ";
            int x;
            cin >> x;

            if (x == 0)
                break;
        }
        break;
        case 2:
        {
            system("clear");
            int choice2 = 0;
            cout << "Digite a playlist que será acessada: ";
            getline(cin, name);
            if (sp->searchPlaylist(name) != nullptr)
            {
                p = sp->searchPlaylist(name);
            }
            else
            {
                cout << "Playlist não encontrada ou vazia." << endl;
                cout << "Pressione 0 para voltar a tela inicial." << endl;
                cin >> choice;
                break;
            }
            while (choice2 != 6)
            {

                system("clear");

                cout << "1 - Adicionar música" << endl;
                cout << "2 - Remover música" << endl;
                cout << "3 - Mostrar músicas da playlist" << endl;
                cout << "4 - Buscar música pelo nome" << endl;
                cout << "5 - Reprodutor" << endl;
                cout << "6 - Voltar a tela inicial" << endl;

                cout << "Escolha uma opção: ";

                cin >> choice2;
                flush();

                switch (choice2)
                {
                case 1:
                {
                    system("clear");

                    cout << "Digite o nome da música: ";
                    getline(cin, name);

                    cout << "\nDigite o nome do artista/banda: ";
                    getline(cin, nameArtist);

                    Music *m = new Music(nameArtist, name);

                    sm->addMusicToSystem(m);
                    p->addMusic(m);

                    cout << "Música adicionada com sucesso" << endl;
                    cout << "Pressione '0' para voltar ao menu da playlist: ";
                    int x;
                    cin >> x;
                }
                break;

                case 2:
                {
                    system("clear");
                    cout << "Qual música você deseja remover: ";
                    getline(cin, name);

                    p->remove(p->searchByName(name));

                    int x;
                    cout << "Música removida com sucesso" << endl;
                    cout << "Pressione '0' para voltar ao menu da playlist: ";
                    cin >> x;
                }
                break;

                case 3:
                {
                    system("clear");
                    p->printMusics();

                    int x;
                    cout << "Pressione '0' para voltar ao menu da playlist: ";
                    cin >> x;
                }
                break;

                case 4:
                {
                    system("clear");

                    cout << "Digite o nome da música que será buscada: ";
                    getline(cin, name);

                    if (p->searchByName(name) != nullptr)
                    {
                        cout << "Música encontrada" << endl;
                        cout << p->searchByName(name);
                    }
                    else
                    {
                        system("clear");
                        cout << "Música não encontrada." << endl;
                    }

                    int x;
                    cout << "Pressione '0' para voltar ao menu da playlist: ";
                    cin >> x;
                }
                break;

                case 5:
                {
                    system("clear");
                    int x;
                    Music *m = p->nextMusic();
                    while (m != nullptr)
                    {
                        system("clear");
                        cout << "Reproduzindo: " << m->getName() << endl;

                        cout << "1 - Próxima" << endl;
                        cout << "0 - Voltar para o menu da playlist" << endl;
                        cout << "Escolha uma opção: ";
                        cin >> x;

                        if (x == 1)
                        {
                            m = p->nextMusic();
                            if (m == nullptr)
                            {
                                system("clear");
                                cout << "As músicas da playlist acabaram" << endl;
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }

                    cout << "Pressione '0' para voltar ao menu da playlist: ";
                    cin >> x;
                }
                break;
                case 6:
                    break;
                }
            }
        }
        break;
        case 3:
        {
            system("clear");

            cout << "Digite o nome da música: ";
            getline(cin, name);

            cout << "\nDigite o nome do artista/banda: ";
            getline(cin, nameArtist);

            Music *m = new Music(nameArtist, name);

            sm->addMusicToSystem(m);
            int x;
            cout << "Música adicionada com sucesso" << endl;
            cout << "Pressione '0' para voltar ao menu: ";
            cin >> x;
        }
        break;

        case 4:
        {

            system("clear");
            sm->printSystemMusics();

            int x;
            cout << "Pressione '0' para voltar ao menu: ";
            cin >> x;
        }
        break;
        case 5:
        {
            system("clear");

            sp->printSystemPlaylists();

            int x;
            cout << "Pressione '0' para voltar ao menu: ";
            cin >> x;
        }
        break;
        }
    }

    delete p;
    delete sm;
    delete sp;

    return 0;
}