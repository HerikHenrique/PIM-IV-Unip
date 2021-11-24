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

        int comparator = resultado.compare(key);
        if (comparator != 0)
        {
            throw invalid_argument("Digite S para sim \n\n\n Digite N para não ");
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
