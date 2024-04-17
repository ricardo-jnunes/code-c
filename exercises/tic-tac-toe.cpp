#include<iostream>
#include<string>
using namespace std;
// Função para mostrar possições da tabela
int mapa(int i){
    cout << endl << endl;
    cout << "Mapa de possicoes" << endl;
    cout << " 1 | 2 | 3   " << endl;
    cout << "---|---|---  " << endl;
    cout << " 4 | 5 | 6   " << endl;
    cout << "---|---|---  " << endl;
    cout << " 7 | 8 | 9   " << endl;
    cout << endl;
    }
    // Função para mostrar tabela
void mapa_mod(char matriz[3][3]){
    cout << endl << endl;
    cout << "Mapa do Jogo"<<endl;
    cout << " " << matriz[2][0]<< " | "<< matriz[2][1]<<" | " << matriz[2][2] << endl;
    cout << "---|---|---  " << endl;
    cout << " " << matriz[1][0]<< " | "<< matriz[1][1]<<" | " << matriz[1][2] << endl;
    cout << "---|---|---  " << endl;
    cout << " " << matriz[0][0]<< " | "<< matriz[0][1]<<" | " << matriz[0][2] << endl;
    cout << endl;
}
    //Função para verificar se o numero digitado é repetido
int verifica_posicao(char velha[3][3], int posicao){
        int cont = 0;
        if(posicao == '1')
             if(velha[2][0] != ' ') cont++;
        if(posicao == '2')
             if(velha[2][1] != ' ') cont++;
        if(posicao == '3')
             if(velha[2][2] != ' ') cont++;
        if(posicao == '4')
             if(velha[1][0] != ' ') cont++;
        if(posicao == '5')
             if(velha[1][1] != ' ') cont++;
        if(posicao == '6')
             if(velha[1][2] != ' ') cont++;
        if(posicao == '7')
             if(velha[0][0] != ' ') cont++;
        if(posicao == '8')
             if(velha[0][1] != ' ') cont++;
        if(posicao == '9')
             if(velha[0][2] != ' ') cont++;
        if (cont>0) return 1;
        else return 0;
}
    // Segue o baile..
