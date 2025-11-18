#include "Class_Ponto.h"

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
        void setRaio(float novo_raio);

        // método para obter a área do círculo.
        float areaCirculo();
};

Circulo::Circulo(){
    raio = 0;
}

Circulo::Circulo(float novo_raio){
    raio = novo_raio;
}

float getRaio::getRaio(){
    return raio;
}
void setRaio(float raio);

// método para obter a área do círculo.
float areaCirculo();