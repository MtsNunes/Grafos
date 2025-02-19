#include <iostream>
#include <list>

using namespace std;

class elementoGrafo {
    public : char elemento;
    public : list<char> arestas;
};

int main() {
    elementoGrafo g;
    g.elemento = 'a';
    g.arestas.push_back('b');
    g.arestas.push_back('c');

    cout << "O vertice " << g.elemento << " esta conectado nas arestas: ";
    for(char i : g.arestas) {
        cout << i << " ";
    } 
    cout << endl;
}