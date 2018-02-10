#include "Lyrium.h"
#include "UserInterface.h"

int main()
{
    Lyrium::LyriumCounter lyriumCounter = Lyrium::LyriumCounter();
    UI::UserInterface ui = UI::UserInterface();

    lyriumCounter.setCurrentGold(ui.askUser("How much gold do you have?"));
    Lyrium::Quantities qty = lyriumCounter.getIngredientsQuantity();
    ui.showIngredientsQuantity(&qty);

    Lyrium::Balance balance = lyriumCounter.getBalance();
    ui.showBalance(&balance);

    return 0;
}
