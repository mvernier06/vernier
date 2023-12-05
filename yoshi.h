#include "character.h"

class yoshi : public character{
  public :
    yoshi();
    virtual std::string WhatAmI() const override;
    virtual void Accelerate() override;
};
