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


struct Quantities
{
    int m_lyriumDust;
    int m_distillationAgents;
    int m_concentratorAgents;
    int m_flasks;
    int m_lyriumPotions;

    Quantities();

    virtual ~Quantities();
};


struct Balance
{
    int m_income;
    int m_costPrice;
    int m_profit;

    Balance();

    virtual ~Balance();
};


class LyriumCounter
{
private:
    int m_currentGold;
    int m_stopGold;

    LyriumPotion lp;

    Quantities qties;
    Balance balance;

public:
    LyriumCounter();

    virtual ~LyriumCounter();

    void setCurrentGold(int m_current_gold);

    void setStopGold(int m_stop_gold);

    Quantities getIngredientsQuantity();

    Balance getBalance();
};

} // Lyrium namespace

#endif //LYRIUM_LYRIUMPOTION_H
