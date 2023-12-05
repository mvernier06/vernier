#include "character.h"

class mario : public character{
  public :
    mario();
    virtual std::string WhatAmI() const override;

};
