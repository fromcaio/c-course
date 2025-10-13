// Desenvolva um TAD que representa um cubo. Inclua as funções de inicializações
// necessárias e as operações que retornem os tamanhos de cada lado, a sua área e o
// seu volume.
#ifndef CUBO_H
#define CUBO_H

typedef struct ponto {
    float x;
    float y;
    float z;
}Ponto;

typedef struct cubo {
    Ponto * pontos;
}Cubo;

// É preciso enviar um array de 8 pontos para inicializar o cubo
// O cubo sempre terá 8 pontos, e não há tratamento de erro caso o usuario
// insira um numero diferente de pontos
Cubo* inicializa_cubo(Ponto* p);
float get_lado(Cubo* c);
float area_cubo(Cubo* c);
float volume(Cubo* c);

#endif