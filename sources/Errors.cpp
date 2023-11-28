#include "Errors.hpp"

const char *FactureFinaliseeException::what() const throw() {
  return "La facture a déjà été finalisée";
}

const char *FacturePasFinaliseeException::what() const throw() {
  return "La facture doit être finalisée avant le registre";
}