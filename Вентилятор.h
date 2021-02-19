
#ifndef ВЕНТИЛЯТОР_H
#define ВЕНТИЛЯТОР_H

#include <vector>



/**
  * class Вентилятор
  * 
  */

class Вентилятор
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Вентилятор();

  /**
   * Empty Destructor
   */
  virtual ~Вентилятор();

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

  float Мощность;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Мощность
   * @param value the new value of Мощность
   */
  void setМощность(float value)
  {
    Мощность = value;
  }

  /**
   * Get the value of Мощность
   * @return the value of Мощность
   */
  float getМощность()
  {
    return Мощность;
  }

  void initAttributes();

};

#endif // ВЕНТИЛЯТОР_H
