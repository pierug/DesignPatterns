/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AdapterTest.h
 * Author: adam
 *
 * Created on 2017-07-09, 10:46:41
 */

#ifndef ADAPTERTEST_H
#define ADAPTERTEST_H

#include <cppunit/extensions/HelperMacros.h>


class AdapterTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(AdapterTest);

    CPPUNIT_TEST(testGetTemperature);
    CPPUNIT_TEST_SUITE_END();

public:
    AdapterTest();
    virtual ~AdapterTest();
    void setUp();
    void tearDown();

private:
    void testGetTemperature();
};

#endif /* ADAPTERTEST_H */

