/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarCreator.h
 * Author: adam
 *
 * Created on 8 lipca 2017, 11:11
 */

#ifndef CARCREATOR_H
#define CARCREATOR_H
#include "Car.h"
class CarCreator {
public:
    virtual ~CarCreator(){}
    virtual Car* makeCar(CarType carType)=0;
private:

};

#endif /* CARCREATOR_H */

