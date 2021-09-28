//Task: with objects, print out the numbers 1 to 100
//If a number is divisible by 3 then your program should print ‘Fizz’. If a number is divisible by 5 then your program should print ‘Buzz’. 
//If a number is divisible by both 5 and 3 (e.g., 15) then your program should print ‘FizzBuzz’
#include <iostream>
using namespace std;

class Parameter
{
  private:
    int num;
    string word;
  public:
    Parameter(int reqNum, string reqString)
    {
      num = reqNum;
      word = reqString;
    }
    bool activated(int i)
    {
      return i % num == 0;
    }
    string getWord()
    {
      return word;
    }
};

class FizzBuzz
{
  private:
    Parameter * param3;
    Parameter * param5;
    Parameter * param15;
  public:
    FizzBuzz()
    {
      param3 = new Parameter(3,"Fizz");
      param5 = new Parameter(5,"Buzz");
      param15 = new Parameter(15,"FizzBuzz");
    }
    string getWord(int i)
    {
      if(param15->activated(i))
      {
        return param15->getWord();
      }
      else if(param5->activated(i))
      {
        return param5->getWord();
      }
      else if(param3->activated(i))
      {
        return param3->getWord();
      }
      else
      {
        return to_string(i);
      }
    }
};

int main()
{
  FizzBuzz * fizzbuzz = new FizzBuzz();
  for(int i = 1; i <= 100; i++)
  {
    cout << fizzbuzz->getWord(i) << endl;
  }
}