// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include "ordenacao.h"
#include "dfs.h"
#include <iostream>

deque<int> ordenacaoTopologica(Grafo& grafo) {
    vector<int> raizes;
    vector<bool> vetorBooleano(grafo.size(), true);

    for (auto vert1: grafo) {
        for (auto v : vert1) {
            vetorBooleano[v] = false;
        }
    }
    
    for (unsigned int i = 0; i < vetorBooleano.size(); i++) {
        if (vetorBooleano[i]) {
            raizes.push_back(i);
        }
    }

    if (raizes.empty()) {
        cout << "Sem pré-requisitos\n";
        throw "ERRO: Sem raiz";
    }

    // agora percorremos o grafo com DFS em pos ordem, adicionando os vertices em um stack
    deque<int> ord; 
    DFS_inv(grafo, raizes, [&ord] (int x) { ord.push_front(x); });
    return ord;
}

void criaDot (Grafo& grafo, Codigos code, Nomes nome) {
    ofstream arquivo ("graphviz.dot");
    if (arquivo.is_open()) {
        arquivo << "graph G {\n";
        for (unsigned int i = 0; i < grafo.size(); i++) {
            for (auto v : grafo[i]) {
              arquivo << "       " << nome[i];
              arquivo << " -> ";
              arquivo << nome[v] << ";" << "\n";
            }
            if (grafo[i].size() == 0) {
                cout << "--";
            }
        } 

        cout << endl;
        } else cout << "ERROR: Abertura do arquivo - Graphviz";
        arquivo << "}";
        arquivo.close();
    }
