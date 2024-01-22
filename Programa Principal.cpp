#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <iomanip> 
#include <limits>  
#include <sstream>
using namespace std;

void calcularterreno();
void calcularmedia();
void numeroparimpar();
void calcularinss();
void exibirMenu();
void comprarProdutos();
void celcius();
void numerospares();
void semaforo();
void tabuada();

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int escolha;
    bool continuar = true;

    while (continuar) {
        exibirMenu();
        cin >> escolha;

        // Utilizar um switch para realizar a a��o com base na escolha
        switch (escolha) {
            case 1:
                calcularterreno();
                break;
            case 2:
                calcularmedia();
                break;
            case 3:
                numeroparimpar();
                break;
            case 4:
                calcularinss(); 
                break;
            case 5:
                comprarProdutos();
                break;
            case 6:
                celcius();
                break;
            case 7:
                semaforo();
                break;
            case 8:
                numerospares();
                break;
            case 9:
               tabuada();
                break;
            case 0:
                continuar = false;
                cout<<"Voc� selecionou (SAIR)\n";
                break;
            default:
                cout << "Op��o inv�lida! Por favor selecione as op��es dispon�veis (1 at� 9 ou 0 para sair)" << endl;
                break;
        }

        cout << "Pressione enter para confirmar!";
        cin.ignore(); 
        cin.get();    

        
        system("cls"); 
    }

    return 0;
}

void exibirMenu() {
    cout <<"==============================================================\n";
    cout <<"============ Bem-Vindo para as tarefas de usu�rio ============\n";
    cout <<"==============================================================\n";
    cout <<"===  1 - Calcular a �rea de um terreno!                    ===\n";
    cout <<"===  2 - Calcular a m�dia de um AV1, AV2, AV3!             ===\n";
    cout <<"===  3 - Determinar se o n�mero informado � PAR ou IMPAR!  ===\n";
    cout <<"===  4 - Calcular o sal�rio l�quido (INSS)!                ===\n";
    cout <<"===  5 - Compra de produtos de inform�tica!                ===\n";
    cout <<"===  6 - Calcular graus cent�grados em fahrenheit!         ===\n";
    cout <<"===  7 - A��es de acordo com o sem�faro!                   ===\n";
    cout <<"===  8 - N�meros pares de 0 a 100 e sua soma!              ===\n";
    cout <<"===  9 - Tabuada                                           ===\n";
    cout <<"===  0 - Sair                                              ===\n";
    cout <<"==============================================================\n";
    cout <<"========= Selecione uma das op��es acima por favor... ========\n";
    cout <<"==============================================================\n";
}
    
	



