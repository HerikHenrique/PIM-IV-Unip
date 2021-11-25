#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

struct paciente
{
    char nome;
    int senha;
    int telefone;
    char endereco [6];
    float dataDeNascimento;
    char email;
};

 int infectado()
    {
        // bool s = true,n = false;
        string resultado;
        printf("Seu teste de Covid-19 deu Positivo?\n");
        cout << "Digite (S) se sim" <<endl << "Digite (N) se não" << endl;
        cin >> resultado;

        char key[] = "s";
        char negative[] = "n";

        int comparator = resultado.compare(key);
        int comparatorNegative = resultado.compare(negative);


        if (comparator != 0 && comparatorNegative != 0)
        {
            cout << "Argumento Inválido\n\n\n\n\n";
            cout << "Tente Novamente\n\n";
            cout << "Digite S para teste positivo" << endl << "N para teste negativo\n\n\n";
            return infectado();
        }
        if (resultado == key)
        {
            printf("Você está infectado!");
        } else{
            printf("Parabéns! Continue com as devidas precauções");
        };





    }; 

int main()
{

    setlocale(LC_ALL, "portuguese");
    infectado();


    return 0;
}