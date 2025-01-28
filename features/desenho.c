// vetor para criar imagem na matriz de led

// Cores bases
int azul[5][5][3] =
    {
        {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
        {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
        {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
        {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
        {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}}};

int vermelho[5][5][3] =
    {
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}},
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}},
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}},
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}},
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}}};

int verde[5][5][3] =
    {
        {{0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}},
        {{0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}},
        {{0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}},
        {{0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}},
        {{0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}, {0, 255, 0}}};
int branco[5][5][3] =
    {
        {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
        {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
        {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
        {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
        {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}};

// Desenho Kenji
int matrizKen[5][5][5][3] = {
    {{{255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {0, 255, 0}, {0, 0, 0}, {0, 255, 0}, {255, 0, 0}},
     {{255, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {255, 0, 0}},
     {{255, 0, 0}, {0, 0, 0}, {0, 255, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}}},
    {{{0, 255, 0}, {0, 255, 0}, {0, 0, 0}, {0, 255, 0}, {0, 255, 0}},
     {{0, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 0}},
     {{0, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 0}},
     {{0, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 0}},
     {{0, 255, 0}, {0, 255, 0}, {0, 0, 0}, {0, 255, 0}, {0, 255, 0}}},
    {{{255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}},
     {{255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}}},
    {{{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}},
     {{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}},
     {{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}},
     {{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}},
     {{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}}},
    {{{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}},
     {{255, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 0}},
     {{255, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 0}},
     {{255, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 0}},
     {{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}}}};
int desliga[5][5][3] =
    {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};

// Coloque aqui um código hexadecimal gerado no site: https://www.piskelapp.com/
// Desenho Leonardo
uint32_t raining[10][25] = {
    {0x00010100, 0x00010101, 0x00010000, 0x00000100, 0x00010000,
     0xffb9e5be, 0x00010100, 0xffb8e4bf, 0x00000100, 0xffb8e4be,
     0xffa1e7a8, 0x00000000, 0xff30c343, 0x00010000, 0xffa1e7a8,
     0xff31c242, 0x00000100, 0x00010001, 0x00000000, 0xff31c243,
     0x00000100, 0x00010101, 0x00010000, 0x00010101, 0xff0a971d},
    {0x00010001, 0x00000101, 0x00010001, 0x00010100, 0xff0b971c,
     0x00010100, 0x00010001, 0xff31c242, 0x00000001, 0x00000100,
     0xffb8e4be, 0x00010001, 0xff0b961d, 0x00000100, 0xffb8e4bf,
     0xffa0e6a9, 0x00010001, 0x00010000, 0x00000001, 0xffa0e7a8,
     0xff31c343, 0x00010100, 0x00010001, 0x00010000, 0xff30c342},
    {0xff31c342, 0x00000100, 0x00000100, 0x00010101, 0xff30c342,
     0x00010100, 0x00000100, 0x00000100, 0x00000100, 0xff0b961d,
     0x00010001, 0x00010001, 0xffa1e6a8, 0x00010000, 0x00000100,
     0xffb9e4bf, 0x00010101, 0xff30c243, 0x00010001, 0xffb9e5bf,
     0xffa1e6a9, 0x00010001, 0x00000100, 0x00000101, 0xffa1e7a8},
    {0xffa0e7a8, 0x00000100, 0x00000101, 0x00000000, 0xffa0e6a8,
     0xff31c242, 0x00000000, 0x00010101, 0x00000001, 0xff30c342,
     0x00010000, 0x00000001, 0xff30c243, 0x00000101, 0xff0a971c,
     0x00000000, 0x00010100, 0xff0b971c, 0x00010001, 0x00000000,
     0xffb9e4bf, 0x00010101, 0x00000001, 0x00010000, 0xffb9e5bf},
    {0xffb9e5bf, 0x00000000, 0x00010000, 0x00010101, 0xffb8e5be,
     0xffa0e6a8, 0x00000001, 0x00000001, 0x00000101, 0xffa1e6a9,
     0xff30c243, 0x00010100, 0x00010000, 0x00000101, 0xff31c342,
     0x00010001, 0x00010001, 0xffb8e4be, 0x00000100, 0xff0b971d,
     0x00000001, 0x00000100, 0xff30c343, 0x00010001, 0x00010000},
    {0x00000000, 0x00010101, 0x00000101, 0x00000100, 0x00010000,
     0xffb9e5bf, 0x00010001, 0x00010000, 0x00000001, 0xffb9e5bf,
     0xffa1e6a9, 0x00000100, 0x00000101, 0x00010100, 0xffa1e7a8,
     0xff30c342, 0x00000101, 0xff30c242, 0x00000001, 0xff30c243,
     0x00010101, 0x00010000, 0xff0a971c, 0x00000101, 0xff0b961d},
    {0x00000001, 0x00010100, 0xff31c243, 0x00000101, 0xff0b971d,
     0x00000000, 0x00000101, 0x00000001, 0x00010000, 0x00010000,
     0xffb9e4be, 0x00000000, 0x00000100, 0x00000000, 0xffb8e5bf,
     0xffa1e7a8, 0x00010101, 0x00010000, 0x00010000, 0xffa1e6a8,
     0xff30c343, 0x00000101, 0xffb8e4bf, 0x00010100, 0xff31c343},
    {0xff31c342, 0x00010101, 0xff0a961d, 0x00000000, 0xff30c343,
     0x00000101, 0x00000001, 0x00000000, 0x00010000, 0xff0a971d,
     0x00010000, 0x00010100, 0x00010001, 0x00000000, 0x00000000,
     0xffb9e4be, 0x00010100, 0x00010001, 0x00000100, 0xffb9e5be,
     0xffa0e6a9, 0x00010000, 0xff30c242, 0x00000000, 0xffa0e7a8},
    {0xffa0e7a8, 0x00000001, 0xffb8e4be, 0x00000101, 0xffa1e7a9,
     0xff30c342, 0x00000101, 0xff30c243, 0x00000000, 0xff30c342,
     0x00000000, 0x00000101, 0x00000001, 0x00000101, 0xff0b971c,
     0x00010000, 0x00010001, 0x00010001, 0x00010001, 0x00000000,
     0xffb9e5bf, 0x00010001, 0x00000100, 0x00010101, 0xffb9e5be},
    {0xffb8e5bf, 0x00010101, 0xffb9e4be, 0x00010101, 0xffb9e4be,
     0xffa1e7a9, 0x00010100, 0xff0a971c, 0x00010000, 0xffa1e6a8,
     0xff30c242, 0x00010000, 0x00010000, 0x00000000, 0xff31c242,
     0x00010000, 0x00010000, 0x00010100, 0x00000101, 0xff0a971d,
     0x00010001, 0x00000000, 0x00000101, 0x00000000, 0x00010000}};

// Desenho Arthur

int frame1[5][5][5][3] = {
    {{{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {18, 53, 205}},
     {{0, 0, 0}, {18, 53, 205}, {18, 53, 205}, {18, 53, 205}, {0, 0, 0}}},
    {{{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {18, 53, 205}},
     {{0, 0, 0}, {18, 53, 205}, {18, 53, 205}, {18, 53, 205}, {0, 0, 0}}},
    {{{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {18, 53, 205}},
     {{0, 0, 0}, {18, 53, 205}, {18, 53, 205}, {18, 53, 205}, {0, 0, 0}}},
    {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {18, 53, 205}},
     {{0, 0, 0}, {18, 53, 205}, {18, 53, 205}, {18, 53, 205}, {0, 0, 0}}},
    {{{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{18, 53, 205}, {18, 53, 205}, {0, 0, 0}, {18, 53, 205}, {18, 53, 205}},
     {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
     {{18, 53, 205}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {18, 53, 205}},
     {{0, 0, 0}, {18, 53, 205}, {18, 53, 205}, {18, 53, 205}, {0, 0, 0}}}};

void animaNome()
{
    int delay = 500;
    float intensidade = 1.0;
    int azulForte[3] = {0, 0, 255};

    int letras[11][5][5][3] = {
        // Letra E
        {
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}},
        // Letra M
        {
            {{255, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {0, 0, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 255}, {255, 255, 255}, {0, 0, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {255, 255, 255}}},
        // Letra B
        {
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}},
            {{255, 255, 255}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}}},
        // Letra A
        {
            {{0, 0, 0}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}},
            {{255, 255, 255}, {0, 0, 255}, {0, 0, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}}},
        // Letra R
        {
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}}},
        // Letra C
        {
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}}},
        // Letra A
        {
            {{0, 0, 0}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}},
            {{255, 255, 255}, {0, 0, 255}, {0, 0, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}}},
        // Letra T
        {
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
            {{0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}}},
        // Letra E
        {
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}},
            {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}},
        // Letra C
        {
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}}},
        // Letra H
        {
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}},
            {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}},
            {{0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}}}};
    int num_letras = 11;

    for (int i = (5 * num_letras + 5); i >= 0; i--)
    {
        for (int j = 0; j < num_letras; j++)
        {
            if (i + 5 > j * 5 && i < (j + 1) * 5)
            { // Se a letra tiver visível
                desenhaMatriz(letras[j], delay, intensidade);
            }
        }
    }
}

