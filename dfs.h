// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include <vector>
#include <functional>
#include "construtor.h"

using namespace std;

void DFS_inv(Grafo& grafo, vector<int> raizes, function<void (int)> foo);

void DFS_aux(Grafo& grafo, int atual, vector<bool>& checado, function<void (int)> foo);