/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre 
a diferença do produto de A e B pelo produto de C e D segundo a 
fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme 
exemplo abaixo, com um espaço em branco antes e depois da igualdade.

*/


#include<bits/stdc++.h>//nome da biblibioteca

using namespace std;//sub area da bibliooteca

int main(){
    int A, B, C, D, DIFERENCA;

    cin >> A >> B >> C >> D;

    DIFERENCA = (A * B - C * D);
    
    cout << "DIFERENCA = " << DIFERENCA << endl;

    return 0;
}