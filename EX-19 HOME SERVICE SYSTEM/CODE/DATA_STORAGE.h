
#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H

#include <string>

/**
  * class DATA_STORAGE
  * 
  */

class DATA_STORAGE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DATA_STORAGE ();

  /**
   * Empty Destructor
   */
  virtual ~DATA_STORAGE ();

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
  void AddData ()
  {
  }


  /**
   */
  void removeData ()
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

  void storing_the_feedback;
  void payment_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of storing_the_feedback
   * @param new_var the new value of storing_the_feedback
   */
  void setStoring_the_feedback (void new_var)   {
      storing_the_feedback = new_var;
  }

  /**
   * Get the value of storing_the_feedback
   * @return the value of storing_the_feedback
   */
  void getStoring_the_feedback ()   {
    return storing_the_feedback;
  }

  /**
   * Set the value of payment_details
   * @param new_var the new value of payment_details
   */
  void setPayment_details (void new_var)   {
      payment_details = new_var;
  }

  /**
   * Get the value of payment_details
   * @return the value of payment_details
   */
  void getPayment_details ()   {
    return payment_details;
  }
private:


  void initAttributes () ;

};

#endif // DATA_STORAGE_H
