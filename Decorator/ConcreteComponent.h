/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteComponent.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 16:25
 */

#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent:public Component{
public:
    virtual string getString() override{
        return "ConcreteComponent";
    }


};

#endif /* CONCRETECOMPONENT_H */

