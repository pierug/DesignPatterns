/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TemperatureException.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 11:24
 */

#ifndef TEMPERATUREEXCEPTION_H
#define TEMPERATUREEXCEPTION_H

#include <exception>

class TemperatureException:public std::exception{
public:        
    const char* what() const noexcept override{
        return "Not Connected";
    }
    virtual ~TemperatureException() throw() {
        
    }

};

#endif /* TEMPERATUREEXCEPTION_H */

