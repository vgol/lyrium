#ifndef LYRIUM_LYRIUMPOTION_H
#define LYRIUM_LYRIUMPOTION_H


namespace Lyrium
{

struct LyriumPotion
{
private:
    // Prices
    static const int m_lyriumDustPrice = 2'40;
    static const int m_distillationAgentPrice = 13'20;
    static const int m_concentratorAgentPrice = 33'00;
    static const int m_flaskPrice = 1'10;

public:
    // Quantities
    static const int m_lyriumDustQty = 4;
    static const int m_distillationAgentQty = 2;
    static const int m_concentratorAgentQty = 2;
    static const int m_flaskQty = 1;

    // Potent Lyrium Potion sell price.
    static const int m_sellPrice = 1'25'00;

    virtual ~LyriumPotion();

    int totalPrice();
};

class LyriumCounter
{
private:
    int current_gold;
    int stop_gold;
    LyriumPotion lp;

public:
    LyriumCounter(int current_gold, int stop_gold);
    virtual ~LyriumCounter();

    void howManyIngredients();
    void showBalance();
};

} // Lyrium namespace

#endif //LYRIUM_LYRIUMPOTION_H
