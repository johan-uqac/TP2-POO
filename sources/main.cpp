#include <iostream>
#include <memory>

#include "Client.hpp"
#include "Facture.hpp"
#include "Piece.hpp"
#include "ProduitFacture.hpp"
#include "Service.hpp"
#include "Vehicle.hpp"

int main() {
  std::cout << "**** Pieces et service ****" << std::endl;
  Piece *piece = new Piece("Piece", 10.0, 10);
  Service *service = new Service("Service", 20.0, 3);
  // TODO: ajoutez plus de pièces et de services
  Piece *piece2 = new Piece("Piece2", 20.0, 20);
  Service *service2 = new Service("Service2", 30.0, 4);
  Piece *piece3 = new Piece("Piece3", 40.0, 30);
  Service *service3 = new Service("Service3", 50.0, 5);

  piece->afficher();
  service->afficher();
  piece2->afficher();
  service2->afficher();
  piece3->afficher();
  service3->afficher();

  // TODO: ajoutez les appels des méthodes d'autres pièces et services

  std::cout << "\n**** ProduitFacture ****" << std::endl;
  ProduitFacture *pfacture = new ProduitFacture(piece, 6);
  pfacture->afficher_produit();
  std::cout << *pfacture << std::endl;

  ProduitFacture *pfacture2 = new ProduitFacture(piece2, 7);
  pfacture2->afficher_produit();
  std::cout << *pfacture2 << std::endl;

  ProduitFacture *pfacture3 = new ProduitFacture(piece3, 8);
  pfacture3->afficher_produit();
  std::cout << *pfacture3 << std::endl;

  std::cout << "\n**** Clients et véhicules ****" << std::endl;
  Client *client = new Client("Eduardo", "Rue X", "666 666-66-66");
  Vehicle *vehicle = new Vehicle("JHJ 233", "Honda", "2020", "Voiture");

  Client *client2 = new Client("Eduardo2", "Rue X2", "666 666-66-66");
  Vehicle *vehicle2 = new Vehicle("POP 233", "Honda2", "2020", "Voiture2");
  // TODO: créez plus des clients et de véhicules

  std::cout << "\n**** Factures ****" << std::endl;
  Facture *facture = new Facture(client, "2020-10-10");

  facture->set_client(client);
  facture->set_vehicle(vehicle);

  Facture *facture2 = new Facture(client2, vehicle2, "2020-10-10");
  Facture *facture3 = new Facture("2020-10-10");

  // TODO: utilisez les autres versions de constructeur pour la class Facture

  std::cout << "\n**** Ajout des produits à la facture ****" << std::endl;
  facture->ajouter_produit(pfacture);
  facture->ajouter_produit(service, 5);

  std::cout << "\n**** Affichage de la facture ****" << std::endl;
  facture->afficher_facture();

  std::cout << "\n**** Factures: scénarios d'exception ****" << std::endl;

  try {
    facture->finaliser_facture();
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // TODO: Scénario pour finaliser une facture que demande plus des pièces qui
  // TODO: sont disponibles en dépôt

  try {
    facture->enregistrer_facture();
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  delete piece;
  delete piece2;
  delete piece3;
  delete service;
  delete service2;
  delete service3;
  delete pfacture;
  delete pfacture2;
  delete pfacture3;
  delete client;
  delete client2;
  delete vehicle;
  delete vehicle2;
  delete facture;
  delete facture2;
  delete facture3;

  return 0;
}
