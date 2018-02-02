#include <iostream>
#include "Lyrium.h"


int ask_user(const char request[32]);

int main()
{
    int current_gold;
    int stop_gold;

    current_gold = ask_user("How much gold do you have now? ");
    stop_gold = ask_user("How much gold do you want? ");

    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter(current_gold, stop_gold);
    lc.howManyIngredients();
    lc.showBalance();

    return 0;
}

int ask_user(const char request[32])
{
    std::cout << request;
    int answer;
    std::cin >> answer;

    // Implicit conversion to int.
    // This actually is bad. User can write something which will
    // overflow int or just can't be converted.
    return answer;
}