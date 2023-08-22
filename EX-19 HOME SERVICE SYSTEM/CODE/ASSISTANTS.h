
#ifndef ASSISTANTS_H
#define ASSISTANTS_H

#include <string>

/**
  * class ASSISTANTS
  * 
  */

class ASSISTANTS
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ASSISTANTS ();

  /**
   * Empty Destructor
   */
  virtual ~ASSISTANTS ();

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
  void getting_money_ ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void working;
  void cleaning;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of working
   * @param new_var the new value of working
   */
  void setWorking (void new_var)   {
      working = new_var;
  }

  /**
   * Get the value of working
   * @return the value of working
   */
  void getWorking ()   {
    return working;
  }

  /**
   * Set the value of cleaning
   * @param new_var the new value of cleaning
   */
  void setCleaning (void new_var)   {
      cleaning = new_var;
  }

  /**
   * Get the value of cleaning
   * @return the value of cleaning
   */
  void getCleaning ()   {
    return cleaning;
  }
private:


  void initAttributes () ;

};

#endif // ASSISTANTS_H
