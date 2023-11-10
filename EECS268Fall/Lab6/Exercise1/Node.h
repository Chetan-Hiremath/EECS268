#ifndef Node_h
#define Node_h

class Node
{
	private:
	char m_entry;
	Node* m_next;
	public:
         /** 
       * Pre-Condition: None.
       * Post-Condition: None.
       * Return Condition: None.
       **/
	Node(char entry);

         /** 
       * Pre-Condition: None.
       * Post-Condition: This method returns the character at m_entry;
       * Return Condition: None.
       **/
	char getEntry() const;
        
         /** 
       * Pre-Condition: None.
       * Post-Condition: The variable m_entry contains the same character as entry.
       * Return Condition: The char entry is assigned for the Node.
       **/
	void setEntry(char entry);

         /** 
       * Pre-Condition: None.
       * Post-Condition: The pointer to the next node is returned.
       * Return Condition: None.
       **/
	Node* getNext() const;
 
         /** 
       * Pre-Condition: None.
       * Post-Condition: The next node is assigned.
       * Return Condition: The node pointer is assigned to the next node.
       **/
	void setNext(Node* next);

};
#endif