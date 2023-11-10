#ifndef StackOfChars_h
#define StackOfChars_h
#include "Node.h"

class StackOfChars
{
	private:
	Node* m_top;
	public:    
        /** 
       * Pre-Condition: None.
       * Post-Condition: None.
       * Return Condition: None.
       **/
	StackOfChars();

        /** 
       * Pre-Condition: None.
       * Post-Condition: None.
       * Return Condition: None.
       **/
      	StackOfChars(const StackOfChars& orig);

        /** 
       * Pre-Condition: None
       * Post-Condition: None.
       * Return Condition: None. 
       **/
        ~StackOfChars();

        /** 
       * Pre-Condition: None.
       * Post-Condition: This method contains the same elements as the original stack.
       * Return Condition: The stack of chars is copied in this method. 
       **/
       	void operator=(const StackOfChars& rhs);

       /** 
       * Pre-Condition: None.
       * Post-Condition: The entry is added to top of the stack.
       * Return Condition: The element is added to the stack. 
       **/
	void push(char entry);

       /** 
       * Pre-Condition: The stack is not empty. 
       * Post-Condition: The top element is removed from the stack.
       * Return Condition: None.
       **/
	void pop();

        /** 
       * Pre-Condition: The stack is not empty. 
       * Post-Condition: The top element is returned from the stack.
       * Return Condition: None.
       **/
	char peek() const; 

        /** 
       * Pre-Condition: None.
       * Post-Condition: It returns true if the stack is empty. If not, it will return false. 
       * Return Condition: None.
       **/
	bool isEmpty() const;
};
#endif
