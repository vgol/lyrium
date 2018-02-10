#include <iostream>
#include "UserInterface.h"


int UI::UserInterface::askUser(const char *request)
{
    std::cout << request;
    int answer;
    std::cin >> answer;

    // Implicit conversion to int.
    // This actually is bad. User can write something which will
    // overflow int or just can't be converted.
    return answer;
}

void UI::UserInterface::showIngredientsQuantity(Lyrium::Quantities *qty)
{
    std::cout << "Lyrium dust: " << qty->m_lyriumDust << "\n"
              << "Distillation Agents: " << qty->m_distillationAgents << "\n"
              << "Concentrator Agents: " << qty->m_concentratorAgents << "\n"
              << "Flasks: " << qty->m_flasks << "\n"
              << "You'll get totally " << qty->m_lyriumPotions
              << " Potent Lyrium Potions." << "\n";

}

void UI::UserInterface::showBalance(Lyrium::Balance *balance)
{
    std::cout << "You can sell Potent Lyrium Potions for: " << balance->m_income << "\n"
              << "You'll spend for craft: " << balance->m_costPrice << "\n"
              << "Your profit: " << balance->m_profit << "\n";
}

UI::UserInterface::~UserInterface() = default;
