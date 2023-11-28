#ifndef __VEHICLE_HPP__
#define __VEHICLE_HPP__

#include <string>

class Vehicle {
 public:
  Vehicle(const std::string& plaque, const std::string& modele,
          const std::string& annee, const std::string& type);

  int get_id() const;
  int get_id_suivant() const;
  const std::string& get_plaque() const;
  const std::string& get_modele() const;
  const std::string& get_annee() const;
  const std::string& get_type() const;

  void set_id_suivant(int id_suivant);

 private:
  int _id;
  static int _id_suivant;
  std::string _plaque;
  std::string _modele;
  std::string _annee;
  std::string _type;
};

#endif