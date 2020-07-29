#include <cmath>
#include "Calculator.h"
Calculator::Calculator(float initial_K, float initial_Ra, float initial_Rb) {
    setStart(initial_K, initial_Ra, initial_Rb);
}
void Calculator::setStart(float data_K, float data_Ra, float data_Rb) {
    K = data_K;
    Ra = data_Ra;
    Rb = data_Rb;
}
float Calculator::get_new_Ra(float Sa){
    float Ea;
    Ea = 1/(1+pow(10, (Rb-Ra)/400));
    new_Ra = Ra+K*(Sa-Ea);
    return round(new_Ra);
}
float Calculator::get_new_Rb(float Sa){
    float Eb;
    Eb = 1/(1+pow(10, (Ra-Rb)/400));
    new_Rb = Rb+K*((1-Sa)-Eb);
    return round(new_Rb);
}
void Calculator::setAgain(){
    Ra = round(new_Ra);
    Rb = round(new_Rb);
}
