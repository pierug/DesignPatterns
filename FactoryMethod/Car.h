/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: adam
 *
 * Created on 8 lipca 2017, 11:38
 */

#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

enum CarType {
    BMW,
    AUDI,
    OPEL
};

class Car {
public:
    virtual ~Car();
    virtual string getName() = 0;
};

class Audi : public Car {
public:

    Audi() {
        name = "Audi";
    }

    string getName() override {
        return name;
    }
private:
    string name;
};

class Opel : public Car {
public:

    Opel() {
        name = "Opel";
    }

    string getName() override {
        return name;
    }
private:
    string name;
};

class Bmw : public Car {
public:

    Bmw() {
        name = "Bmw";
    }

    string getName() override {
        return name;
    }
private:
    string name;
};
#endif /* CAR_H */

