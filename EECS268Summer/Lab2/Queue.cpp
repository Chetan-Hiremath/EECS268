#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class QueueInterface
{
    public:
    /** 
    * Pre-Condition: None.
    * Post-Condition: None.
    * Return Condition: It deallocates the object.
    **/
    virtual ~QueueInterface(){};

    /** 
    * Pre-Condition: It will check whether the stack is empty or not.
    * Post-Condition: None.
    * Return Condition: It will return true if the stack is empty. If not, then it will return false.
    **/
    virtual bool isEmpty() const = 0;

    /** 
    * Pre-Condition: It will enque an element into the queue.
    * Post-Condition: None.
    * Return Condition: None.
    **/
    virtual void enqueue(const T value) = 0;

    /** 
    * Pre-Condition: It will dequeue an element from the queue.
    * Post-Condition: None.
    * Return Condition: It will throw the exception if the queue is empty.
    **/
    virtual void dequeue() = 0;

    /** 
    * Pre-Condition: It will fetch the element from the queue.
    * Post-Condition: It will throw the exception if the queue is empty.
    * Return Condition: It will return the front element.
    **/
    virtual T peekFront() const = 0;
};

template <typename T>
class Queue : public QueueInterface<T>
{
    private:
    static const int userCurrentCapacity = 10;
    int userCapacity;
    int userSize;
    T *userData;

    public:
    Queue();
    bool isEmpty() const;
    void enqueue(const T value);
    void dequeue();
    T peekFront() const;
    ~Queue();
};

template <typename T>
Queue<T>:: Queue() 
{
    userCapacity = userCurrentCapacity;
    userData = new T[userCapacity];
    userSize = 0;
}

template <typename T>
bool Queue<T>:: isEmpty() const
{
    return userSize == 0;
}

template <typename T>
void Queue<T>:: enqueue(const T value) 
{
    if (userSize == userCapacity)
    {
        T *userTemp = new T[userCapacity *2];
        userCapacity = userCapacity * 2;
        for (int i = 0; i < userSize; i++)
        {
            userTemp[i] = userData[i];
        }
        userData = userTemp;
    }
    userData[userSize] = value;
    userSize++;
}

template <typename T>
void Queue<T>:: dequeue()
{
    if (isEmpty())
    {
        throw std::runtime_error("Queue is empty!");
    }
    for (int i = 0; i < userSize-1; i++)
    {
        userData[i] = userData[i+1];
    }
    userSize--;
}

template <typename T>
T Queue<T>:: peekFront() const
{
    if (isEmpty())
    {
        throw std::runtime_error("Queue is empty!");
    }
    return userData[0];
}

template <typename T>
Queue<T>:: ~Queue()
{
  delete[] userData;
}