// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include <vector>
#include <deque>
#include <queue>
#include <functional>
#include "construtor.h"

using namespace std;

typedef pair<int, vector<int> > Caminho;

deque<int> caminhoCritico(Grafo g, Creditos c, int src);