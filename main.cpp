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

string infectado(string resultado1)
    {
        std::string resultado;
        printf("Seu teste de Covid-19 deu Positivo?\n");
        cout << "Digite (S) se sim" <<endl << "Digite (N) se não" << endl;
        // scanf("%s", &resultado);
        cin >> resultado;

        std::string key = "s";
        std::string negative = "n";

        int comparator = resultado.compare(key);
        int comparatorNegative = resultado.compare(negative);


        if (resultado.compare(key) && resultado.compare(negative))
        {
            cout << "Argumento Inválido\n\n\n\n\n";
            return infectado(resultado);
        } else if (resultado.compare(key)){

            printf("Parabéns! Continue com as devidas precauções");
        }else{
            cout << "Você está infectado!";
        }
            return resultado;


    };


int main()
{
    string resultado1;
    string positivo = "s";
    setlocale(LC_ALL, "portuguese");

    string resultadoTeste = infectado(resultado1);
    // int checkarResultado = strcmp(positivo, resultadoTeste);
    if (positivo == resultadoTeste)
    {
        cout << "Positivo porra!";
    };
    
    cout << resultadoTeste;

    
    







    return 0;
}
