#ifndef __PRODUITFACTURE_HPP__
#define __PRODUITFACTURE_HPP__

#include <iostream>

#include "Produit.hpp"

class ProduitFacture {
 public:
  ProduitFacture(Produit* produit, int quantite);

  void afficher_produit() const;
  friend std::ostream& operator<<(std::ostream& os,
                                  const ProduitFacture& pfacture);

  void set_quantite(int quantite);

  Produit* get_produit() const;
  int get_quantite() const;
  double get_prix_total() const;

 private:
  int _id;
  static int _id_suivant;
  int _quantite;
  double _prix_total;
  Produit* _produit;
};

#endif