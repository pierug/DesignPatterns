/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Decorator.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 16:32
 */

#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"
#include <memory>

class Decorator : public Component {
public:

    Decorator(Component *c) : component(c) {

    }

    virtual ~Decorator() {
        //delete component;
    }

    virtual string getString() override {
        return component->getString();
    }


    std::unique_ptr<Component> component;
};

class DecoratorA : public Decorator {
public:

    DecoratorA(Component *c) : Decorator(c) {

    }

    virtual ~DecoratorA() {
    }

    virtual string getString() override {
        return component->getString()+myNameIs();
    }
    private:
    string myNameIs(){
        return " DecoratorA";
    }
};


class DecoratorB : public Decorator {
public:

    DecoratorB(Component *c) : Decorator(c) {

    }

    virtual ~DecoratorB() {
    }

    virtual string getString() override {
        return component->getString()+myNameIs()+" Dupa";
    }
    
private:
    string myNameIs(){
        return " DecoratorB";
    }
};

#endif /* DECORATOR_H */

