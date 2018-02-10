#include "Lyrium.h"


int Lyrium::LyriumPotion::totalPrice()
{
    return (m_lyriumDustPrice * m_lyriumDustQty) +
           (m_distillationAgentPrice * m_distillationAgentQty) +
           (m_concentratorAgentPrice * m_concentratorAgentQty) +
           (m_flaskPrice * m_flaskQty);
}

Lyrium::LyriumPotion::~LyriumPotion() = default;

Lyrium::LyriumCounter::LyriumCounter()
        : m_currentGold(0),
          m_stopGold(0),
          lp(Lyrium::LyriumPotion()),
          qties(Lyrium::Quantities()),
          balance(Lyrium::Balance())
{
}

Lyrium::Quantities Lyrium::LyriumCounter::getIngredientsQuantity()
{
    qties.m_lyriumPotions = m_currentGold / lp.totalPrice();

    qties.m_lyriumDust = lp.m_lyriumDustQty * qties.m_lyriumPotions;
    qties.m_distillationAgents = lp.m_distillationAgentQty * qties.m_lyriumPotions;
    qties.m_concentratorAgents = lp.m_concentratorAgentQty * qties.m_lyriumPotions;
    qties.m_flasks = lp.m_flaskQty * qties.m_lyriumPotions;

    return qties;
}

Lyrium::Balance Lyrium::LyriumCounter::getBalance()
{
    int number_of_potions;
    int lp_price;

    lp_price = lp.totalPrice();
    number_of_potions = m_currentGold / lp_price;

    balance.m_costPrice = lp_price * number_of_potions;
    balance.m_income = lp.m_sellPrice * number_of_potions;
    balance.m_profit = balance.m_income - balance.m_costPrice;

    return balance;
}

void Lyrium::LyriumCounter::setCurrentGold(int m_current_gold)
{
    LyriumCounter::m_currentGold = m_current_gold;
}

void Lyrium::LyriumCounter::setStopGold(int m_stop_gold)
{
    LyriumCounter::m_stopGold = m_stop_gold;
}

Lyrium::LyriumCounter::~LyriumCounter() = default;

Lyrium::Quantities::Quantities()
        : m_lyriumDust(0),
          m_distillationAgents(0),
          m_concentratorAgents(0),
          m_flasks(0),
          m_lyriumPotions(0)
{
}

Lyrium::Quantities::~Quantities() = default;

Lyrium::Balance::Balance()
        : m_income(0),
          m_costPrice(0),
          m_profit(0)
{
}

Lyrium::Balance::~Balance() = default;
