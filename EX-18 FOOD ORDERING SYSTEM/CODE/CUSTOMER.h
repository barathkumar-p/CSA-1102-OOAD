
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class CUSTOMER
  * 
  */

class CUSTOMER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CUSTOMER ();

  /**
   * Empty Destructor
   */
  virtual ~CUSTOMER ();

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
  void payment_methods ()
  {
  }


  /**
   */
  void setting_address ()
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

  void select_the_item;
  void add_to_cart;
  void apply_coupons_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of select_the_item
   * @param new_var the new value of select_the_item
   */
  void setSelect_the_item (void new_var)   {
      select_the_item = new_var;
  }

  /**
   * Get the value of select_the_item
   * @return the value of select_the_item
   */
  void getSelect_the_item ()   {
    return select_the_item;
  }

  /**
   * Set the value of add_to_cart
   * @param new_var the new value of add_to_cart
   */
  void setAdd_to_cart (void new_var)   {
      add_to_cart = new_var;
  }

  /**
   * Get the value of add_to_cart
   * @return the value of add_to_cart
   */
  void getAdd_to_cart ()   {
    return add_to_cart;
  }

  /**
   * Set the value of apply_coupons_
   * @param new_var the new value of apply_coupons_
   */
  void setApply_coupons_ (void new_var)   {
      apply_coupons_ = new_var;
  }

  /**
   * Get the value of apply_coupons_
   * @return the value of apply_coupons_
   */
  void getApply_coupons_ ()   {
    return apply_coupons_;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
