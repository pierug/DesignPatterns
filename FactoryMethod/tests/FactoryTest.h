/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FactoryTest.h
 * Author: adam
 *
 * Created on 2017-07-08, 11:16:33
 */

#ifndef FACTORYTEST_H
#define FACTORYTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../CarCreator.h"
#include "../CarFactory.h"
#include "../Car.h"

class FactoryTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(FactoryTest);
    CPPUNIT_TEST(initConcreteCreator);
    CPPUNIT_TEST(createBMW);
    CPPUNIT_TEST(createAUDI);
    CPPUNIT_TEST(createOPEL);
    CPPUNIT_TEST_SUITE_END();

public:
    FactoryTest();
    virtual ~FactoryTest();
    void setUp();
    void tearDown();

private:
    void initConcreteCreator();
    void createBMW();
    void createAUDI();
    void createOPEL();
};

#endif /* FACTORYTEST_H */

