#include <iostream>
#include "Lyrium.h"



int Lyrium::LyriumPotion::totalPrice()
{
    return (m_lyriumDustPrice * m_lyriumDustQty) +
           (m_distillationAgentPrice * m_distillationAgentQty) +
           (m_concentratorAgentPrice * m_concentratorAgentQty) +
           (m_flaskPrice * m_flaskQty);
}

Lyrium::LyriumPotion::~LyriumPotion() = default;

Lyrium::LyriumCounter::LyriumCounter(int current_gold, int stop_gold)
    : current_gold(current_gold), stop_gold(stop_gold)
{
    lp = Lyrium::LyriumPotion();
}

void Lyrium::LyriumCounter::showIngredientsQuantity()
{
    int number_of_potions;
    number_of_potions = current_gold / lp.totalPrice();
    std::cout << "Lyrium dust: " << lp.m_lyriumDustQty * number_of_potions << "\n"
              << "Distillation Agents: " << lp.m_distillationAgentQty * number_of_potions << "\n"
              << "Concentrator Agents: " << lp.m_concentratorAgentQty * number_of_potions << "\n"
              << "Flasks: " << lp.m_flaskQty * number_of_potions << "\n"
              << "You'l get totally " << number_of_potions << " Potent Lyrium Potions.";
}

void Lyrium::LyriumCounter::showBalance()
{
    int number_of_potions;
    int lp_price;

    lp_price = lp.totalPrice();
    number_of_potions = current_gold / lp_price;

    auto spent = lp_price * number_of_potions;
    auto sold = lp.m_sellPrice * number_of_potions;

    std::cout << "You can sell Potent Lyrium Potions for: " << sold << "\n"
              << "You'll spend for craft: " << spent << "\n"
              << "Your profit: " << sold - spent << "\n";

}

Lyrium::LyriumCounter::~LyriumCounter() = default;
