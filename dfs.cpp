// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include "dfs.h"

void DFS_inv(Grafo& grafo, vector<int> raizes, function<void (int)> foo) {

    vector<bool> checados(grafo.size(), false); 
    
    if (raizes.size() > 0)
    for (auto no: raizes)
        if (!checados[no]) DFS_aux(grafo, no, checados, foo);

    for (unsigned int i = 0; i < checados.size(); i++)
        if (!checados[i]) DFS_aux(grafo, i, checados, foo);
}

void DFS_aux(Grafo& grafo, int atual, vector<bool>& checados, function<void (int)> foo) {
    checados[atual] = true;
    for (auto no : grafo[atual])
        if (!checados[no]) {
            DFS_aux(grafo, no, checados, foo);
        }
    foo(atual);
}