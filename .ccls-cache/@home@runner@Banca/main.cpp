#include <iostream>
#include <fstream>
#include "classe.hpp"
using namespace std;

/*int main(){
  Pessoa p("Jose da silva",16,"M");
  Livro l1("Teste De Titulo","José de Alencar",366,2,true,p);
  Pessoa a;

  Livro* l2[2];
  l2[0] = new Livro ("Teste De Titulo","José de Alencar",366,2,true,a);
  l2[0]->detalhes();
  
}*/

int main() {
  fstream arqP("leitores.txt");
  fstream arqL("livros.txt");
  if(!(arqP.is_open() && arqL.is_open())){
    cout<<"Error ao abrir arquivos"<<endl;
  }
  else{
     int opc=-1;
    while(opc!=0){
    cout<<"BEM VINDO Á BANCA DO ZÉ"<<endl<<"Escolha uma opção: \n 1-Cadastrar Pessoa \n 2-Cadastrar Livro \n 3-Ler livro \n 0-Sair Do Programa" <<endl;
    cin>>opc;
    switch(opc){
      case 2:
      break;
      case 3:
      break;
      case 0:
      break;
      default:
        cout<<"OPÇÃO INVÁLIDA!"<<endl;
      break;
      case 1:
        string n;
        int id;
        string sx;
        string linha;
        cout<<"Nome da pessoa: "<<endl;
        cin>>n;
        cout<<"Idade: "<<endl;
        cin>>id;
        cout<<"Sexo: "<<endl;
        cin>>sx;
        Pessoa p(n,id,sx);
        arqL << p.statusPessoa();
      break;
    }
  }
}
} 