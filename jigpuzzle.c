#include <stdint.h>
#include <stdio.h>



// j
uint8_t j00[8] = {
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b11000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j01[8] = {
    0b10000000,
    0b11111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j02[8] = {
    0b11000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j03[8] = {
    0b11111000,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j10[8] = {
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b11000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j11[8] = {
    0b11111000,
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j12[8] = {
    0b11000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t j13[8] = {
    0b00001000,
    0b11111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

// i
uint8_t i00[8] = {
    0b10000000,
    0b10000000,
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t i01[8] = {
    0b11100000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

// g
uint8_t g00[8] = {
    0b11110000,
    0b10100000,
    0b11100000,
    0b00100000,
    0b11100000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g01[8] = {
    0b10111000,
    0b10101000,
    0b11111000,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g02[8] = {
    0b01110000,
    0b01000000,
    0b01110000,
    0b01010000,
    0b11110000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g03[8] = {
    0b10000000,
    0b11111000,
    0b10101000,
    0b11101000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g10[8] = {
    0b11110000,
    0b01010000,
    0b01110000,
    0b01000000,
    0b01110000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g11[8] = {
    0b00001000,
    0b11111000,
    0b10101000,
    0b10111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g12[8] = {
    0b11100000,
    0b00100000,
    0b11100000,
    0b10100000,
    0b11110000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t g13[8] = {
    0b11101000,
    0b10101000,
    0b11111000,
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

// p
uint8_t p00[8] = {
    0b11100000,
    0b10100000,
    0b11100000,
    0b10000000,
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t p01[8] = {
    0b11111000,
    0b00101000,
    0b00111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};
uint8_t p02[8] = {
    0b00100000,
    0b00100000,
    0b11100000,
    0b10100000,
    0b11100000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t p03[8] = {
    0b11100000,
    0b10100000,
    0b11111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t p10[8] = {
    0b11100000,
    0b10100000,
    0b11100000,
    0b00100000,
    0b00100000,
    0b00000000,
    0b00000000,
    0b00000000,
};

uint8_t p11[8] = {
    0b00111000,
    0b00101000,
    0b11111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};
uint8_t p12[8] = {
    0b10000000,
    0b10000000,
    0b11100000,
    0b10100000,
    0b11100000,
    0b00000000,
    0b00000000,
    0b00000000,
};
uint8_t p13[8] = {
    0b11111000,
    0b10100000,
    0b11100000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};

// .
uint8_t d00[8] = {
    0b10000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};



struct part{
    char     c;
    uint8_t* p[8+1];
};

struct part pj1 = {
    'j',
    { j00, j01, j02, j03, j10, j11, j12, j13, NULL }
};

struct part pi = {
    'i',
    { i00, i01, NULL, NULL, NULL, NULL, NULL, NULL, NULL }
};

struct part pg = {
    'g',
    { g00, g01, g02, g03, g10, g11, g12, g13, NULL }
};

struct part pj2 = {
    'j',
    { j00, j01, j02, j03, j10, j11, j12, j13, NULL }
};

struct part pp = {
    'p',
    { p00, p01, p02, p03, p10, p11, p12, p13, NULL }
};

struct part pd1 = {
    '.',
    { d00, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }
};

struct part pd2 = {
    '.',
    { d00, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }
};

struct part pd3 = {
    '.',
    { d00, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }
};

struct part pd4 = {
    '.',
    { d00, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }
};

struct part* parts[9+1] = { &pj1, &pi, &pg, &pj2, &pp, &pd1, &pd2, &pd3, &pd4, NULL };



struct log{
    char     c;
    uint8_t  i;
    uint8_t  x;
    uint8_t  y;
};

struct answer{
    struct log l[9];
};

int include(struct answer* a, struct log* l){
    int i = 0;
    while(i < 9){
        if(
            (a->l[i].c == l->c) &&
            (a->l[i].i == l->i) &&
            (a->l[i].x == l->x) &&
            (a->l[i].y == l->y) &&
            1
        ) return 1;
        ++i;
    }
    
    return 0;
}

int same(struct answer* a, struct log l[]){
    return 
        include(a, &l[0]) &&
        include(a, &l[1]) &&
        include(a, &l[2]) &&
        include(a, &l[3]) &&
        include(a, &l[4]) &&
        include(a, &l[5]) &&
        include(a, &l[6]) &&
        include(a, &l[7]) &&
        include(a, &l[8]) &&
        1;
}

void push(struct answer answers[], struct log logs[]){
    int i = 0;
    while(answers[i].l[0].c){
        if(same(&answers[i], logs)) return;
        ++i;
    }

    answers[i].l[0] = logs[0];
    answers[i].l[1] = logs[1];
    answers[i].l[2] = logs[2];
    answers[i].l[3] = logs[3];
    answers[i].l[4] = logs[4];
    answers[i].l[5] = logs[5];
    answers[i].l[6] = logs[6];
    answers[i].l[7] = logs[7];
    answers[i].l[8] = logs[8];
}

void show(struct log logs[]){
    int i = 0;
    while(i < 9){
        printf("%c[%d] %d,%d\n", logs[i].c, logs[i].i, logs[i].x, logs[i].y);
        ++i;
    }
}

void showPuzzle(struct log logs[]){
    int i = 0;
    char field[10][10];
    int n = 10;
    for (int j = 0; j < n; j++){
        for (int k = 0; k < n; k++){
            field[j][k] = '\0';
        }
    }
    while(i < 9){
        struct log l = logs[i];
        uint8_t* p = parts[i]->p[l.i];
        for (int j = 0; j < 8; j++){
            for (int k = 0; k < 8; k++){
                if (p[k] & (0x80 >> j)){
                    //field[l.y + k][l.x + j] = '0' + i;
                    field[l.y + k][l.x + j] = l.c;
                }
            }
        }
        ++i;
    }
    for (int j = 0; j < n; j++){
        printf("%s\n", field[j]);
    }
}

void debug(uint8_t board[]){
    int i = 0;
    while(i < 8){
        uint8_t b = board[i];
        char bin[8+1];{
            bin[7] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[6] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[5] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[4] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[3] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[2] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[1] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[0] = (b & 1) ? '1' : '0';   b >>= 1;
            bin[8] = '\0';
        }

        printf("%s\n", bin);

        ++i;
    }
}

int right(uint8_t p[]){
    if( (p[0] & 3) || (p[1] & 3) || (p[2] & 3) || (p[3] & 3) || (p[4] & 3) || (p[5] & 3) || (p[6] & 3) || (p[7] & 3) ) return 0;

    p[0] >>= 1;
    p[1] >>= 1;
    p[2] >>= 1;
    p[3] >>= 1;
    p[4] >>= 1;
    p[5] >>= 1;
    p[6] >>= 1;
    p[7] >>= 1;

    return 1;
}

int down(uint8_t p[]){
    if(p[5]) return 0;

    p[5] = p[4];
    p[4] = p[3];
    p[3] = p[2];
    p[2] = p[1];
    p[1] = p[0];
    p[0] = 0;

    return 1;
}

int put(uint64_t b, int pi, struct log logs[], struct answer answers[]){
    int r = 0;

    if(parts[pi]){
        logs[pi].c = parts[pi]->c;

        int i = 0;
        while( parts[pi]->p[i] ){
            logs[pi].i = i;

            uint64_t p = *(uint64_t*)parts[pi]->p[i];
            logs[pi].y = 0;
            do{
                uint64_t p2 = p;
                logs[pi].x = 0;
                do{
                    if( (~b | p2) == ~b ){
                        if( put(b|p2, pi+1, logs, answers) ){
                        }
                    }else{
                        // none
                    }
                    ++logs[pi].x;
                }while( right((uint8_t*)&p2) );
                ++logs[pi].y;
            }while( down((uint8_t*)&p) );
            ++i;
        }
    }else{
        push(answers, logs);
        r = 1;
    }

    return r;
}



int main(){
    uint8_t board[8];
    *(uint64_t*)board = 0;

    struct log logs[9];
    struct answer answers[100] = {};

    put(*(uint64_t*)board, 0, logs, answers);

    int i = 0;
    while(answers[i].l[0].c){
        printf("ans: %d\n", i);
        show(answers[i].l);
        printf("\n");
        showPuzzle(answers[i].l);
        ++i;
    }

    return 0;
}


