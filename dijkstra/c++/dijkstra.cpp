# include <iostream>
# include <queue>
# include <vector>
# include <algorithm>

# define MAX 101
# define INF 999

using namespace std;

// definindo o tipo de modelo para a lista do grafo 1 - distancia 2 - ligacao
typedef <pair <int, int>> modelo;

// grafo de lista de adjacencia com arestas com peso
vector <modelo> grafo[MAX];

// componete conexa
int conexa[MAX];

// distancia do vertice inicial
int distancia[MAX];

void dijkstra(int x)
{
	// iniciando todas as distancias
	for (int i = 0; i < grafo.size(); i++){
		distancia[i] = INF;
	}

	distancia[x] = 0;

	// fila com vertices a processar
	priority_queue <modelo, vector<modelo>, greater<modelo>> fila;

	// iniciar fila
	fila.push(modelo(distancia[x], x));

	while (true){

		int davez = -1;
		
		while (!fila.empty()){

			int atual = fila.top().second;
			fila.pop();


			if (conexa[atual] == 0){
				davez = atual;
				break;
			
			}

		}

		if (davez == -1) break;

		conexa[davez] = 1;

		for (int i = 0; i < grafo[davez].size(); i++){
			
			int dist = grafo[davez][i].first;
			int atual = grago[davez][i].second;

			if (distancia[atual] > distancia[davez] + dist){
				distancia[atual] = distancia[davez] + dist;
				fila.push(modelo(distancia[atual], atual));
			
			}

		}	
	}
}

int main(){

	return 0;
}


