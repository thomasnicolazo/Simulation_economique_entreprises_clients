#include "ComportementDecorateur.hpp"


ComportementDecorateur::ComportementDecorateur()
{
}

ComportementDecorateur::~ComportementDecorateur()
{
}
void ComportementDecorateur::action(){
   for(auto p=this->comportements.begin();p!=this->comportements.end();p++){
        p->action();
   }
    
}