/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Furnace.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 11:06
 */

#ifndef FURNACE_H
#define FURNACE_H

class Furnace{
public:
    Furnace(bool conn){
        connection = conn;
    }
    ~Furnace(){}
    bool isConnected(){
        return connection;
    }
    virtual double getTemperature()=0;
private:
    bool connection;
};


#endif /* FURNACE_H */

