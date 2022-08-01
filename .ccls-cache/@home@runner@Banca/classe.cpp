#include "classe.hpp"
  Pessoa::Pessoa(string nome,int idade, string sexo){
    this->setnome(nome);
    this->setidade(idade);
    this->setsexo(sexo);
  }
  string Pessoa:: getnome(){
    return this->nome;
  }
  void Pessoa:: setnome(string no){
    this->nome=no;
  }
  int Pessoa:: getidade(){
    return this->idade;
  }
  void Pessoa:: setidade(int id){
    this->idade=id;
  }
  string Pessoa:: getsexo(){
    return this->sexo;
  }
  void Pessoa:: setsexo(string s){
    this->sexo=s;
  }
  void Pessoa:: fazerAniver(){
    this->setidade(this->getidade()+1);
  }
  void Pessoa:: statusPessoa(){
    cout <<"----------DADOS PESSOAIS ----------" <<endl;
    cout<<"Nome: "<< this->getnome() <<endl;
    cout<<"Idade: "<< this->getidade()<<endl;
    cout<<"Sexo: "<< this->getsexo()<< endl;
  }


//pessoa lê livro
  string Livro:: gettitulo(){
    return this->titulo;
  }
  void Livro:: settitulo(string t){
    this->titulo=t;
  }
  string Livro:: getautor(){
    return  this->autor;
  }
  void Livro:: setautor(string aut){
    this->autor=aut;
  }
  int Livro:: gettotpages(){
    return this->totpaginas;
  }
  void Livro:: settotpages(int p){
    this->totpaginas=p;
  }
  int Livro:: getpagatual(){
    return this->pagatual;
  }
  void Livro:: setpagatual(int pat){
    if(this->getaberto() && pat<this->gettotpages()+1){
    this->pagatual=pat;}
    else{
      this->pagatual=0;
    }
  }
  bool Livro:: getaberto(){
    return this->aberto;
  }
  void Livro:: setaberto(bool ab){
    this->aberto=ab;
  }
  Pessoa Livro::getleitor(){
    return this->leitor;
  }
  void Livro::setleitor(Pessoa cara){
    this->leitor=cara;
  }

  Livro:: Livro(string t,string a,int to,int atu,bool ab,Pessoa c){
    this->settitulo(t);
    this->setautor(a);
    this->settotpages(to);
    this->setpagatual(atu);
    this->setaberto(ab);
    this->setleitor(c);
  }

  void Livro:: detalhes(){
    cout<< "########## LIVRO ##########" <<endl;
    cout<<"Titulo: " << this->gettitulo()<<endl;
    cout<<"Autor: " << this->getautor()<<endl;
    cout<<"Total de paginas: " << this->gettotpages() <<endl;
    cout<<"Pagina Atual: " << this->getpagatual() <<endl;
    cout<<"Aberto: " << this->getaberto() <<endl;
    cout<<"Leitor: " << endl;
    getleitor().statusPessoa();
  }
  void Livro:: abrir(){
    if(this->getaberto()){
      cout<<"Livro já aberto"<<endl;
    }
    else{
      this->setaberto(true);
    }
  }
  void Livro:: fechar(){
    if(!(this->getaberto())){
      cout<< "Livro já fechado!" <<endl;
    }
    else{
      this->setaberto(false);
    }
  }
  void Livro:: folhear(){
    if(this->getaberto()){
      time_t t;
      srand((unsigned) time(&t)); 
      this->setpagatual(rand()%(this->gettotpages())); //ele vai gerar um numero aleatorio entre 0 e o total de paginas, ffolheando do começo
    }
    else{
      cout<<"Livro fechado!"<<endl;
    }
  }
  void Livro:: avancarpag(){
    if(this->getaberto() && this->getpagatual() < this->gettotpages()+1){
      this->setpagatual(this->getpagatual()+1);
    }
    else{
      cout<<"Livro fechado!"<<endl;
    }
  }
  void Livro:: voltarpag(){
    if(this->getaberto() &&  this->getpagatual() > 0){
      this->setpagatual(this->getpagatual()-1);
    }
    else{
       cout<<"Livro fechado!"<<endl;
    }
  }