/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   DecoratorTest.cpp
 * Author: adam
 *
 * Created on 2017-07-09, 16:18:19
 */

#include "DecoratorTest.h"
#include "../Component.h"
#include "../ConcreteComponent.h"
#include "../Decorator.h"
#include <memory>

CPPUNIT_TEST_SUITE_REGISTRATION(DecoratorTest);

DecoratorTest::DecoratorTest() {
}

DecoratorTest::~DecoratorTest() {
}

void DecoratorTest::setUp() {
}

void DecoratorTest::tearDown() {
}

void DecoratorTest::test_getComponentString() {
    std::unique_ptr<Component> component(new ConcreteComponent());
    CPPUNIT_ASSERT(component->getString().compare("ConcreteComponent")==0);
}

void DecoratorTest::test_getDecoratorAString() {
    std::unique_ptr<Component> component(new DecoratorA(new ConcreteComponent));
    CPPUNIT_ASSERT(component->getString().compare("ConcreteComponent DecoratorA")==0);
}

void DecoratorTest::test_getDecoratorBString() {
    std::unique_ptr<Component> component(new DecoratorB(new ConcreteComponent));
    CPPUNIT_ASSERT(component->getString().compare("ConcreteComponent DecoratorB Dupa")==0);
}