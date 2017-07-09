/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Termometer.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 11:16
 */

#ifndef TERMOMETER_H
#define TERMOMETER_H

class Termometer {
public:
    Termometer();
    Termometer(const Termometer& orig);
    virtual ~Termometer();
    double makeMeasure();
private:

};

#endif /* TERMOMETER_H */

