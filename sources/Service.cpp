#include <iostream>

#include "Service.hpp"

Service::Service(const std::string& nom, double prix, double temps_execution)
    : Produit(nom, prix), _temps_execution(temps_execution) {
  _description = "Default service description";
}

Service::Service(const std::string& nom, double prix, double temps_execution,
                 const std::string& description)
    : Produit(nom, prix),
      _description(description),
      _temps_execution(temps_execution) {}

void Service::afficher() const {
  std::cout << "Service : " << get_nom() << ", $ " << get_prix()
            << ", Exécution : " << _temps_execution << "h" << std::endl;
}

double Service::calculer_prix() const { return get_prix() * _temps_execution; }

char Service::get_type_produit() const { return 'S'; }