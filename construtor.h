// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019

#include <string>
#include <vector>
#include <fstream>

using namespace std;

typedef vector<vector<int> > Grafo;
typedef vector<string> Nomes;
typedef vector<int> Creditos;
typedef vector<float> Codigos;

vector<vector<int> > criarGrafo (const string& fileName);

void montaArestas (fstream& fileStream, vector<vector<int> >& grafo);

size_t tamanhoGrafo (fstream& fileStream);

vector<string> vetorizaNomes (fstream& fileStream);

vector<int> vetorizaCreditos (fstream& fileStream);

vector<float> vetorizaCodigos (fstream& fileStream);