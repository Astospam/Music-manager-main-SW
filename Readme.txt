IDENTIFICAÇÃO:

NOME: Yuri Filgueira Tavares de Medeiros
MATRÍCULA: 20220034872
TURMA: 02

COMPILANDO E RODANDO O PROGRAMA:

Antes de tudo, certifique-se de ter instalado o g++ e o CMake, pois serão essenciais.

Para compilar o programa, basta ir ao terminal e digitar cmake ..
Logo após, se tudo correr bem no processo anterior, digite make no terminal, e o programa estará pronto para ser rodado.

Para rodar o programa, basta ir ao terminal e digitar ./program.

GUIA:

1 - Criar uma playlist -> Cria uma playlist onde você deve fornecer o nome.
2 - Acessar uma playlist -> Vai te perguntar qual playlist você quer acessar. Você deve fornecer o nome da playlist.
Quando você acessar a playlist, as seguintes opções vão aparecer para você:

2.1 - Adicionar música -> Vai te pedir o nome de uma música e o nome de um artista/banda. E vaia adicionar a música à playlist acessada e ao sistema.
2.2 - Remover música -> Vai te pedir o nome de uma música e vai removê-la.
2.3 - Mostrar músicas da playlist -> Vai mostrar todas as músicas da playlist acessada.
2.4 - Buscar música pelo nome -> Vai te pedir nome de uma música e vai trazer informações sobre ela. Você deve fornecer apenas músicas que estão na playlist acessada. 
2.5 - Reprodutor -> Vai te dizer qual será a próxima música a ser tocada.
2.6 - Voltar a tela inicial -> Vola ao menu inicial.

3 - Adicionar música ao sistema -> Vai te pedir o nome de uma música e o nome de um artista/banda. E vai adicionar ao sistema, não a uma playlist.
4 - Mostrar todas as músicas -> Vai mostar todas as músicas do sistema, mesmo sendo de playlists diferenets.
5 - Listar playlists -> Vai listar todas as playlists do sistema.

LIMITAÇÕES:

O programa não consegue apagar uma música de todas as playlists ao mesmo tempo, ou seja, não consegue apagar uma música do sistema.
Também não consegue mover músicas entre playlists ou mover músicas dentro de uma playlist.

DIFICULDADES:

Tive um pouco de dificuldade com a manipulação de ponteiros, destrutores e a sigla "delete".