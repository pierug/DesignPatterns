/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   DecoratorTest.h
 * Author: adam
 *
 * Created on 2017-07-09, 16:18:19
 */

#ifndef DECORATORTEST_H
#define DECORATORTEST_H

#include <cppunit/extensions/HelperMacros.h>

class DecoratorTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(DecoratorTest);

    CPPUNIT_TEST(test_getComponentString);
    CPPUNIT_TEST(test_getDecoratorAString);
    CPPUNIT_TEST(test_getDecoratorBString);
    CPPUNIT_TEST_SUITE_END();

public:
    DecoratorTest();
    virtual ~DecoratorTest();
    void setUp();
    void tearDown();

private:
    void test_getComponentString();
    void testFailedMethod();
    void test_getDecoratorAString();
    void test_getDecoratorBString();
};

#endif /* DECORATORTEST_H */

