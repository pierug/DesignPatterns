#include "FactoryTest.h"
#include <iostream>
#include <memory>
using namespace std;
CPPUNIT_TEST_SUITE_REGISTRATION(FactoryTest);

FactoryTest::FactoryTest() {
}

FactoryTest::~FactoryTest() {
}

void FactoryTest::setUp() {

}

void FactoryTest::tearDown() {
}

void FactoryTest::initConcreteCreator() {
    if (CarCreator * carCreator = new CarFactory) {
        CPPUNIT_ASSERT(true);
        delete carCreator;
    } else {
        CPPUNIT_ASSERT(false);
    }
}

void FactoryTest::createBMW() {
    CarCreator *carCreator = new CarFactory();
    unique_ptr<Car> car(new Bmw());
    CPPUNIT_ASSERT(car->getName().compare("Bmw") == 0);
    delete carCreator;
}

void FactoryTest::createAUDI() {
    CarCreator *carCreator = new CarFactory();
    unique_ptr<Car> car(new Audi());
    CPPUNIT_ASSERT(car->getName().compare("Audi") == 0);
    delete carCreator;
}

void FactoryTest::createOPEL() {
    CarCreator *carCreator = new CarFactory();
    unique_ptr<Car> car(new Opel());
    CPPUNIT_ASSERT(car->getName().compare("Opel") == 0);
    delete carCreator;
}