void calcularinss(){
	float HT, VH, SB, SL, inss, Aliq;    
    
    cout << "Diga quantas horas voc� trabalha por dia ?: ";
    
    while (!(cin >> HT)) {
        cout << "Por favor, s� informe valores num�ricos: ";
        cin.clear();             
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
    
    cout << "Quanto voc� ganha por hora ?: ";
    
    while (!(cin >> VH)) {
        cout << "Por favor, s� informe valores num�ricos: ";
        cin.clear();             
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
    
    SB = VH * (HT * 22); // O (HT * 22 ) � uma refer�ncia as horas trabalhadas por dia * 22 que s�o todos os dias trabalhados do m�s!
    
    if (SB >= 0.0 && SB <= 1320.0) {
        Aliq = 0.075; // 7,5% de desconto
        inss = Aliq * SB;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Sal�rio bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando o INSS de 7,50% do seu sal�rio bruto" << endl;
        cout << fixed << setprecision(2) << "O seu sal�rio l�quido ficou no valor de: R$ " << SL << endl;
    }  
    else if (SB >= 1320.01 && SB <= 2571.29) {
        Aliq = 0.09; // 9% de desconto
        inss = Aliq * SB - 19.80;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Sal�rio bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando o INSS de 9% do seu sal�rio bruto + um desconto de R$ 19,80" << endl;
        cout << fixed << setprecision(2) << "O seu sal�rio l�quido ficou no valor de: R$ " << SL << endl;
    }
    
    else if (SB >= 2571.30 && SB <= 3856.94) {
        Aliq = 0.12; // 12% de desconto
        inss = Aliq * SB - 96.94;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Sal�rio bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 12% do seu sal�rio bruto + um desconto de R$ 96,94" << endl;
        cout << fixed << setprecision(2) << "O seu sal�rio l�quido ficou no valor de: R$ " << SL << endl;
    }
    else if (SB >= 3856.95 && SB <= 7507.49) {
        Aliq = 0.14; // 14% de desconto
        inss = Aliq * SB - 174.08;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Sal�rio bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 14% do seu sal�rio bruto + um desconto de R$ 174,08" << endl;
        cout << fixed << setprecision(2) << "O seu sal�rio l�quido ficou no valor de: R$ " << SL << endl;
    }
    else if (SB > 7507.49) {
        Aliq = 0.14; // 14% de desconto
        inss = Aliq * SB - 174.08;
        SL = (SB - inss) - 876.95;
        
        cout << fixed << setprecision(2) << "Sal�rio bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 14% do seu sal�rio bruto + um desconto de R$ 174,08" << endl;
        cout << fixed << setprecision(2) << "Descontando ainda mais um valor fixo de R$ 876,95 pois voc� recebe acima de R$ 7507,49" << endl;
        cout << fixed << setprecision(2) << "O seu sal�rio l�quido ficou no valor de: R$ " << SL << endl;
    }
    
    
    
    
}
void calcularterreno(){
    	float largura,comprimento;
    	
    	cout <<"Informe a largura deste terreno em metros por favor!";
    	cin >>largura;
    	cout<<"Agora informe o comprimento deste terreno em metros por favor!";
    	cin >>comprimento;
    	cout <<fixed <<setprecision(2)<<"A �rea total deste terreno � de:"<<largura*comprimento<<" Metros"<<endl;
    	
    	
	}
	
	void calcularmedia(){
		float av1,av2,av3;
		
		cout<<"Quanto voc� tirou na sua AV1 ?";
		cin>>av1;
		cout<<"Quanto voc� tirou na sua AV2 ?";
		cin>>av2;
		cout<<"Quanto voc� tirou na sua AV3 ?";
		cin>>av3;
		cout<<fixed<<setprecision(1)<<"A sua m�dia � :"<<(av1+av2+av3)/3<<endl;
		system("pause");
	}
	
	void numeroparimpar(){
		int numero;


    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    
    if (numero % 2 == 0) {
        std::cout << numero << " � um n�mero PAR." << std::endl;
    } else {
        std::cout << numero << " � um n�mero �MPAR." << std::endl;
    }

   
}

void celcius(){
    double celsius, fahrenheit;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

 
    fahrenheit = (celsius * 9/5) + 32;

 
    cout << "A temperatura em graus Fahrenheit �: " << fahrenheit << endl;

   

}
	
	void comprarProdutos(){



    cout << "Lista de compras de inform�tica:" << endl;

    string listaItens = ""; 
    double total = 00.00;
    char continuar;

    do {
        string item;
        double preco;

        cout << "Digite o nome do item de inform�tica que voc� deseja adquirir: ";
        cin >> item;
        cout << "Digite o pre�o do item que voc� est� adquirindo: ";
        cin >> preco;

        total += preco;  

        ostringstream ss;
        ss << preco;
        string precoString = ss.str();

        listaItens += "" + item + " - R$" + precoString + "\n";

        cout << "Deseja adicionar mais itens?(Utilize S para sim e N para n�o!): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "Itens:\n" << listaItens;
    cout << "Total: R$" << total << endl;


}
void numerospares(){
	int somatorio=0;   
   
   
   for(int i =0;i<=100;i+=2){
       cout<<i<<endl;
       somatorio=somatorio+i;
   }

    
    cout<<"Valor do somat�rio: "<<somatorio <<endl;
}

void semaforo(){
	using namespace std;


    char semaforo;

    cout << "Informe o estado do sem�foro (R para vermelho, A para amarelo, V para verde): ";
    cin >> semaforo;

    if (semaforo == 'V' || semaforo == 'v') {
        cout << "Siga em frente! O sinal est� verde." << endl;
    } else if (semaforo == 'A' || semaforo == 'a') {
        double distanciaCruzamento;
        cout << "Informe a dist�ncia do cruzamento em metros: ";
        cin >> distanciaCruzamento;

        if (distanciaCruzamento < 5.0) {
            cout << "Siga em frente com cuidado! Risco baixo de n�o passar a tempo." << endl;
        } else {
            cout << "Pare o ve�culo !!! a dist�ncia � muito grande, alto risco de acidente ou multa." << endl;
        }
    } else if (semaforo == 'R' || semaforo == 'r') {
        cout << "Pare! O sinal est� vermelho." << endl;
    } else {
        cout << "Este sem�foro n�o existe. Por favor, informe apenas R, A ou V." << endl;
    }

    

}


void tabuada(){
	int numero;

    cout << "Digite um n�mero para a tabuada: ";
    cin >> numero;

    cout << "Tabuada de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }


}
	

	
