#include<stdio.h>
#include<stdlib.h>

// Definir uma classe que represente um Ponto com os atributos das coordenadas X e Y e os 
class Ponto{
    private:
        int x;
        int y;
    public:
        // métodos construtores para instanciar um ponto, com e sem parâmetros, um método para 
        Ponto();
        Ponto(int cx, int cy);
        int getX();
        int getY();
        void setX(int cx);
        void setY(int cy);
        // alterar a posição de um ponto, um método para obter a posição de um ponto. 
        void alteraPosicao(int cx, int cy);
};

Ponto::Ponto(){
    x = 0;
    y = 0;
}

Ponto::Ponto(int cx, int cy){
    x = cx;
    y = cy;
}

int Ponto::getX(){
    return x;
}

int Ponto::getY(){
    return y;
}

void Ponto::setX(int cx){
    x = cx;
}

void Ponto::setY(int cy){
    y = cy;
}

void Ponto::alteraPosicao(int cx, int cy){
    setX(cx);
    setY(cy);
}