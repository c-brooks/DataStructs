//
//  test.cpp
//  DataStructs
//
//  Created by Corey on 16 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//


// Tests for LinkedList:
// Creation
// Insertion
// Deletion








#define BOOST_TEST_MODULE LinkedListTest

#include <boost/test/included/unit_test.hpp>

/**************** Linked Lists ****************/
#include "linkedList.hpp"


BOOST_AUTO_TEST_SUITE(LinkedLists)


BOOST_AUTO_TEST_CASE(listCreation) {
    List testList;
    BOOST_CHECK(&testList);
}


BOOST_AUTO_TEST_CASE(nodeInsertion) {
//    List testList;
//    testList.insertOne(1);
//    BOOST_CHECK(testList.getLength() == 2);
}


BOOST_AUTO_TEST_CASE(nodeDeletion) {
//    List testList;
//    testList.insertOne(1);
//    testList.insertOne(2);
//    testList.insertOne(3);
//    BOOST_CHECK(testList.getLength() == 3);
//    testList.removeOne(3);
//    BOOST_CHECK(testList.getLength() == 2);
}



BOOST_AUTO_TEST_SUITE_END()

/**********************************************/
