#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>


using namespace std;

#include "estruturas.h"


int main() {
    Arvore *raiz = NULL;

    inserirDoArquivo(&raiz);
    
    cout << "Arvore com arquivo: ";
    exibir(raiz,0);
    cout << "verificando se o maior e o menor valor estao no mesmo nivel: ";
    maiorMenorMesmoNivel(raiz->valor, raiz);
    return 1;

}