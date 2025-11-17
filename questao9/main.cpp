#include<stdio.h>

// Definir uma classe que represente um Ponto com os atributos das coordenadas X e Y e os 
class Ponto{
    private:
        int x;
        int y;
    public:
        // métodos construtores para instanciar um ponto, com e sem parâmetros, um método para 
        Ponto();
        Ponto(int x, int y);
        int getX();
        int setX(int x);
        int getY();
        int setY(int x);
        // alterar a posição de um ponto, um método para obter a posição de um ponto. 
        void alteraPosicao(int x, int y);
};

// Definir a classe Circulo derivada da classe Ponto com o atributo do Raio e os métodos 
class Circulo : public Ponto {
    private:
        float raio;
    public:
        // construtores para instanciar um círculo, com e sem parâmetros, um método para alterar o raio do círculo.
        Circulo();
        Circulo(float raio);

        // um método para obter o raio do círculo 
        float getRaio();
        void setRaio(float raio);

        // método para obter a área do círculo.
        float areaCirculo();

};