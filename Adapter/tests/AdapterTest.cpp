/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AdapterTest.cpp
 * Author: adam
 *
 * Created on 2017-07-09, 10:46:41
 */

#include "AdapterTest.h"
#include <memory>
#include "../Furnace.h"
#include "../CoalFurnace.h"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(AdapterTest);

AdapterTest::AdapterTest() {
}

AdapterTest::~AdapterTest() {
}

void AdapterTest::setUp() {
}

void AdapterTest::tearDown() {
}

void AdapterTest::testGetTemperature() {
    unique_ptr<Furnace> furnace(new CoalFurnace(true));
    CPPUNIT_ASSERT_NO_THROW(furnace->getTemperature());
    CPPUNIT_ASSERT((-10 < furnace->getTemperature()) &&(furnace->getTemperature()<700));
}

