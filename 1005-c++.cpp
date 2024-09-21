/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que 
correspondem a 2 notas de um aluno. A seguir, calcule a média do 
aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 
(A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, 
sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, 
com 5 dígitos após o ponto decimal e com um espaço em branco antes e 
depois da igualdade. Utilize variáveis de dupla precisão (double) e 
como todos os problemas, não esqueça de imprimir o fim de linha após o 
resultado, caso contrário, você receberá "Presentation Error".

*/


#include<bits/stdc++.h>//nome da biblibioteca

using namespace std;//sub area da bibliooteca

int main(){
    double A, B;
    double pesoA = 3.5, pesoB = 7.5;
    double media;

    cin >> A >> B;
    media = ((A * pesoA) + (B * pesoB)) / 11;

    cout << fixed;
    cout.precision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}