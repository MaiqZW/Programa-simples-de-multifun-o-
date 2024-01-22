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

        // Utilizar um switch para realizar a ação com base na escolha
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
                cout<<"Você selecionou (SAIR)\n";
                break;
            default:
                cout << "Opção inválida! Por favor selecione as opções disponíveis (1 até 9 ou 0 para sair)" << endl;
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
    cout <<"============ Bem-Vindo para as tarefas de usuário ============\n";
    cout <<"==============================================================\n";
    cout <<"===  1 - Calcular a área de um terreno!                    ===\n";
    cout <<"===  2 - Calcular a média de um AV1, AV2, AV3!             ===\n";
    cout <<"===  3 - Determinar se o número informado é PAR ou IMPAR!  ===\n";
    cout <<"===  4 - Calcular o salário líquido (INSS)!                ===\n";
    cout <<"===  5 - Compra de produtos de informática!                ===\n";
    cout <<"===  6 - Calcular graus centígrados em fahrenheit!         ===\n";
    cout <<"===  7 - Ações de acordo com o semáfaro!                   ===\n";
    cout <<"===  8 - Números pares de 0 a 100 e sua soma!              ===\n";
    cout <<"===  9 - Tabuada                                           ===\n";
    cout <<"===  0 - Sair                                              ===\n";
    cout <<"==============================================================\n";
    cout <<"========= Selecione uma das opções acima por favor... ========\n";
    cout <<"==============================================================\n";
}
    
	



void calcularinss(){
	float HT, VH, SB, SL, inss, Aliq;    
    
    cout << "Diga quantas horas você trabalha por dia ?: ";
    
    while (!(cin >> HT)) {
        cout << "Por favor, só informe valores numéricos: ";
        cin.clear();             
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
    
    cout << "Quanto você ganha por hora ?: ";
    
    while (!(cin >> VH)) {
        cout << "Por favor, só informe valores numéricos: ";
        cin.clear();             
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
    
    SB = VH * (HT * 22); // O (HT * 22 ) é uma referência as horas trabalhadas por dia * 22 que são todos os dias trabalhados do mês!
    
    if (SB >= 0.0 && SB <= 1320.0) {
        Aliq = 0.075; // 7,5% de desconto
        inss = Aliq * SB;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Salário bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando o INSS de 7,50% do seu salário bruto" << endl;
        cout << fixed << setprecision(2) << "O seu salário líquido ficou no valor de: R$ " << SL << endl;
    }  
    else if (SB >= 1320.01 && SB <= 2571.29) {
        Aliq = 0.09; // 9% de desconto
        inss = Aliq * SB - 19.80;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Salário bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando o INSS de 9% do seu salário bruto + um desconto de R$ 19,80" << endl;
        cout << fixed << setprecision(2) << "O seu salário líquido ficou no valor de: R$ " << SL << endl;
    }
    
    else if (SB >= 2571.30 && SB <= 3856.94) {
        Aliq = 0.12; // 12% de desconto
        inss = Aliq * SB - 96.94;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Salário bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 12% do seu salário bruto + um desconto de R$ 96,94" << endl;
        cout << fixed << setprecision(2) << "O seu salário líquido ficou no valor de: R$ " << SL << endl;
    }
    else if (SB >= 3856.95 && SB <= 7507.49) {
        Aliq = 0.14; // 14% de desconto
        inss = Aliq * SB - 174.08;
        SL = SB - inss;
        
        cout << fixed << setprecision(2) << "Salário bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 14% do seu salário bruto + um desconto de R$ 174,08" << endl;
        cout << fixed << setprecision(2) << "O seu salário líquido ficou no valor de: R$ " << SL << endl;
    }
    else if (SB > 7507.49) {
        Aliq = 0.14; // 14% de desconto
        inss = Aliq * SB - 174.08;
        SL = (SB - inss) - 876.95;
        
        cout << fixed << setprecision(2) << "Salário bruto: R$ " << SB << endl;
        cout << fixed << setprecision(2) << "Descontando INSS de 14% do seu salário bruto + um desconto de R$ 174,08" << endl;
        cout << fixed << setprecision(2) << "Descontando ainda mais um valor fixo de R$ 876,95 pois você recebe acima de R$ 7507,49" << endl;
        cout << fixed << setprecision(2) << "O seu salário líquido ficou no valor de: R$ " << SL << endl;
    }
    
    
    
    
}
void calcularterreno(){
    	float largura,comprimento;
    	
    	cout <<"Informe a largura deste terreno em metros por favor!";
    	cin >>largura;
    	cout<<"Agora informe o comprimento deste terreno em metros por favor!";
    	cin >>comprimento;
    	cout <<fixed <<setprecision(2)<<"A área total deste terreno é de:"<<largura*comprimento<<" Metros"<<endl;
    	
    	
	}
	
	void calcularmedia(){
		float av1,av2,av3;
		
		cout<<"Quanto você tirou na sua AV1 ?";
		cin>>av1;
		cout<<"Quanto você tirou na sua AV2 ?";
		cin>>av2;
		cout<<"Quanto você tirou na sua AV3 ?";
		cin>>av3;
		cout<<fixed<<setprecision(1)<<"A sua média é :"<<(av1+av2+av3)/3<<endl;
		system("pause");
	}
	
	void numeroparimpar(){
		int numero;


    cout << "Digite um número inteiro: ";
    cin >> numero;

    
    if (numero % 2 == 0) {
        std::cout << numero << " é um número PAR." << std::endl;
    } else {
        std::cout << numero << " é um número ÍMPAR." << std::endl;
    }

   
}

void celcius(){
    double celsius, fahrenheit;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

 
    fahrenheit = (celsius * 9/5) + 32;

 
    cout << "A temperatura em graus Fahrenheit é: " << fahrenheit << endl;

   

}
	
	void comprarProdutos(){



    cout << "Lista de compras de informática:" << endl;

    string listaItens = ""; 
    double total = 00.00;
    char continuar;

    do {
        string item;
        double preco;

        cout << "Digite o nome do item de informática que você deseja adquirir: ";
        cin >> item;
        cout << "Digite o preço do item que você está adquirindo: ";
        cin >> preco;

        total += preco;  

        ostringstream ss;
        ss << preco;
        string precoString = ss.str();

        listaItens += "" + item + " - R$" + precoString + "\n";

        cout << "Deseja adicionar mais itens?(Utilize S para sim e N para não!): ";
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

    
    cout<<"Valor do somatório: "<<somatorio <<endl;
}

void semaforo(){
	using namespace std;


    char semaforo;

    cout << "Informe o estado do semáforo (R para vermelho, A para amarelo, V para verde): ";
    cin >> semaforo;

    if (semaforo == 'V' || semaforo == 'v') {
        cout << "Siga em frente! O sinal está verde." << endl;
    } else if (semaforo == 'A' || semaforo == 'a') {
        double distanciaCruzamento;
        cout << "Informe a distância do cruzamento em metros: ";
        cin >> distanciaCruzamento;

        if (distanciaCruzamento < 5.0) {
            cout << "Siga em frente com cuidado! Risco baixo de não passar a tempo." << endl;
        } else {
            cout << "Pare o veículo !!! a distância é muito grande, alto risco de acidente ou multa." << endl;
        }
    } else if (semaforo == 'R' || semaforo == 'r') {
        cout << "Pare! O sinal está vermelho." << endl;
    } else {
        cout << "Este semáforo não existe. Por favor, informe apenas R, A ou V." << endl;
    }

    

}


void tabuada(){
	int numero;

    cout << "Digite um número para a tabuada: ";
    cin >> numero;

    cout << "Tabuada de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }


}
	

	
