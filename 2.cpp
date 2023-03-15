#include <iostream>
/*Implemente a funcao ̃troca que troca o conteudo de duas  ́
variaveis inteiras  ́a e b. Faça um programa que teste a
funcao implementada. Prototipo:  ́

void troca(int *a, int *b);*/
using namespace std;

void troca(int *a, int *b);

int main()
{
    int x, y;
    cout << "Digite um valor para X e um para Y : " << endl;
    cin >> x >> y;
    troca(&x,&y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    return 0;
}

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
