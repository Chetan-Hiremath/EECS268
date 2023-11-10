#ifndef Executive_h
#define Executive_h
#include <string>
class Executive
{
  public:
  /**
  * Pre-Condition: None.
  * Post-Condition: It calls itself due to recursion.
  * Return Condition: None.
  **/
  Executive(std::string userPass);

  /** 
  * Pre-Condition: None.
  * Post-Condition: It defines the output by recursing the permutations.
  * Return Condition: None.
  **/
  void userOutput(int userDistance, int userPlacement, std:: string userPass, int userAvoidingLetter);
  
  private:
  std::string userWord;
};
#endif 