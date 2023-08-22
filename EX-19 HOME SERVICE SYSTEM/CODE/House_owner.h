
#ifndef HOUSE_OWNER_H
#define HOUSE_OWNER_H

#include <string>

/**
  * class House_owner
  * 
  */

class House_owner
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  House_owner ();

  /**
   * Empty Destructor
   */
  virtual ~House_owner ();

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
  void payment_ ()
  {
  }


  /**
   */
  void rating ()
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

  void things_to_be_cleaned;
  void helping_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of things_to_be_cleaned
   * @param new_var the new value of things_to_be_cleaned
   */
  void setThings_to_be_cleaned (void new_var)   {
      things_to_be_cleaned = new_var;
  }

  /**
   * Get the value of things_to_be_cleaned
   * @return the value of things_to_be_cleaned
   */
  void getThings_to_be_cleaned ()   {
    return things_to_be_cleaned;
  }

  /**
   * Set the value of helping_
   * @param new_var the new value of helping_
   */
  void setHelping_ (void new_var)   {
      helping_ = new_var;
  }

  /**
   * Get the value of helping_
   * @return the value of helping_
   */
  void getHelping_ ()   {
    return helping_;
  }
private:


  void initAttributes () ;

};

#endif // HOUSE_OWNER_H
