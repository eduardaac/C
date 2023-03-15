#include <iostream>
/*Implemente uma func ̧ao que calcule o produto escalar  ̃
entre dois vetores do tipo de dados float. No programa
principal voce deve ler o tamanho ˆ n dos vetores, os quais
devem ser alocados dinamicamente usando new. Depois,
voce deve ler os dados dos vetores e chamar a func ̧ ˆ ao para  ̃
calcular o produto escalar. Por fim, use o operador
delete para desalocar toda memoria alocada de forma  ́
dinamica. Prot ˆ otipo:  ́
float prodEscalar(int n, float x[], float y[]);
Ex. O produto escalar entre x = [1, 2, 3] e y = [4, 5, 6] e dado  ́
por:

x · y = 1 × 4 + 2 × 5 + 3 × 6 = 32. */

using namespace std;

float prodEscalar(int n, float x[], float y[]);

int main()
{
    int n, i, recebe;
    cin >> n;

    float *vet1;
    vet1 = new float[n];

    float *vet2;
    vet2 = new float[n];

    cout << "Preencha o primeiro vetor" << endl;
    for(int i = 0; i < n; i++){
        cin >> vet1[i];
    }
    cout << "Preencha o segundo vetor" << endl;
    for(int i = 0; i < n; i++){
        cin >> vet2[i];
    }
    recebe  = prodEscalar(n, vet1, vet2);
    cout << "Produto Escalar: " << recebe << endl;
    delete []vet1;
    delete []vet2;

    return 0;
}
float prodEscalar(int n, float x[], float y[]){
    int i;
    float produto = 0;
    for(i = 0; i < n; i++){
        produto = produto + (x[i] * y[i]);
    }
    return produto;
}

