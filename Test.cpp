/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "Board.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("just a test") {
    Board board;
    CHECK_NOTHROW(board.post(100,200,Direction::Horizontal,"abcd"));
    /* Add more checks here */
}

/* Add more test cases here */
