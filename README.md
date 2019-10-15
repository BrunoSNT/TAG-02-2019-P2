## Projeto 2 de Teoria e Aplicação de Grafos, Turma A
## Professor: 
### Díbio
## Autores: 
### Bruno Sanguinetti Regadas de Barros (18/0046063)
### Nayara Silva Nayara Rossi Brito da Silva ()

## Compilação
### Makefile
#### No diretório do programa:
```
	$ make
```
## Execução
#### No diretório do programa:
```
	$ ./main
```

## Imagem 
### Graphviz
Gerada ao executar o código pela função criaDot(). [ordenacao.cpp / ordenacao.h]
preenche o arquivo graphviz.dot com o grafo seguindo as diretrizes para a geração da imagem pelo graphviz
```
	$ dot -Tpng graphviz.dot -o imagem.png	
```
diretório/arquivo saída
```
	../TAG-PROJ2-02-2019/imagem.png
```

## Funcionamento Geral

O programa ao ser executado abre e começa a leitura do arquivo em 
que o grafo é descrito, chamando funções de vetorização que irão armazenar
os nomes, código e crédito das matérias. 3 vetores corelacionados pela ordem.
   
Em sequida a criação do grafo em sí pela função criaGrafo() que chama as funções auxiliares 
tamanhoGrafo() e criaArestas, para que utilizando o tamanho e as adjacencias possam montar o grafo.

Em sequidas são criado os vetores do algoritmo topologico e o caminho crítico pelas suas 
respectivas funções


