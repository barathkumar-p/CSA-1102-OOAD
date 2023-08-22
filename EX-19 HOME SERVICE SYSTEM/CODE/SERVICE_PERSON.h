
#ifndef SERVICE_PERSON_H
#define SERVICE_PERSON_H

#include <string>

/**
  * class SERVICE_PERSON
  * 
  */

class SERVICE_PERSON
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SERVICE_PERSON ();

  /**
   * Empty Destructor
   */
  virtual ~SERVICE_PERSON ();

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
  void maintaining_the_assistants ()
  {
  }


  /**
   */
  void getting_cash ()
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

  void cleaning;
  void processing_the_things;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of processing_the_things
   * @param new_var the new value of processing_the_things
   */
  void setProcessing_the_things (void new_var)   {
      processing_the_things = new_var;
  }

  /**
   * Get the value of processing_the_things
   * @return the value of processing_the_things
   */
  void getProcessing_the_things ()   {
    return processing_the_things;
  }
private:


  void initAttributes () ;

};

#endif // SERVICE_PERSON_H
