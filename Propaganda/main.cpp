#include <iostream>

using namespace std;

class propaganda {

private:

public:
    void inscrever(){
        cout << "Inscreva-se no meu espaço do YouTube\n";
    }

    void ativarSino(){
        cout << "Ative o sino para não perder nenhuma novidade\n";
    }

    void curta(){
        cout << "Curta nosso espaço no YouTube\n";
    }
};

int main(){

    // propaganda é a classe e canal é o objeto criado a partir dessa classe (instanciação)
    // propaganda é a classe e canal é o objeto (instância da classe propaganda)
    // Pode confundir um pouco (Progaganda é a Classe e canal é o Objeto ou seja a classe Propaganda foi instanciada pelo canal)

    propaganda canal;

    canal.inscrever();
    canal.ativarSino();
    canal.curta();

    return 0;
}
