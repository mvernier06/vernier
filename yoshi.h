#include "character.h"

class yoshi : public character{
  public :
    yoshi();
    yoshi(int nb_crest);
    virtual std::string WhatAmI() const override;
    virtual void Accelerate() override;
    virtual ~yoshi(){
      delete crest_;
    }
  private :
    int* crest_ = new int;
};
