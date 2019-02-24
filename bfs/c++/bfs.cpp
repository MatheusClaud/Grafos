# include <iostream>
# include <vector>
# include <queue>

# define mac 999

using namespace std;

// grafo de lista de adjacencia
vector <int> grafo[MAX];

// componente conexa
int conexa[MAX];

// fila de processamento
queue <int> fila;


// para esta funcao funcionar e necessario que o conexa[x] seja -1
// -1 significa que o vertice i faz parte do componente conexa de x

void bfs(int x)
{
	fila.push(x);

	while (!fila.empty()){
		
		int atual = fila.front();
		fila.pop();

		for (int i = 0; i < grafo[atual].size(); i++){
			
			if (conexa[grafo[atual][i]] == 0){
				
				conexa[atual][i] = -1;
				fila.push(grafo[atual][i]);
			}	
		}
	
	}

}


int main(){
	
	return 0;
}
