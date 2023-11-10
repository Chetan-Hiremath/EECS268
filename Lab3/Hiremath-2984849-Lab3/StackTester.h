/* -----------------------------------------------------------------------------
 *
 * File Name: StackTester.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 3
 * Description: This program will define the variables and the functions for the Test Mode. 
 * Date: September 16, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef StackTester_h
#define StackTester_h

class StackTester
{   
    public: 
    StackTester();
    void runTests(); 
    private:
     /** 
      * Pre-Condition: None.
      * Post-Condition: It creates an empty stack and verifies that isEmpty() returns true. 
      * Return Condition: None.
     **/
      void test01();
 
     /** 
      * Pre-Condition: None.
      * Post-Condition: It creates an empty stack and pushes 1 value, and it verifies that isEmpty() returns false.
      * Return Condition: None.
     **/
      void test02();

      /** 
       * Pre-Condition: None.
       * Post-Condition: It creates an empty stack, pushes once, pops once, and verifies that isEmpty() returns true.
       * Return Condition: None.
      **/
       void test03();

      /** 
       * Pre-Condition: None.
       * Post-Condition: It creates an empty stack, pushes some elements, calls copy constructor to copy the stack and verifies if copy is successful by comparing the stacks.
       * Return Condition: None.
      **/
       void test04();
};
#endif