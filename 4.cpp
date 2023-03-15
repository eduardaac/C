#include <iostream>
/* Implemente uma unica funcao que receba um vetor de  ̃
numeros inteiros (  ́ vet) e o seu tamanho (tam) e:
I conte o total de elementos pares;
I conte o total de elementos  ́ımpares;
I conte o total de elementos negativos;
I retorne verdadeiro se existirem numeros negativos no  ́
vetor, ou retorne falso, caso contrario.  ́
Considere o seguinte prototipo:  ́
bool func(int tam, int vet[], int *par,
int *impar, int *negativos);*/

using namespace std;
void implementando_vet(int tam, int vet[]);
bool func(int tam, int vet[], int *par, int *impar, int *negativos);
int main()
{
    int tam;
    cout << "Digite o tamanho de seu vetor : " << endl;
    cin >> tam;
    int vet[tam];
    int par = 0;
    int impar = 0;
    int negativos;
    implementando_vet(tam, vet);
    bool recebe = func(tam, vet, &par, &impar, &negativos);
    cout << "Pares: " << par << endl;
    cout << "Impar: " << impar << endl;
    cout << "True or false?: " << recebe << endl;
    return 0;
}
void implementando_vet(int tam, int vet[]){
    int i;
    for(int i = 0; i<tam; i++){
        cin >> vet[i];
    }
}

bool func(int tam, int vet[], int *par,int *impar, int *negativos){
    int i ;
    for(int i = 0; i < tam; i++){
        if(vet[i]%2 == 0){
            *par = *par +1;
        }
        else{
            *impar = *impar+1;
        }
        if(vet[i]<0){
            *negativos = *negativos +1;
        }
    }
    if(*negativos!=0){
        return true;
    }
    else{
        return false;
    }
}
