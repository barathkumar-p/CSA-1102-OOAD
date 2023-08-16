

/**
 * Class Fees
 */
public class Fees {

  //
  // Fields
  //

  private int fee_id;
  private float fee_amount;
  private String payment_mode;
  
  //
  // Constructors
  //
  public Fees () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of fee_id
   * @param newVar the new value of fee_id
   */
  private void setFee_id (int newVar) {
    fee_id = newVar;
  }

  /**
   * Get the value of fee_id
   * @return the value of fee_id
   */
  private int getFee_id () {
    return fee_id;
  }

  /**
   * Set the value of fee_amount
   * @param newVar the new value of fee_amount
   */
  private void setFee_amount (float newVar) {
    fee_amount = newVar;
  }

  /**
   * Get the value of fee_amount
   * @return the value of fee_amount
   */
  private float getFee_amount () {
    return fee_amount;
  }

  /**
   * Set the value of payment_mode
   * @param newVar the new value of payment_mode
   */
  private void setPayment_mode (String newVar) {
    payment_mode = newVar;
  }

  /**
   * Get the value of payment_mode
   * @return the value of payment_mode
   */
  private String getPayment_mode () {
    return payment_mode;
  }

  //
  // Other methods
  //

  /**
   */
  public void payFees()
  {
  }


  /**
   */
  public void Refund()
  {
  }


  /**
   */
  public void CancelPAyment()
  {
  }


}
