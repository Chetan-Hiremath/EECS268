#include <iostream>
#include <stdexcept>

template <typename T>
class StackInterface 
{
    public:
    /** 
    * Pre-Condition: None.
    * Post-Condition: None.
    * Return Condition: It deallocates the object.
    **/
    virtual ~StackInterface(){};

    /** 
    * Pre-Condition: It will check whether the stack is empty or not.
    * Post-Condition: None.
    * Return Condition: It will return true if the stack is empty. If not, then it will return false.
    **/
    virtual bool isEmpty() const = 0;

    /** 
    * Pre-Condition: It will push an element into the stack.
    * Post-Condition: None.
    * Return Condition: I will throw the exception if the stack is full.
    **/
    virtual void push (const T value) = 0;

    /** 
    * Pre-Condition: It will pop the element from the stack.
    * Post-Condition: None.
    * Return Condition: It will throw an exception if the stack is full.
    **/
    virtual void pop() = 0;

    /** 
    * Pre-Condition: It will bring the element to the top of the stack.
    * Post-Condition: It will thrown an exception if the stack is empty.
    * Return Condition: It will return the element of the top of the stack.
    **/
    virtual T peek() const = 0;
};

template <typename T>
class Stack : public StackInterface<T> 
{
    private:
    T *userData;
    int userTop;
    static const int userSize = 7;

    public:
    Stack();
    bool isEmpty() const;
    void push (const T value);
    void pop();
    int count() const;
    T peek() const;
    ~Stack();
};

template <typename T>
Stack<T>::Stack() : StackInterface<T>()
{
    userData = new T[userSize];
    userTop = -1;
}

template <typename T>
bool Stack<T>:: isEmpty() const 
{
    return this-> userTop == -1;
}

template <typename T>
void Stack<T>:: push(const T value) 
{
    if (userTop + 1 < userSize)
    {
        userTop++;
        this-> userData[userTop] = value;
    } 
    else 
    {
        throw std::runtime_error("Stack is full!");
    }
}

template <typename T>
void Stack<T>:: pop() 
{
    if (!isEmpty())
    {
        userTop--;
    } 
    else 
    {
        throw std::runtime_error ("Stack is empty!");
    }
}

template <typename T>
T Stack<T>:: peek() const 
{
    if (!isEmpty())
    {
        return userData[userTop];
    } 
    else 
    {
        throw std::runtime_error ("Stack is empty!");
    }
}

template <typename T>
int Stack<T>:: count() const
{
    return (userTop + 1);
}

template <typename T>
Stack<T>:: ~Stack()
{
    delete[] userData;
}