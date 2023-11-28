#ifndef __SERVICE_HPP__
#define __SERVICE_HPP__

#include <iostream>
#include <string>

#include "Produit.hpp"

class Service : public Produit {
 public:
  Service(const std::string& nom, double prix, double temps_execution);
  Service(const std::string& nom, double prix, double temps_execution,
          const std::string& description);

  void afficher() const override;
  double calculer_prix() const override;

  char get_type_produit() const override;
  const std::string& get_description() const;

  void set_description(const std::string& description);

 private:
  std::string _description;
  double _temps_execution;
};

#endif