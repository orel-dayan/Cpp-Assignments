
#ifndef WAR_CARD_HPP
#define WAR_CARD_HPP
#include <string>
namespace ariel
{
  /**
   * @brief An enum representing the suit of a playing card.
   */
  enum Suit
  {
    DIAMONDS, /**< The diamond suit. */
    SPADES,   /**< The spade suit. */
    HEARTS,   /**< The heart suit. */
    CLUBS,    /**< The club suit. */

  };

  class Card
  {
  private:
    int m_number;
    Suit m_suit;
    /**
     * @brief Returns the string representation of the card's suit.
     *
     * @return A string representing the card's suit.
     */
    std::string getSuit();

    /**
     * @brief Returns the string representation of the card's number.
     *
     * @return A string representing the card's number.
     */

    std::string getNumberRepresentation();

  public:
    /**
     * @brief Construct a new Card object
     *
     * @param number  The number of the card
     * @param suit The suit of the card
     */
    Card(int number = 1, Suit suit = CLUBS);

    /**
     * @brief Returns the string representation of the card.
     *
     * @return A string representing the card.
     */
    std::string to_string();

    /**
     * @brief Returns the number of the card.
     *
     * @return The number of the card.
     */
    int getNumber();
  };
}
#endif
