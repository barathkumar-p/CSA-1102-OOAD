
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class ADMIN
  * 
  */

class ADMIN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMIN ();

  /**
   * Empty Destructor
   */
  virtual ~ADMIN ();

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
  void approveOrder ()
  {
  }


  /**
   */
  void rejectOrder ()
  {
  }


  /**
   */
  void manageOrder ()
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

  string UserName;
  int password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (int new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  int getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
