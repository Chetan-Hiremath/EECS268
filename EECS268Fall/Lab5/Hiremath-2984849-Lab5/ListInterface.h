/* -----------------------------------------------------------------------------
 *
 * File Name: ListInterface.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the header file for List Interface. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef ListInterface_h
#define ListInterface_h

template <typename T>
class ListInterface
{
    public:
    virtual ~ListInterface() {}

    /** 
    * Pre-Condition: The index is valid.
    * Post-Condition: The entry is added to the list at the index that increases its length by 1.
    * Return Condition: It will throw std::runtime_error if the index is invalid.
    **/
    virtual void insert(int index, T entry) = 0;

    /** 
    * Pre-Condition: The index is valid.
    * Post-Condition: The entry is removed to the list at the index that decreases its length by 1.
    * Return Condition: It will throw std::runtime_error if the index is invalid.
    **/
    virtual void remove(int index) = 0;

    /** 
    * Pre-Condition: The index is valid.
    * Post-Condition: None.
    * Return Condition: It will throw std::runtime_error if the index is invalid.
    **/
    virtual T getEntry(int index) const = 0;

    /** 
    * Pre-Condition: None.
    * Post-Condition: None.
    * Return Condition: none.
    **/
    virtual int length() const = 0;

    /**
    * @pre None
    * @post List is empty
    * @throw None
    */
    /** 
    * Pre-Condition: None
    * Post-Condition: The list is empty.
    * Return Condition: None.
    **/
    virtual void clear() = 0;

    /** 
    * Pre-Condition: The index is valid.
    * Post-Condition: It overrides the entry at the given index.
    * Return Condition: It will throw the std::runtime_error if the index is invalid.
    **/
    virtual void setEntry(int index, T entry) = 0;
};
#endif