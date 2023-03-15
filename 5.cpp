#include <iostream>
/* 5. Faça um programa que leia um numero inteiro  ́ n e aloque
um vetor com n inteiros de forma dinamica (use o ˆ
operador new). Em seguida, o programa deve ler os
valores do vetor e calcular a m ́edia dos elementos desse
vetor. Por fim, deve desalocar (use o operador delete) a
memoria usada para armazenar os seus elementos.*/

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int *vetor;
    vetor = new int[n];
    float media, soma = 0;
    for(i = 0; i < n; i ++){
        cin >> vetor[i];
        soma  = soma + vetor[i];
    }
    delete []vetor;
    media  = soma /(float) n;
    cout << "Media: " << media << endl;
    return 0;
}
