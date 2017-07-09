/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CoalFurnace.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 11:12
 */

#ifndef COALFURNACE_H
#define COALFURNACE_H
#include "Furnace.h"
#include "Termometer.h"
#include "TemperatureException.h"
#include <memory>

class CoalFurnace: public Furnace{
public:
    CoalFurnace(bool conn):Furnace(conn),termometer(new Termometer()){
        
    }
    
    virtual ~CoalFurnace(){}
    virtual double getTemperature() override{
        if(isConnected()){
            return termometer->makeMeasure();
        }
        throw temperatureException;
        return 0;
    }

private:
    std::unique_ptr<Termometer> termometer;
    TemperatureException temperatureException;
};

#endif /* COALFURNACE_H */

