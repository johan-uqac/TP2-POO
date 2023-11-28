#ifndef __PRODUIT_HPP__
#define __PRODUIT_HPP__

#include <string>

class Produit {
 public:
  Produit(const std::string& nom, double prix);
  virtual ~Produit() = default;

  virtual void afficher() const = 0;
  const std::string& get_nom() const;
  virtual double calculer_prix() const = 0;
  virtual char get_type_produit() const = 0;
  double get_prix() const;

 protected:
  static int _produit_id_suivant;

 private:
  int _id;
  std::string _nom;
  double _prix;
};

#endif