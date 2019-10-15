// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include <vector>
#include <deque>
#include "construtor.h"

using namespace std;

// ordenacaoTopologica: Função principal de ordenação topologica
deque<int> ordenacaoTopologica(Grafo& grafo);

// getRoots: Acha todos os vértices que são referenciados por nenhum outro vértice
vector<int> getRoots(Grafo& grafo);

void criaDot(Grafo& grafo, Codigos code, Nomes nome);