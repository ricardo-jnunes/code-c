#include<iostream>
#include<string>
#include<cmath>
#include <sstream>
using namespace std;
int main (void){
    int i,x,y,blz,res,escolha;
    string z;
    int bin[8];
    string dec[8];
    int dec2[8];
    comeco:

    cout << "\nDigite 1 para n Binarios ";
    cout << "\nDigite 2 para n Octal ";
    cout << "\nDigite 3 para n Hexadecimal ";
    cout << "\nDigite qualquer outro numero p sair ";
    cin >> escolha;
    if ((escolha<1) || (escolha>3)){
        goto fim;
    }

    //BINARIO
    if (escolha==1){
    cout <<"Decimal para Binario " << endl;
    cin >> x;
    y=x;
    for (i=0;i<y;i++){
        bin[i]=(x%2);
        x=(x/2);
    }
    cout << "Dec. p/ Bin. " << endl;
    for (i=(y-1);i>-1;i--){
        cout << bin[i];
    }
    cout << endl;
    system ("PAUSE");

    do
    {
        blz=0;
        cout << "Binario para Decimal " << endl;
        cin >> z;
        res=0;
        for (i=0;i<8;i++){
            dec2[i]=0;
        }
        for(unsigned i=0;i<z.length();i++){
            dec[i]=z.substr(i,1);
            cout << " ------- " << dec[i] << endl; // separado a string em caracteres
            stringstream sst;                      //converte string para int
            sst << dec[i] << endl;                 //sst recebe a string
            sst >> dec2[i];                        //sst manda para dec2
           // cout << " convert. " << dec2[i] << endl << endl; //convertido de string para int
            if ((dec2[i]==0) || (dec2[i]==1)){
                blz=1;
            }else{
                cout << "Digite apenas numeros binarios! " << endl << endl;
            }
        }
    }while (blz!=1);
    int cont=z.length();
    for (unsigned i=0;i<z.length();i++){
        cont=cont-1;
        res = res + (dec2[i] * pow(2,cont));
    }
    cout << "Bin. p/ Dec. " <<endl;
    cout << res << endl;
    }

    // OCTAL
    if (escolha==2){
    cout <<"Decimal para Octal " << endl;
    cin >> x;
    for (i=0;i<8;i++){
        bin[i]=(x%8);
        x=(x/8);
    }
    cout << "Dec. p/ Octal " << endl;
    for (i=(8-1);i>-1;i--){
        cout << bin[i];
    }
    cout << endl;
    system ("PAUSE");
        cout << "Octal para Decimal " << endl;
        cin >> z;
        res=0;
        for (i=0;i<8;i++){
            dec2[i]=0;
        }
        for(unsigned i=0;i<z.length();i++){
            dec[i]=z.substr(i,1);
            cout << " ------- " << dec[i] << endl;
            stringstream sst;
            sst << dec[i] << endl;
            sst >> dec2[i];
        }
    int cont=z.length();
    for (unsigned i=0;i<z.length();i++){
        cont=cont-1;
        res = res + (dec2[i] * pow(8,cont));
    }
    cout << "Octal p/ Dec. " <<endl;
    cout << res << endl;
    }

    // HEXADECIMAL
    if (escolha==3){
        cout <<"Decimal para Hexadecimal " << endl;
        cin >> x;

    for (i=0;i<8;i++){
        bin[i]=(x%16);
        x=(x/16);
    }
    string HD[8];
    for (i=0;i<8;i++){

        if (bin[i]<10){
            std::string s;         //recebe uma var. string chamada s deve ser constant
            std::stringstream out; // funcao de conversao
            out << bin[i];         // o int eh mandado p conversao
            s = out.str();         // retorna o int p/  a string s
            HD[i]=s;               // HD[i] recebe o n int que eh agora eh mostrado em string
        }if(bin[i]==10){
            HD[i]="A";
        }if(bin[i]==11){
            HD[i]="B";
        }if(bin[i]==12){
            HD[i]="C";
        }if(bin[i]==13){
            HD[i]="D";
        }if(bin[i]==14){
            HD[i]="E";
        }if(bin[i]==15){
            HD[i]="F";
        }
    }
    cout << "Dec. p/ Hexad. " << endl;
    for (i=(8-1);i>-1;i--){
        cout << HD[i];
    }
    cout << endl;
    system ("PAUSE");
        cout << "Hexadecimal para Decimal " << endl;
        cout << "Se houver letras digite apenas MAIUSCULAS " << endl;
        cin >> z;
        res=0;
        for (i=0;i<8;i++){
            dec2[i]=0;
        }
  ///////////      cout << " tam do z " << z.length();
        for(unsigned i=0;i<z.length();i++){
            dec[i]=z.substr(i,1);
            cout << dec[i] << endl;
            if (dec[i]== "A"){
                dec2[i] = 10;
            }else{
            if (dec[i]== "B"){
                dec2[i] = 11;
            }else{
            if (dec[i]== "C"){
                dec2[i] = 12;
            }else{
            if (dec[i]== "D"){
                dec2[i] = 13;
            }else{
            if (dec[i]== "E"){
                dec2[i] = 14;
            }else{
            if (dec[i]== "F"){
                dec2[i] = 15;
            }else{
                cout << " ------- " << dec[i] << endl;
                stringstream sst;
                sst << dec[i] << endl;
                sst >> dec2[i];
            }}}}}}
        }
    int cont=z.length();
    for (unsigned i=0;i<z.length();i++){
        cont=cont-1;
        res = res + (dec2[i] * pow(16,cont));
    }
    cout << "Hexad. p/ Dec. " <<endl;
    cout << res << endl;
    }
    goto comeco;
    fim:
    return 0;
}
