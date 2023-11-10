#include <iostream>
#include <stdexcept>

double dangerous (double num)
{
  if (num != 1000)
  {
  throw (std::runtime_error("It's an exception!"));
  } 
  else 
  {
  return (num);
  } 
}

int main()
{

int num;
bool fail = true;
double run;
 do
 {
    std:: cout << "Number: ";
    std:: cin >> num;

    try
    {
    fail = false;
    run = dangerous (num);
    std:: cout << "Function output: " << run << std:: endl;
    } 
    catch (std::runtime_error& rte)
    {
    fail = true;
    std:: cout << "Something went wrong: " << rte.what() << std:: endl;
    }
 } while (fail == true);

}