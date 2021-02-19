
#ifndef ПУХ_H
#define ПУХ_H

#include <vector>



/**
  * class Пух
  * 
  */

class Пух
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Пух();

  /**
   * Empty Destructor
   */
  virtual ~Пух();

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

  float Высота_;
  float Масса;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Высота_
   * @param value the new value of Высота_
   */
  void setВысота_(float value)
  {
    Высота_ = value;
  }

  /**
   * Get the value of Высота_
   * @return the value of Высота_
   */
  float getВысота_()
  {
    return Высота_;
  }

  /**
   * Set the value of Масса
   * @param value the new value of Масса
   */
  void setМасса(float value)
  {
    Масса = value;
  }

  /**
   * Get the value of Масса
   * @return the value of Масса
   */
  float getМасса()
  {
    return Масса;
  }

  void initAttributes();

};

#endif // ПУХ_H
