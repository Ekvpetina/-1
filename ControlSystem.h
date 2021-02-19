
#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H


/**
  * class ControlSystem
  * 
  */

class ControlSystem
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ControlSystem();

  /**
   * Empty Destructor
   */
  virtual ~ControlSystem();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void startFlyCommand()
  {
  }


  /**
   */
  void setHeight()
  {
  }


  /**
   */
  void landingCommand()
  {
  }

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

  PidAlgorithm new_attribute;
  Engine new_attribute_1;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of new_attribute
   * @param value the new value of new_attribute
   */
  void setNew_attribute(PidAlgorithm value)
  {
    new_attribute = value;
  }

  /**
   * Get the value of new_attribute
   * @return the value of new_attribute
   */
  PidAlgorithm getNew_attribute()
  {
    return new_attribute;
  }

  /**
   * Set the value of new_attribute_1
   * @param value the new value of new_attribute_1
   */
  void setNew_attribute_1(Engine value)
  {
    new_attribute_1 = value;
  }

  /**
   * Get the value of new_attribute_1
   * @return the value of new_attribute_1
   */
  Engine getNew_attribute_1()
  {
    return new_attribute_1;
  }

  void initAttributes();

};

#endif // CONTROLSYSTEM_H
