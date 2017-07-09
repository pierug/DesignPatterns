/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and opinen the template in the editor.
 */

/* 
 * File:   Component.h
 * Author: adam
 *
 * Created on 9 lipca 2017, 16:15
 */

#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
using namespace std;

class Component{
public:
    virtual ~Component(){
        
    }
    virtual string getString()=0;
};

#endif /* COMPONENT_H */

