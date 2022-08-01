#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Pessoa{
private:
  string nome;
  int idade;
  string sexo;
  string getnome();
  void setnome(string no);
  int getidade();
  void setidade(int id);
  string getsexo();
  void setsexo(string s);

public:
  Pessoa()=default;
  Pessoa(string nome,int idade, string sexo);
  void statusPessoa();
  void fazerAniver();
};
//pessoa lê livro
class Livro{
private:
  string titulo;
  string autor;
  int totpaginas;
  int pagatual;
  bool aberto;
  Pessoa leitor;
  string gettitulo();
  void settitulo(string t);
  string getautor();
  void setautor(string aut);
  int gettotpages();
  void settotpages(int p);
  int getpagatual();
  void setpagatual(int pat);
  bool getaberto();
  void setaberto(bool ab);
  Pessoa getleitor();
  void setleitor(Pessoa cara);

public:
  Livro()=default;
  Livro(string t,string a,int to,int atu,bool ab,Pessoa c);
  void detalhes();
  void abrir();
  void fechar();
  void folhear();
  void avancarpag();
  void voltarpag();
};

#endif // CLASSES_HPP_INCLUDED
