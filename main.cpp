#include "mario.h"
#include "yoshi.h"
#include<iostream>
#include <string>
#include <vector>

void test_constructeur_mario();
void test_accelerate();
void test_break();
void test_WhatAmI_mario();
void test_constructeur_yoshi();
void test_WhatAmI_yoshi();
void test_accelerate_yoshi();
void race();

int main(){
  test_constructeur_mario();
  test_accelerate();
  test_break();
  test_WhatAmI_mario();
  test_constructeur_yoshi();
  test_WhatAmI_yoshi();
  test_accelerate_yoshi();
  race();

  std::exit(EXIT_SUCCESS);
};

void test_constructeur_mario(){
  std::cout<<"test du constructeur du mario: "<< std::endl;
  mario char1 = mario();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  std::cout<<std::endl;
};

void test_accelerate(){
  std::cout<<"test de Accelerate() : "<< std::endl;
  mario char1 = mario();
  char1.Accelerate();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  std::cout<<std::endl;
};

void test_break(){
  std::cout<<"test de Break() : "<< std::endl;
  mario char1 = mario();
  char1.Accelerate();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  char1.Break();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  std::cout<<std::endl;
};

void test_WhatAmI_mario(){
  std::cout<<"test du WhatAmI de mario: "<< std::endl;
  mario char1 = mario();
  std::cout<<"Le character est un : ";
  std::cout<< char1.WhatAmI()<<std::endl;
  std::cout<<std::endl;
}

void test_constructeur_yoshi(){
  std::cout<<"test du constructeur du yoshi: "<< std::endl;
  yoshi char1 = yoshi(3);
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  std::cout<<std::endl;
};

void test_WhatAmI_yoshi(){
  std::cout<<"test du WhatAmI de yoshi : "<< std::endl;
  yoshi char1 = yoshi(2);
  std::cout<<"Le character est un : ";
  std::cout<< char1.WhatAmI()<<std::endl;
  std::cout<<std::endl;
};

void test_accelerate_yoshi(){
  std::cout<<"test du Accelerate yoshi : "<< std::endl;
  yoshi char1 = yoshi(3);
  std::cout<<"La vitesse de yoshi est : ";
  std::cout<< char1.speed()<<std::endl;
  char1.Accelerate();
  std::cout<<"Yoshi accélère, sa nouvelle vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<std::endl;
};

void race(){
  std::vector<character*> race;
  race.push_back(new mario());
  race.push_back(new yoshi());
  std::cout<<"La course commence : elle fait 5 tours :) "<< std::endl;
  for ( auto participant : race){
    for (int i=0; i<5; ++i){
      participant->Accelerate();
    }
    std::cout<<"A la fin des 5 tours, ";
    std::cout<<participant->WhatAmI();
    std::cout<<" a une vitesse de : ";
    std::cout << participant->speed() << std::endl;
  }
  for (auto participant : race) {
    delete participant;
  }
};
