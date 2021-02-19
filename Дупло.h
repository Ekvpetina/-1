
#ifndef ДУПЛО_H
#define ДУПЛО_H

#include <vector>



/**
  * class Дупло
  * 
  */

class Дупло
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Дупло();

  /**
   * Empty Destructor
   */
  virtual ~Дупло();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  float Высота;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Высота
   * @param value the new value of Высота
   */
  void setВысота(float value)
  {
    Высота = value;
  }

  /**
   * Get the value of Высота
   * @return the value of Высота
   */
  float getВысота()
  {
    return Высота;
  }

  void initAttributes();

};

#endif // ДУПЛО_H
