//Faça um programa que seja capaz de registrar uma frota de 30 carros e mostrar os seguintes dados de cada um deles:
//● fabricante, modelo, placa e tipo de combustível;
//● o valor gasto em R$ de combustível para uma viagem (subrotina);
//● a autonomia do carro (a distância máxima percorrida com um tanque cheio decombustível);
//● quantos tanques são necessários para percorrer uma certa distância em km (subrotina);

#include <stdio.h>


struct carro{
    char fabricante[20];
    char modelo[30];
    char placa[9];
    char combustivel[20];
};


void 