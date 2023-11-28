#ifndef __PIECE_HPP__
#define __PIECE_HPP__

#include <string>

#include "Produit.hpp"

class Piece : public Produit {
 public:
  Piece(const std::string& nom, double prix, int quantite_depot);

  void ajouter_piece_depot(int quantite);
  void soustraire_piece_depot(int quantite);

  void afficher() const override;
  double calculer_prix() const override;

  char get_type_produit() const override;
  int get_quantite_depot() const;

 private:
  int _quantite_depot;
};

#endif