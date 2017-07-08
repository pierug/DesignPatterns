/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarFactory.h
 * Author: adam
 *
 * Created on 8 lipca 2017, 16:21
 */

#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "Car.h"
#include "CarCreator.h"

class CarFactory:public CarCreator{
public:
    Car* makeCar(CarType carType) override{
        if(carType==CarType::AUDI){
            return new Audi();
        }else if(carType==CarType::BMW){
            return new Bmw();
        }else if(carType==CarType::OPEL){
            return new Opel();
        }
        return 0;
    }

};

#endif /* CARFACTORY_H */

