#include "acteurs.cpp"



//Transformer en signleton.
//A retrouver depuis IActeur.
class Marche
{
private :
    std::deque<Entreprise> boitesSurLeMarche;
    std::deque<Humain> humainsSurLeMarche;
public:

    Marche(Entreprise boite, Humain humain)
    {
        boitesSurLeMarche.push_back(boite);
        humainsSurLeMarche.push_back(humain);
    }

    ~Marche()
    {
    std::cout << "Un marché a été détruit." << std::endl;
    }

    getListProduitsFini()
    {

    }
    getListProduitsBrute()
    {

    }
    getListAcheteurs()
    {

    }
    getListVendeurs(Produit p)
    {

    }
    void Tour()
    {

    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
