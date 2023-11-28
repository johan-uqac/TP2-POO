#ifndef __FACTURE_HPP__
#define __FACTURE_HPP__

#include <fstream>
#include <memory>

#include "Client.hpp"
#include "Produit.hpp"
#include "ProduitFacture.hpp"
#include "Vehicle.hpp"

class Facture {
 public:
  Facture(const std::string &date_facture);
  Facture(Client *client, const std::string &date_facture);
  Facture(Client *client, Vehicle *vehicle, const std::string &date_facture);

  void ajouter_produit(Produit *produit, int quantite);
  void ajouter_produit(ProduitFacture *produit_facture);

  void afficher_facture() const;
  void afficher_facture(std::ostream &os) const;

  double calculer_balance() const;
  void finaliser_facture();
  void enregistrer_facture() const;

  void set_client(Client *client);
  void set_vehicle(Vehicle *vehicle);

 private:
  int _id;
  static int _facture_id_suivant;
  std::string _date_facture;
  int _status;
  double _balance;
  Client *_client;
  Vehicle *_vehicle;
  std::vector<ProduitFacture> _produits;
};

#endif