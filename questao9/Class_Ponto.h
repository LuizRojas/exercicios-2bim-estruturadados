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
        int setX(int cx);
        int setY(int cy);
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

int getX::getX(){
    return x;
}

int getY::getY(){
    return y;
}

void setX::setX(int cx){
    x = cx;
}

int setY::setY(int cx){
    x = cx;
}

void alteraPosicao::alteraPosicao(int cx, int cy){
    setX(cx);
    setY(cy);
}