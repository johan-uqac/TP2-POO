#ifndef __ERRORS_HPP__
#define __ERRORS_HPP__

#include <string>

class FactureFinaliseeException : public std::exception {
 private:
  std::string _message;

 public:
  FactureFinaliseeException() = default;
  virtual ~FactureFinaliseeException() throw() = default;
  const char *what() const throw();
};

class FacturePasFinaliseeException : public std::exception {
 private:
  std::string _message;

 public:
  FacturePasFinaliseeException() = default;
  virtual ~FacturePasFinaliseeException() throw() = default;
  const char *what() const throw();
};

#endif