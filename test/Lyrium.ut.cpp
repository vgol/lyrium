#define BOOST_TEST_MODULE Lyrium

#include "../src/Lyrium.h"
#include <boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_CASE(lyrium_potion_total_sum) // NOLINT
{
    Lyrium::LyriumPotion lp = Lyrium::LyriumPotion();

    BOOST_TEST(lp.totalPrice() == 10310);
}

BOOST_AUTO_TEST_CASE(lyrium_dust_quantity) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(103356);
    Lyrium::Quantities qty = lc.getIngredientsQuantity();

    BOOST_TEST(qty.m_lyriumDust == 40);
}

BOOST_AUTO_TEST_CASE(distillation_agent_quantity) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(103356);
    Lyrium::Quantities qty = lc.getIngredientsQuantity();

    BOOST_TEST(qty.m_distillationAgents == 20);
}

BOOST_AUTO_TEST_CASE(concentrator_agent_quantity) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(103356);
    Lyrium::Quantities qty = lc.getIngredientsQuantity();

    BOOST_TEST(qty.m_concentratorAgents == 20);
}

BOOST_AUTO_TEST_CASE(flasks_quantity) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(103356);
    Lyrium::Quantities qty = lc.getIngredientsQuantity();

    BOOST_TEST(qty.m_flasks == 10);
}

BOOST_AUTO_TEST_CASE(balance_cost_price) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(341000);
    Lyrium::Balance balance = lc.getBalance();

    BOOST_TEST(balance.m_costPrice == 340230);
}

BOOST_AUTO_TEST_CASE(balance_income) // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(341000);
    Lyrium::Balance balance = lc.getBalance();

    BOOST_TEST(balance.m_income == 412500);
}

BOOST_AUTO_TEST_CASE(balance_profit)  // NOLINT
{
    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter();
    lc.setCurrentGold(341000);
    Lyrium::Balance balance = lc.getBalance();

    BOOST_TEST(balance.m_profit == 72270);
}

#undef BOOST_TEST_MODULE
