#ifndef LYRIUM_USERINTERFACE_H
#define LYRIUM_USERINTERFACE_H


#include "Lyrium.h"

namespace UI
{


class UserInterface
{
public:
    virtual ~UserInterface();

    int askUser(const char *request);

    void showIngredientsQuantity(Lyrium::Quantities *qty);

    void showBalance(Lyrium::Balance *balance);
};

} // UI

#endif //LYRIUM_USERINTERFACE_H
