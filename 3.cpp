#include <iostream>
/* 3. Dados dois numeros inteiros  ́ num e div, faca uma func ̧ao ̃
para calcular e retornar o quociente e o resto da divisao ̃
inteira de num por div. Considerar o seguinte prototipo:  ́
void divisao(int num, int div, int *q, int *r);
onde:
I num e dividendo;  ́
I div e o divisor;  ́
I q e o quociente;  ́
I r e o resto.*/

using namespace std;

void divisao(int num, int div, int *q, int *r);

int main()
{
    int num, div, q = 0, r = 0;
    cin >> num;
    cout << "-" << endl;
    cin >> div;
    divisao(num, div, &q, &r);
    cout << "Quociente : " << q << endl;
    cout << "Resto : " << r << endl;

    return 0;
}

void divisao(int num, int div, int *q, int *r){
    *q = num / div;
    *r = num % div;
}
