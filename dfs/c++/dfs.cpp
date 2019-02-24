# include <iostream>
# include <vector>

# define max 101

using namespace std;

// grafo de lista de adjacencia
vector <int> grafo[MAX];

// componente conexa
int conexa[MAX];

// para essa funcao funcionar o conexa do x passado tem que ser = -1
void dfs(int x)
{
	
	for(int i = 0; i < grafo[x].size(); i++){
		
		int v = grafo[x][i];


		if (conexa[v] != -1){

			conexa[v] = -1;
			dfs(v);
		}

	}

}

int main(){

	return 0;
}