int main(){
    system("color a");
    char velha[3][3],posicao, temp, joga;
    string joga1, joga2;
    int teste = 1, cont =0, termina, nenhum = 0, vencedor;
    system("cls");
    // Pegando os nomes dos jogadores
    cout << "Digite o nome do jogador 1: ";
    getline(cin,joga1);
    cout << "\nDigite o nome do jogador 2: ";
    getline(cin,joga2);
    cout << endl << joga1 << " = X";
    cout << endl << joga2 << " = 0";
    system("cls");
    system("color 7");
    // Limpando a matriz..
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            velha[i][j] = ' ';
        }
    }
    // Faz o laço enquanto alguem vença ou seja digitados 9 caracteres
    while((cont == 0)&& (nenhum<9)){
        system("cls");
        cout << endl << joga1 << " =  X";
        cout << endl << joga2 << " =  0";
        mapa(teste);
        mapa_mod(velha);
        // Lê a posição do jogador 1
        cout << joga1 << " digite a posicao que deseja jogar: ";
        cin >> posicao;
        // Verifica se a posição digitada ja existe
        temp = (verifica_posicao(velha,posicao));
        while(temp == 1){
            cout << endl << "Vc digitou uma posicao ocupada!";
            cout << endl << "Digite novamente a posicao:";
            cin >> posicao;
            temp = verifica_posicao(velha,posicao);
        }
        // Insere a posição na tabela
        if(posicao == '1') velha[2][0] = 'x';
        if(posicao == '2') velha[2][1] = 'x';
        if(posicao == '3') velha[2][2] = 'x';
        if(posicao == '4') velha[1][0] = 'x';
        if(posicao == '5') velha[1][1] = 'x';
        if(posicao == '6') velha[1][2] = 'x';
        if(posicao == '7') velha[0][0] = 'x';
        if(posicao == '8') velha[0][1] = 'x';
        if(posicao == '9') velha[0][2] = 'x';
        // Verifica se o jogador 1 ganhou
        if(velha[2][0]=='0' && velha[2][1]=='0' && velha[2][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[1][0]=='0' && velha[1][1]=='0' && velha[1][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[0][0]=='0' && velha[0][1]=='0' && velha[0][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][0]=='0' && velha[1][0]=='0' && velha[0][0]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][1]=='0' && velha[1][1]=='0' && velha[0][1]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][2]=='0' && velha[1][2]=='0' && velha[0][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][0]=='0' && velha[1][1]=='0' && velha[0][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[0][0]=='0' && velha[1][1]=='0' && velha[2][2]=='0' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][0]=='x' && velha[2][1]=='x' && velha[2][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[1][0]=='x' && velha[1][1]=='x' && velha[1][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[0][0]=='x' && velha[0][1]=='x' && velha[0][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][0]=='x' && velha[1][0]=='x' && velha[0][0]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][1]=='x' && velha[1][1]=='x' && velha[0][1]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][2]=='x' && velha[1][2]=='x' && velha[0][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[2][0]=='x' && velha[1][1]=='x' && velha[0][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        if(velha[0][0]=='x' && velha[1][1]=='x' && velha[2][2]=='x' )
            vencedor = 1,cont = 1,termina = 1;
        // Caso o jogador 1 ganhar, finaliza o laço.
        if(termina==1) break;
        // Soma 1  a nenhum... (caso não haja vencedor)
        nenhum++;
        // Verifica se ja aconteceram 9 rodadas
        if (nenhum==9) break;
        system("cls");
        cout << endl << joga1 << " =  X";
        cout << endl << joga2 << " =  0";
        mapa(teste);
        mapa_mod(velha);
        cout << joga2 << " digite a posicao que deseja jogar: ";
        cin >> posicao;
        // Verifica se a posição digitada ja foi usada
        temp = verifica_posicao(velha,posicao);
        while(temp == 1){
            cout << endl << "Vc digitou uma posicao ocupada!";
            cout << endl << "Digite novamente a posicao:";
            cin >> posicao;
            temp = verifica_posicao(velha,posicao);
        }
        // Insere posição na tabela
        if(posicao == '1') velha[2][0] = '0';
        if(posicao == '2') velha[2][1] = '0';
        if(posicao == '3') velha[2][2] = '0';
        if(posicao == '4') velha[1][0] = '0';
        if(posicao == '5') velha[1][1] = '0';
        if(posicao == '6') velha[1][2] = '0';
        if(posicao == '7') velha[0][0] = '0';
        if(posicao == '8') velha[0][1] = '0';
        if(posicao == '9') velha[0][2] = '0';
        system("cls");
        cout << endl << joga1 << " =  X";
        cout << endl << joga2 << " =  0";
        mapa(teste);
        mapa_mod(velha);
        // Verifica o ganhador
        if(velha[2][0]=='0' && velha[2][1]=='0' && velha[2][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[1][0]=='0' && velha[1][1]=='0' && velha[1][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[0][0]=='0' && velha[0][1]=='0' && velha[0][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[2][0]=='0' && velha[1][0]=='0' && velha[0][0]=='0' )
            vencedor = 2,cont = 1;
        if(velha[2][1]=='0' && velha[1][1]=='0' && velha[0][1]=='0' )
            vencedor = 2,cont = 1;
        if(velha[2][2]=='0' && velha[1][2]=='0' && velha[0][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[2][0]=='0' && velha[1][1]=='0' && velha[0][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[0][0]=='0' && velha[1][1]=='0' && velha[2][2]=='0' )
            vencedor = 2,cont = 1;
        if(velha[2][0]=='x' && velha[2][1]=='x' && velha[2][2]=='x' )
            vencedor = 2,cont = 1;
        if(velha[1][0]=='x' && velha[1][1]=='x' && velha[1][2]=='x' )
            vencedor = 2,cont = 1;
        if(velha[0][0]=='x' && velha[0][1]=='x' && velha[0][2]=='x' )
            vencedor = 2,cont = 1;
        if(velha[2][0]=='x' && velha[1][0]=='x' && velha[0][0]=='x' )
            vencedor = 2,cont = 1;
        if(velha[2][1]=='x' && velha[1][1]=='x' && velha[0][1]=='x' )
            vencedor = 2,cont = 1;
        if(velha[2][2]=='x' && velha[1][2]=='x' && velha[0][2]=='x' )
            vencedor = 2,cont = 1;
        if(velha[2][0]=='x' && velha[1][1]=='x' && velha[0][2]=='x' )
            vencedor = 2,cont = 1;
        if(velha[0][0]=='x' && velha[1][1]=='x' && velha[2][2]=='x' )
            vencedor = 2,cont = 1;
        nenhum++;
        if (nenhum==9) break;
    }
    // Apos o laço mostra o resultado correspondente
    if(vencedor == 1){
        system("cls");
        mapa_mod(velha);
        cout << "Parabens "<< joga1 << " vc venceu!";
    }
    if(vencedor == 2){
        system("cls");
        mapa_mod(velha);
        cout << "Parabens "<< joga2 << " vc venceu!";
    }
    if(nenhum >=9){
        system("cls");
        mapa_mod(velha);
        cout << endl << endl <<  "Nao houve vencedor";
    }
    return 0;
}




