#ifndef COTACAO_H
#define COTACAO_H

#include <string>

struct Cotacao{
    std::string _data;
    double _valor;
    Cotacao();
    Cotacao(std::string data, double valor);
    void set_data(std::string data);
    std::string get_data();
    void set_valor(double valor);
    double get_valor();
};



#endif