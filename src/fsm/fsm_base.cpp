#include "include.h"
#include "fsm.h"



std::string FSM_Base::getName(){
    return this->name_;
}

double* FSM_Base::getThrusterValues(){
    return this->thruster_values;
}


