#include "character.h"

class yoshi : public character{
  public :
    yoshi(int crest);
    virtual std::string WhatAmI() const override;
    virtual void Accelerate() override;
  private :
    int crest_;
};
