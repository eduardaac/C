#include <iostream>
/*Faça um programa que realize as seguintes operacoes:  ̃
I Declare um ponteiro para inteiro pt
I Imprima o endereço de pt
I Crie uma variavel inteira x
I Leia um valor para x
I Faca com que pt aponte para x
I Imprima o conteudo da variavel pt
I Imprima o endereco de x
I Usando apenas o ponteiro pt multiplique x por 10 e altere o seu valor
I Imprima o conteudo apontado por pt
I Some 10 a variavel pt
I Imprima o seu conteudo novamente. Qual o significado desta saıda?*/

using namespace std;

int main()
{
    int *pt; // declarando poteiro pt
    cout << "Endereço de pt: " << &pt << endl;
    int x;
    cout << "Digite um valor para x: " << endl;
    cin >> x;
    pt = &x;
    cout << "Conteudo de pt: " << pt << endl;
    cout << "Endereço de x: " << &x << endl;
    *pt *=10;
    cout << "Conteudo apontado por pt: " << *pt << endl;
    pt+=10;
    cout << "Conteudo de pt: " << pt << endl;

    return 0;
}
