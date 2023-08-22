
#ifndef DELIVERY_PERSON_H
#define DELIVERY_PERSON_H

#include <string>

/**
  * class DELIVERY_PERSON
  * 
  */

class DELIVERY_PERSON
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DELIVERY_PERSON ();

  /**
   * Empty Destructor
   */
  virtual ~DELIVERY_PERSON ();

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
  void collecting_tip ()
  {
  }


  /**
   */
  void getting_the_rattings ()
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

  void pickup_the_order;
  void deliver_the_order;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of pickup_the_order
   * @param new_var the new value of pickup_the_order
   */
  void setPickup_the_order (void new_var)   {
      pickup_the_order = new_var;
  }

  /**
   * Get the value of pickup_the_order
   * @return the value of pickup_the_order
   */
  void getPickup_the_order ()   {
    return pickup_the_order;
  }

  /**
   * Set the value of deliver_the_order
   * @param new_var the new value of deliver_the_order
   */
  void setDeliver_the_order (void new_var)   {
      deliver_the_order = new_var;
  }

  /**
   * Get the value of deliver_the_order
   * @return the value of deliver_the_order
   */
  void getDeliver_the_order ()   {
    return deliver_the_order;
  }
private:


  void initAttributes () ;

};

#endif // DELIVERY_PERSON_H