//Desenho Gustavo

int matrizNet[4][5][5][3] = {
{{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
{{255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}},        
{{0, 0, 0}, {0, 0, 255}, {255, 255, 0}, {0, 0, 255}, {0, 0, 0}},        
{{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}},
{{0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}}},
{{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
{{255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}},        
{{0, 0, 0}, {0, 0, 255}, {255, 255, 0}, {0, 0, 0}, {0, 0, 255}},        
{{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}},
{{0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}}},
{{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
{{255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}},        
{{0, 0, 255}, {0, 0, 0}, {255, 255, 0}, {0, 0, 255}, {0, 0, 0}},        
{{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}},
{{0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}}},
{{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
{{255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}},
{{0, 0, 0}, {255, 0, 0}, {255, 255, 0}, {255, 0, 0}, {0, 0, 0}},
{{255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}, {255, 255, 0}},
{{0, 0, 0}, {255, 255, 0}, {0, 0, 0}, {255, 255, 0}, {0, 0, 0}}}};

int matrizCarinha[3][5][5][3] = {
    {
        {{0, 0, 0}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {0, 0, 0}},
        {{17, 62, 158}, {232, 237, 248}, {17, 62, 158}, {232, 237, 248}, {17, 62, 158}}, 
        {{17, 62, 158}, {17, 62, 158}, {0, 0, 0}, {17, 62, 158}, {17, 62, 158}},
        {{232, 237, 248}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {232, 237, 248}}, 
        {{17, 62, 158}, {232, 237, 248}, {232, 237, 248}, {232, 237, 248}, {17, 62, 158}}
    },
    {
        {{0, 0, 0}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {0, 0, 0}},
        {{17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {232, 237, 248}, {17, 62, 158}},
        {{17, 62, 158}, {17, 62, 158}, {0, 0, 0}, {17, 62, 158}, {17, 62, 158}},
        {{232, 237, 248}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {232, 237, 248}},
        {{17, 62, 158}, {232, 237, 248}, {232, 237, 248}, {232, 237, 248}, {17, 62, 158}}
    },
    {
        {{0, 0, 0}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {0, 0, 0}},
        {{17, 62, 158}, {232, 237, 248}, {17, 62, 158}, {232, 237, 248}, {17, 62, 158}}, 
        {{17, 62, 158}, {17, 62, 158}, {0, 0, 0}, {17, 62, 158}, {17, 62, 158}},
        {{232, 237, 248}, {17, 62, 158}, {17, 62, 158}, {17, 62, 158}, {232, 237, 248}}, 
        {{17, 62, 158}, {232, 237, 248}, {232, 237, 248}, {232, 237, 248}, {17, 62, 158}}
    }
};