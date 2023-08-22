
#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>

/**
  * class DATA_BASE
  * 
  */

class DATA_BASE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DATA_BASE ();

  /**
   * Empty Destructor
   */
  virtual ~DATA_BASE ();

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
  void recovery_of_account_also ()
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

  void store_all_ordering_datas;
  void stores_the_dat;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_all_ordering_datas
   * @param new_var the new value of store_all_ordering_datas
   */
  void setStore_all_ordering_datas (void new_var)   {
      store_all_ordering_datas = new_var;
  }

  /**
   * Get the value of store_all_ordering_datas
   * @return the value of store_all_ordering_datas
   */
  void getStore_all_ordering_datas ()   {
    return store_all_ordering_datas;
  }

  /**
   * Set the value of stores_the_dat
   * @param new_var the new value of stores_the_dat
   */
  void setStores_the_dat (void new_var)   {
      stores_the_dat = new_var;
  }

  /**
   * Get the value of stores_the_dat
   * @return the value of stores_the_dat
   */
  void getStores_the_dat ()   {
    return stores_the_dat;
  }
private:


  void initAttributes () ;

};

#endif // DATA_BASE_H
