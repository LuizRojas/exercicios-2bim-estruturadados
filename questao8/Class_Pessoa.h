#include<stdio.h>
#include<string.h>

class Pessoa {
    private:
        char *nome;
        int idade;
        float peso;
        float altura;
    public:
        char* getNome();
        int getIdade();
        float getPeso();
        float getAltura();

        void setNome(char* novoNome);
        void setIdade(int novaIdade);
        void setPeso(float novoPeso);
        void setAltura(float novaAltura);
};

char* Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

float Pessoa::getPeso(){
    return peso;
}

float Pessoa::getAltura(){
    return altura;
}


void Pessoa::setNome(char* novoNome){
    strcpy(nome, novoNome);
}

void Pessoa::setIdade(int novaIdade){
    idade = novaIdade;
}

void Pessoa::setPeso(float novoPeso){
    peso = novoPeso;
}

void Pessoa::setAltura(float novaAltura){
    altura = novaAltura;
}
