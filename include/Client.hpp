#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <string>

class Client {
 public:
  Client(const std::string& nom, const std::string& adresse,
         const std::string& phone);

  int get_id() const;
  int get_id_suivant() const;
  const std::string& get_nom() const;
  const std::string& get_adresse() const;
  const std::string& get_phone() const;

 private:
  int _id;
  static int _client_id_suivant;
  std::string _nom;
  std::string _adresse;
  std::string _phone;
};

#endif