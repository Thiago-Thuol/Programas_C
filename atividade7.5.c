/*
7.5 Crie uma struct que representa um planeta pertencente à Federação, contendo:
(a) Nome do planeta, raio (em km), massa (em kg).
(b) Número de satélites, número de habitantes.
(c) Quadrante (de 0 a 8) e setor da galáxia (de A a L).
*/

struct planeta {
    char nomes[100];
    int raio;
    int massa;
    int satelites;
    int habitantes;
    int quadrante;
    char galaxia;
};