
#ifndef FOOD_APP_H
#define FOOD_APP_H

#include <string>

/**
  * class FOOD_APP
  * 
  */

class FOOD_APP
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  FOOD_APP ();

  /**
   * Empty Destructor
   */
  virtual ~FOOD_APP ();

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
  void saving_address ()
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

  void payment_method;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_method
   * @param new_var the new value of payment_method
   */
  void setPayment_method (void new_var)   {
      payment_method = new_var;
  }

  /**
   * Get the value of payment_method
   * @return the value of payment_method
   */
  void getPayment_method ()   {
    return payment_method;
  }
private:


  void initAttributes () ;

};

#endif // FOOD_APP_H
