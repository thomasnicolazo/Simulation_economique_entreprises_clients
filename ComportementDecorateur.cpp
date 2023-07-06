#include "ComportementDecorateur.hpp"


ComportementDecorateur::ComportementDecorateur()=default;

ComportementDecorateur::~ComportementDecorateur()=default;
void ComportementDecorateur::action(){
   for(auto p=this->comportements.begin();p!=this->comportements.end();p++){
        (*p)->action();
   }
    
}