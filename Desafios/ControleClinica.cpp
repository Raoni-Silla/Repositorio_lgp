#include <math.h> // função matematica
#include <iostream> // Biblioteca de entrada e saída padrão
#include <cstring>  
#include <cctype> // Para a função tolower que serve para converter caracteres para minúsculo
#include <string> // Biblioteca para manipulação de strings C++


using namespace std;

struct cidade{
    int codigoCidade;
    char nome[20];
    char estado[3];
};

struct racas{
    int codigoRaca;
    char nome[20];
    char descraca[100];
    
};

struct animal{
    int codigoAnimal;
    char nome[20];
    int codigoRaca;
    int idade;
    float peso;
    int codTutor;

};
struct tutor{
    int codigoTutor;
    char nome[20];
    char cpf[14];
    char telefone[15];
    char endereco[50];
    int codigoCidade;
    char nomeCidade[20];
};
struct veterinario{
    int codigoVeterinario;
    char nome[20];
    char cpf[15];
    char telefone[15];
    char endereco[50];
    int codigoCidade;
};
struct consulta{
    int codigoConsulta;
    int codigoAnimal;
    int codigoVeterinario;
    char dataInicial[17];
    char dataFinal[17];
    char hora[7];
    char observacao[100];
    float valorConsulta;
    
};



void cadastrarCidade(struct cidade cidades[], int &contCidades)

{

    int i = 0; // Inicializa o índice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){

        cout << "----------------------------------" << endl;
        cout << "Digite o codigo da cidade " << i + 1 << ": ";
        cin >> cidades[i].codigoCidade; // Leitura do codigo da cidade

        cout << "Digite o nome da cidade " << i + 1 << ": ";
        cin.ignore();
        cin.getline(cidades[i].nome, 20); //serve para ler variaveis char

        cout << "Digite o estado da cidade " << i + 1 << ": ";

        cin.getline(cidades[i].estado, 3);

        cout <<"Digite 0 para sair ou 1 para continuar: ";
        cin >> saida; // Leitura do codigo da cidade

            contCidades++; // Incrementa o contador de cidades apenas se o usuario optar por continuar
         cout << "----------------------------------" << endl;
    }

}

void cadastrarRaca (struct racas raca[], int &contRacas){
   
    int i = 0; // Inicializa o i­ndice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){
        cout << "----------------------------------" << endl;
        cout << "Digite o codigo da raça "<< ": ";
        cin >> raca[i].codigoRaca; // Leitura do codigo da raca
        
        cout << "Digite o nome da raça " << i + 1 << ": ";
        cin.ignore(); // Para evitar problemas com entrada de strings, tirando espaÃ§os e etc
        cin.getline(raca[i].nome, 20); //serve para ler variaveis char
        
        cout << "Digite a descrição da raça "<< ": ";
        
        cin.getline(raca[i].descraca, 100);

        cout <<"Digite 0 para sair ou 1 para continuar: ";
        cin >> saida; 
      
        contRacas++; //   incrementa se for continuar
}

        cout << "----------------------------------" << endl;
    

}

void cadastrarAnimal (struct animal animais[], int  &contAnimais){
    
    
    int i = 0; // Inicializa o i­ndice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){
        cout << "----------------------------------" << endl;
        cout << "Digite o codigo do animal "<< ": ";
        cin >> animais[i].codigoAnimal; // Leitura do codigo do animal
        
        cout << "Digite o nome do animal " <<  ": ";
        cin.ignore(); // Para evitar problemas com entrada de strings, tirando espaços e etc
        cin.getline(animais[i].nome, 20); //serve para ler variaveis char
        
        cout << "Digite a idade do animal "<< ": ";
       
        cin >> animais[i].idade;
        
        cout << "Digite o peso do animal (apenas numeros)"<< ": ";
        
        cin >> animais[i].peso;

        cout << "digite o codigo do tutor do animal "<< ": ";
        cin >> animais[i].codTutor; // Leitura do codigo do tutor do animal

        cout << "digite o codigo da raca do animal "<< ": ";
        cin >> animais[i].codigoRaca; // Leitura do codigo da raca do animal
        
        cout << "digite 0 para sair ou 1 para continuar: ";
        cin >> saida; 
        
            contAnimais++; // Incrementa o contador de animais apenas se o usuario optar por continuar
        
        cout << "----------------------------------" << endl;
    }

}



void cadastrarTutor (struct tutor tutores[], int &contTutores){
    
    int i = 0; // Inicializa o i­ndice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){  //laço usado pra ler as informaçoes das estrturas enquanto o indice i < 10 e a variavel saida for diferente de 0, ou seja, enquanto o usuario nao digitar 0, o laço continua

        cout << "----------------------------------" << endl;
        cout << "Digite o codigo do tutor "<< ": ";
        cin >> tutores[i].codigoTutor; // Leitura do codigo do tutor
        
        cout << "Digite o nome do tutor " <<  ": ";
        cin.ignore(); // Para evitar problemas com entrada de strings, tirando espaaços e etc
        cin.getline(tutores[i].nome, 20); //serve para ler variaveis char
        
        cout << "Digite o cpf do tutor (sem pontos ou traços) "<< ": ";
        
        cin.getline(tutores[i].cpf, 14);
       //VerificadorCpf(tutores[i].cpf); // Verifica se o CPF é válido
        
        cout << "Digite o telefone do tutor "<< ": "; 
        cin.getline(tutores[i].telefone, 15);
        
        cout << "Digite a rua de morada do tutor "<< ": ";

        cin.getline(tutores[i].endereco, 50);

        cout<< "Digite o codigo da cidade do tutor "<< ": ";
        cin >> tutores[i].codigoCidade; // Leitura do codigo da cidade do tutor



        cout<< "Digite 0 para sair ou 1 para continuar: ";
        cin >> saida; 

        
        
            contTutores++; // Incrementa o contador de tutores apenas se o usuÃ¡rio optar por continuar
        
        cout << "----------------------------------" << endl;


    }

}
void cadastrarVeterinario (struct veterinario veterinarios[], int & contVeterinarios){
     
    int i = 0; // Inicializa o i­ndice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida !=0; i++){
        cout << "----------------------------------" << endl;
       

         cout <<"Digite o codigo do veterinario: " ;
         cin >> veterinarios[i].codigoVeterinario; 
       
        cout << "Digite o nome do veterinario " <<  ": ";
        cin.ignore(); // Para evitar problemas com entrada de strings, tirando espaços e etc
        cin.getline(veterinarios[i].nome, 20); //serve para ler variaveis char
        
        cout << "Digite o cpf do veterinario (sem traços nem pontos)"<< ": ";
       
        cin.getline(veterinarios[i].cpf, 15);
       
        
        cout << "Digite o telefone do veterinario "<< ": ";
       
        cin.getline(veterinarios[i].telefone, 15);
        
        cout << "Digite o a rua de moradia do veterinario "<< ": ";
        
        cin.getline(veterinarios[i].endereco, 50);

        cout << "Digite o codigo da cidade do veterinario "<< ": "; 
        cin >> veterinarios[i].codigoCidade; // Leitura do codigo da cidade do veterinario

        cout<< "Digite 0 para sair ou 1 para continuar: ";
        cin >> saida;
        
        cout << "----------------------------------" << endl;

       
            contVeterinarios++; // Incrementa o contador de veterinÃ¡rios apenas se o usuÃ¡rio optar por continuar
        
    }
}

void buscaRaca(int codigoRacaInclusao, int contRacas, struct racas raca[]);

// Adicione o protótipo da função BuscaCidade
void BuscaCidade(int codigoCidadeInclusao, int contCidades, struct cidade verificadora[]);

void buscaAnimais (int codigoAnimal, int contAnimais, struct animal animais[], struct racas raca[], int &contRacas) {
    // Função para buscar um animal pelo código
    bool encontrado = false; // Variavel para verificar se o codigo foi encontrado

    for (int i = 0; i < contAnimais; i++) {
        if (codigoAnimal == animais[i].codigoAnimal) {
            // Se o codigo do usuario for encontrado, exibe os dados
            cout << "-----------------------------------" << endl;
            cout << "Animal achado com sucesso!" << endl;
            cout << "Encontrado de acordo com o codigo: " << animais[i].codigoAnimal << endl;
            cout << "Nome do animal encontrado de acordo com o codigo: " << animais[i].nome << endl;
            buscaRaca(animais[i].codigoRaca, contRacas, raca); // Chama a função buscaRaca para encontrar a raça do animal
            // Corrija a chamada de buscaTutor conforme necessário, removendo parâmetros inválidos
        
            encontrado = true; // Marca que o codigo foi encontrado
            break; // Sai do loop se o codigo for encontrado
        } else if (animais[i].codigoAnimal > codigoAnimal) {
            break; // Se o código do animal atual for maior, não há necessidade de continuar a busca
        }
    }
    if (!encontrado) {
        // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
        cout << "'ERRO' Animal nao foi encontrado" << endl; 
    }
}

void buscaTutor( int codigoTutorInclusao, int contTutores, struct tutor tutores[], cidade cidades[], int contCidades);

void buscaVeterinario ( int codigoVeterinario, struct veterinario veterinarios[], int contVeterinarios, struct cidade cidades[], int contCidades) {
    // Função para buscar um veterinário pelo código
    bool encontrado = false; // Variavel para verificar se o codigo foi encontrado

    for (int i = 0; i < contVeterinarios; i++) {
        if (codigoVeterinario == veterinarios[i].codigoVeterinario) {
            // Se o codigo do usuario for encontrado, exibe os dados
            cout << "-----------------------------------" << endl;
            cout << "Veterinário achado com sucesso!" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Encontrado de acordo com o codigo: " << veterinarios[i].codigoVeterinario << endl;
            cout << "Nome do veterinário encontrado de acordo com o codigo: " << veterinarios[i].nome << endl;
            BuscaCidade(veterinarios[i].codigoCidade, contCidades, cidades); // Chama a função BuscaCidade para encontrar a cidade do veterinário
            cout << "-----------------------------------" << endl;
            encontrado = true; // Marca que o codigo foi encontrado
            break; // Sai do loop se o codigo for encontrado
        } else if (veterinarios[i].codigoVeterinario > codigoVeterinario) {
            break; // Se o código do veterinário atual for maior, não há necessidade de continuar a busca
        }
    }
    if (!encontrado) {
        // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
        cout << "'ERRO' Veterinário nao foi encontrado" << endl; 
    }

}

void exibirConsultasIntervalos(char dataInicial [], char dataFinal[], char animais[], char veterinario[], float valorConsulta, int contConsultas) {
   
       
   // o strcmp serve para comparar duas strings, retornando um valor negativo se a primeira for menor que a segunda, zero se forem iguais e um valor positivo se a primeira for maior que a segunda
    if (strcmp(dataInicial, dataFinal) > 0) 
    {
        cout << "Data inicial deve ser anterior à data final." << endl;
        return; // Se a data inicial for maior que a data final, exibe mensagem de erro e sai da função
    }else if (strcmp(dataInicial, dataFinal) == 0) {
        cout << "Data inicial e final são iguais." << endl;
        return; // Se a data inicial for igual à data final, exibe mensagem de erro e sai da função
    }else {
        cout << "-----------------------------------" << endl;
        cout << "Consultas entre " << dataInicial << " e " << dataFinal << ":" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Exibindo consultas..." << endl;
        cout << "-----------------------------------" << endl;
        cout << "animal cadastrado na consulta: " << animais << endl;
        cout << "------------------------------------" << endl;
        cout << "Veterinário responsável: " << veterinario << endl;
        cout << "------------------------------------" << endl;
        cout << "Valor da consulta: R$ " << valorConsulta << endl;
        cout << "-----------------------------------" << endl;
        cout << "Digite quantas consultas foram realizadas: ";
        cin >> contConsultas; // Leitura do número de consultas realizadas
        cout << "-----------------------------------" << endl;
        cout <<"Valor total de consultas: R$ " << (contConsultas * valorConsulta) << endl; // Exibe o valor total das consultas realizadas



        
    }
}

void cadastrarConsulta (struct consulta consultas[], int &contConsultas, int contAnimais, struct animal animais[],struct racas raca[], int &contRacas, tutor tutores[], int contTutores, cidade cidades[], int contCidades, struct veterinario veterinarios[], int contVeterinarios){
    int i = 0; // Inicializa o índice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){
        cout << "----------------------------------" << endl;

        consultas[i].codigoConsulta = consultas[i].codigoConsulta + 1; // Incrementa o código da consulta

        cout << "Digite 0 para sair ou 1 para continuar: ";
        cin >> saida;
        if (saida == 0) {
            cout << "Cadastro de consulta encerrado." << endl;
            return; // Se o usuário não quiser continuar, encerra o cadastro e volta para o menu principal
        }
        cout << "Digite o código do animal: ";
        cin.ignore(); 
        cin >> consultas[i].codigoAnimal;
        cout << "----------------------------------" << endl;
        buscaAnimais(consultas[i].codigoAnimal, contAnimais, animais, raca, contRacas); // Verifica se o código do animal é válido
        buscaTutor(consultas[i].codigoAnimal, contTutores, tutores, cidades, contCidades); // Verifica se o código do tutor é válido
        cout << "----------------------------------" << endl;
        cout << "Digite o código do veterinário: ";
        cin.ignore(); 
        cin >> consultas[i].codigoVeterinario;
        buscaVeterinario(consultas[i].codigoVeterinario, veterinarios, contVeterinarios, cidades, contCidades ); // Verifica se o código do veterinário é válido
        cout << "----------------------------------" << endl;

        cout << "Digite a data inicial da consulta(ano-mês-dia): ";
        cin.ignore(); // Limpa o buffer antes de ler a data
        cin.getline(consultas[i].dataInicial, 17); // Leitura da data inicial da consulta

        cout << "Digite a data final da consulta(ano-mês-dia): ";
        cin.getline(consultas[i].dataFinal, 17); // Leitura da data final da consulta
         

        cout << "Digite a hora da consulta: ";
        cin.getline(consultas[i].hora, 7);

        cout << "Digite a observação da consulta: ";
        cin.getline(consultas[i].observacao, 100);

        cout << "Digite o valor da consulta: ";
        cin >> consultas[i].valorConsulta;
       cout << "----------------------------------" << endl;
        exibirConsultasIntervalos(consultas[i].dataInicial, consultas[i].dataFinal, animais[i].nome, veterinarios[i].nome,consultas[i].valorConsulta, contConsultas); // Exibe as consultas dentro do intervalo de datas

        

        
            contConsultas++; // Incrementa o contador de consultas
        

        cout << "----------------------------------" << endl;
    }
}

void buscaVeterinarioConsulta( int codigoVeterinario, struct veterinario veterinarios[], int &contVeterinarios, struct cidade cidades[], int &contCidades, int &verificador) {
    bool encontrado = false; // Variavel para verificar se o codigo foi encontrado

    for (int i = 0; i < contVeterinarios; i++) {
        if (codigoVeterinario == veterinarios[i].codigoVeterinario) {
            // Se o codigo do usuario for encontrado, exibe os dados
            cout << "-----------------------------------" << endl;
            cout << "você foi achado com sucesso!" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Dados encontrado de acordo com o codigo: " << veterinarios[i].codigoVeterinario << endl;
            cout<< "--------------------------------" << endl;
            cout << "seu nome: " << veterinarios[i].nome << endl;
            cout << "-----------------------------------" << endl;
            cout << "seu cpf: " << veterinarios[i].cpf << endl;
            cout << "-----------------------------------" << endl;
            cout << "seu telefone: " << veterinarios[i].telefone << endl;
            cout << "-----------------------------------" << endl;
            cout << "seu endereco: " << veterinarios[i].endereco << endl;
            cout << "-----------------------------------" << endl;
            cout << "sua cidade: " << endl;
            cout << "-----------------------------------" << endl;
            BuscaCidade(veterinarios[i].codigoCidade, contCidades, cidades); // Chama a função BuscaCidade para encontrar a cidade do veterinário
            cout << "-----------------------------------" << endl;
            encontrado = true; // Marca que o codigo foi encontrado
            verificador = 1; // Marca que o veterinário foi encontrado
            break; // Sai do loop se o codigo for encontrado

        } else if (veterinarios[i].codigoVeterinario > codigoVeterinario) {
            verificador = 0; // Marca que o veterinário não foi encontrado
            break; // Se o código do veterinário atual for maior, não há necessidade de continuar a busca
        }
    }
    if (!encontrado) {
        // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
        cout << "'ERRO' Veterinário nao foi encontrado" << endl; 
    }
}

void cadastrarConsultaVeterinario (struct consulta consultas[], int &contConsultas, int contAnimais, struct animal animais[],struct racas raca[], int &contRacas, tutor tutores[], int contTutores, cidade cidades[], int contCidades, struct veterinario veterinarios[], int contVeterinarios, int &verificador) {

    // Função para cadastrar uma consulta veterinária, de acordo com o veterinario especificado pelo usuário
    cout << "----------------------------------" << endl;
    
    int i = 0; // Inicializa o índice i para o loop de cadastro
    for (int saida = 1; i < 10 && saida != 0; i++){
        cout << "----------------------------------" << endl;
        cout << "digite se deseja continuar com o cadastro de consulta? (1-sim/0-nao): ";
        int concluir;
        cin >> concluir; // Pergunta se o usuário deseja continuar com o cadastro de consulta
        if (concluir == 0) {
            cout << "Cadastro de consulta encerrado." << endl;
            return; // Se o usuário não quiser continuar, encerra o cadastro e volta para o menu principal
        }
        cout << "olá, veterinário, vamos cadastrar uma consulta!" << endl;
        cout << "----------------------------------" << endl;
        cout << "Digite o seu código: ";
        cin >> consultas[i].codigoVeterinario; // Leitura do código da consulta
        cout << "----------------------------------" << endl;
        buscaVeterinarioConsulta(consultas[i].codigoVeterinario, veterinarios, contVeterinarios, cidades, contCidades, verificador); // Verifica se o código do veterinário é válido
        cout << "----------------------------------" << endl;

        if (verificador == 0) {
            cout << "Veterinário não encontrado. Encerrando o cadastro." << endl;
            return; // Se o veterinário não for encontrado, encerra o cadastro
        }else {
        cout << "Digite o código do animal: ";
        cin.ignore(); 
        cin >> consultas[i].codigoAnimal;
        cout << "----------------------------------" << endl;
        buscaAnimais(consultas[i].codigoAnimal, contAnimais, animais, raca, contRacas); // Verifica se o código do animal é válido
        buscaTutor(consultas[i].codigoAnimal, contTutores, tutores, cidades, contCidades); // Verifica se o código do tutor é válido
        cout << "----------------------------------" << endl;

        cout << "Digite a data inicial da consulta/acompanhamento(ano-mês-dia): ";
        cin.ignore(); // Limpa o buffer antes de ler a data
        cin.getline(consultas[i].dataInicial, 17); // Leitura da data inicial da consulta
        cout << "----------------------------------" << endl;
       
        cout << "Digite a data final da consulta/acompanhamento(ano-mês-dia): ";
        cin.getline(consultas[i].dataFinal, 17); // Leitura da data final da consulta
         
        cout << "----------------------------------" << endl;
        cout << "Digite a hora marcada da consulta: ";
        cin.getline(consultas[i].hora, 7);
        cout << "----------------------------------" << endl;
        cout << "Digite a observação da consulta: ";
        cin.getline(consultas[i].observacao, 100);
        cout<< "----------------------------------" << endl;
        cout << "Digite o valor da consulta: ";
        cin >> consultas[i].valorConsulta;
        cout << "----------------------------------" << endl;
        cout <<"deseja continuar pro total do valor da consulta? (1-sim/0-nao): ";
        int continuar;
        cin >> continuar; // Pergunta se o usuário deseja continuar com o total do valor da consulta
        if (continuar == 1) {
            exibirConsultasIntervalos(consultas[i].dataInicial, consultas[i].dataFinal, animais[i].nome, veterinarios[i].nome, consultas[i].valorConsulta, contConsultas); // Exibe as consultas dentro do intervalo de datas
        } 

         
        }
    }    

}
bool VerificadorCpf(string cpf) {
    // Verifica se o tamanho é 11 e se todos os dígitos são iguais
    if (cpf.length() != 11 || cpf == string(11, cpf[0])) // cpf == string(11, cpf[0]) verifica se todos os dígitos são iguais, ou seja, se o cpf é igual a 11111111111, 22222222222, etc.
    {
        return false;
    }  //verificando se o cpf tem 11 digitos e se todos os dígitos são iguais, se for igual a 11, retorna falso, ou seja, cpf inválido

    // Cálculo do primeiro dígito verificador, feito com base nos 9 primeiros dígitos do CPF e usado operador ternário para simplificar a lógica
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i); // o cpf[i] - '0' converte o caractere do CPF para um inteiro, subtraindo o valor ASCII do caractere '0', assim, se o dígito for '1', ele se torna 1, se for '2', ele se torna 2, e assim por diante, ou seja, a multiplicação é feita com o dígito do CPF convertido para inteiro e o índice da iteração diminuído de 10
    }
    int dig1 = (soma % 11 < 2) ? 0 : 11 - (soma % 11); // operador ternário, se o resto da divisão da soma por 11 for menor que 2, o dígito é 0, caso contrário, é 11 menos o resto da divisão, entao a sintaxe do operador ternário é (condição) ? valor_se_verdadeiro : valor_se_falso;

    // Cálculo do segundo dígito verificador, calcula da mesma forma, mas agora com os 9 primeiros dígitos do CPF e o primeiro dígito verificador, todos multiplicados por 11 menos o índice
    soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    soma += dig1 * 2;
    int dig2 = (soma % 11 < 2) ? 0 : 11 - (soma % 11); //operador ternario 

    // Verifica se os dígitos calculados batem com os fornecidos
    if (cpf[9] - '0' == dig1 && cpf[10] - '0' == dig2) // cpf[9] - '0' converte o caractere do CPF para um inteiro, subtraindo o valor ASCII do caractere '0', assim, se o dígito for '1', ele se torna 1, se for '2', ele se torna 2, e assim por diante, entao quando o cpf[9] - '0' for igual ao dig1, significa que o dígito verificador 1 do CPF é válido, e quando o cpf[10] - '0' for igual ao dig2, significa que o dígito verificador 2 do CPF é válido
    {
        cout << "CPF válido!" << endl;
        return true;
    } else {
        cout << "CPF inválido!" << endl;
        return false;
    }
}


void MostrarDados (tutor N[], int contN){
    cout << "-----------------------------------------------\n";
    cout << "Mostrando Dados\n";
    cout << "Código\tNome\tCPF\tTelefone\tEndereço\tCódigo Cidade\n";

    for (int i = 0; i < contN; i++){
        cout << N[i].codigoTutor << "\t" 
             << N[i].nome << "\t" 
             << N[i].cpf << "\t" 
             << N[i].telefone << "\t" 
             << N[i].endereco << "\t" //o \t significa que ele vai pular uma tabulação, uma tabulação é um espaço em branco que serve para organizar melhor os dados
             << N[i].codigoCidade << endl;
    }
}




//busca sequencial pra achar tutor
void BuscaCidade(int codigoCidadeInclusao, int contCidades, struct cidade verificadora[]){
       
        bool encontrado = false; // Variavel para verificar se o codigo foi encontrado
      
      
        for (int i = 0; i < contCidades; i++)// busca sequencial para encontrar a cidade pelo codigo
        {
            if (codigoCidadeInclusao ==  verificadora[i].codigoCidade){
                // Se o codigo do usuario for encontrado, exibe os dados
                cout << "cidade achada com sucesso!"<<endl;
                cout <<"encontrado de acordo com o codigo: " << verificadora[i].codigoCidade << endl;
                cout << "cidade encontrada de acordo com o codigo: " << verificadora[i].nome<< endl;
                cout <<"UF da cidade encontrada de acordo com o codigo: "<< verificadora[i].estado<<endl;
                encontrado = true; // Marca que o codigo foi encontrado
                break; // Sai do loop se o codigo for encontrado

            }else if(verificadora[i].codigoCidade > codigoCidadeInclusao ){
               
               break;
            }
        }
         if (!encontrado){
            // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
           cout << "'ERRO'User nao foi encontrado" << endl; // 
       }
}




void inclusaoTutor(tutor S[], tutor T[], tutor N[], int& contS,int contCidades, struct cidade verificadora[])
// corrigir 
{
    cout << "-----------------------------------------------\n";
    cout << "Sistema de Inclusao de Tutor\n";
    int qtdInclusoes;
    cout << "************************************************\n";
    cout << "Quantos tutores deseja incluir? ";
    cin >> qtdInclusoes;
    cin.ignore();

    // Inserindo novos tutores em S
    
   for (int i = 0; i < qtdInclusoes; i++) {
        int pos = contS + i; // Posição onde o novo tutor será inserido, pra nao sobrescrever os dados já existentes ele insere na ultima posição do vetor S, ou seja S[contS + i] se contS for 0, a primeira posição será S[0], se contS for 1, a primeira posição será S[1], e assim por diante, ou seja, ele vai inserindo os dados na ultima posição do vetor S, e assim vai incrementando o contador contS, outro exemplo é S [contS + 1] se contS for 0, a segunda posição será S[1], se contS for 1, a segunda posição será S[2], e assim por diante, ou seja, ele vai inserindo os dados na ultima posição do vetor S, e assim vai incrementando o contador contS
        if (pos >= 10) {
            cout << "Limite de tutores atingido. Não é possível incluir mais." << endl;
            break; // Se o limite de tutores for atingido, encerra a inclusão
        }
        cout << "\n-----------------------------------------------\n";
        cout << "Sistema de Inclusao de Tutor\n";
        cout << "-----------------------------------------------\n";

        cout << "Digite o codigo do tutor: ";
        cin >> S[pos].codigoTutor;
        cin.ignore();

        cout << "Digite o nome do tutor: ";
        cin.getline(S[pos].nome, 20);

        cout << "Digite o cpf do tutor: ";
        cin.getline(S[pos].cpf, 14);
        VerificadorCpf(S[pos].cpf); // Verifica se o CPF é válido

        cout << "Digite o telefone do tutor: ";
        cin.getline(S[pos].telefone, 15);

        cout << "Digite o endereco do tutor: ";
        cin.getline(S[pos].endereco, 50);

        cout << "Digite o codigo da cidade: ";
        cin >> S[pos].codigoCidade;

        BuscaCidade(S[pos].codigoCidade, contCidades, verificadora);// Busca a cidade correspondente ao código informado
        MostrarDados(S, contS); // Mostra os dados dos tutores já cadastrados
        cin.ignore();
    }


    // Intercalando S e T em N ordenadamente por codigoTutor
    int i = 0, j = 0, k = 0; int contN;

    
    while (i < contS && j < contS) {
        if (S[i].codigoTutor < T[j].codigoTutor) {
            N[k] = S[i];
            i++;
        } else {
            N[k] = T[j];
            j++;
        }
        k++;
    }

    while (i < contS) {
        N[k] = S[i];
        k++;
    }

    while (j < contS) {
        N[k] = T[j];   
        k++;
    }

   contN = k; // Atualiza o contador de N com o número total de tutores incluídos

    cout << "\nInclusão conclui­da com sucesso!\n";
    MostrarDados(N, contN);
    cout << "-----------------------------------------------\n";
}


void buscaTutor( int codigoTutorInclusao, int contTutores, struct tutor tutores[], cidade cidades[], int contCidades){
    
    bool encontrado = false; // Variavel para verificar se o codigo foi encontrado
    for (int i = 0; i < contTutores; i++){
        if (codigoTutorInclusao == tutores[i].codigoTutor){
            // Se o codigo do usuario for encontrado, exibe os dados
            cout << "-----------------------------------" << endl;
            cout << "Tutor achado com sucesso!"<<endl;
            cout <<"Encontrado de acordo com o codigo: " << tutores[i].codigoTutor << endl;
            cout << "Nome do tutor encontrado de acordo com o codigo: " << tutores[i].nome<< endl;
            cout<< "------------------------------" << endl;
            BuscaCidade( tutores[i].codigoCidade, contCidades, cidades); // Chama a função BuscaCidade para encontrar a cidade do tutor
            cout <<"------------------------------------" << endl;
            encontrado = true; // Marca que o codigo foi encontrado
            break; // Sai do loop se o codigo for encontrado

        }else if(tutores[i].codigoTutor > codigoTutorInclusao ){
           
           break;
        }
    }
     if (!encontrado){
        // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
       cout << "'ERRO'User nao foi encontrado" << endl; //
    }
}//nome do tutor, nome cidade






// Definição da função buscaRaca fora de qualquer outra função
void buscaRaca(int codigoRacaInclusao, int contRacas, struct racas raca[]){
    // Função para buscar uma raça pelo código

    bool encontrado = false; // Variavel para verificar se o codigo foi encontrado

    for (int i = 0; i < contRacas; i++){
        if (codigoRacaInclusao == raca[i].codigoRaca){
            // Se o codigo do usuario for encontrado, exibe os dados
            cout << "-----------------------------------" << endl;
            cout << "Raça achada com sucesso!"<<endl;
            cout <<"Encontrado de acordo com o codigo: " << raca[i].codigoRaca << endl;
            cout << "Raça encontrada de acordo com o codigo: " << raca[i].nome<< endl;
            cout <<"descrição da raça encontrada de acordo com o codigo: "<< raca[i].descraca<<endl;
            cout << "-----------------------------------" << endl;
            encontrado = true; // Marca que o codigo foi encontrado
            break; // Sai do loop se o codigo for encontrado

        }else if(raca[i].codigoRaca > codigoRacaInclusao ){
           
           break;
        }
    }
     if (!encontrado){
        // Se o codigo do usuario nao for encontrado, exibe mensagem de erro
       cout << "'ERRO'User nao foi encontrado" << endl; // 
   }
} //descricao raca


//funcao nao completa, mas que deve ser implementada para buscar um tutor pelo código
// funcao pra inclusao de novos animais 

void buscaRaca(int codigoRacaInclusao, int contRacas, struct racas raca[]);

void inclusaoAnimal (animal Sequencial[], animal transacao[], animal atualizado[], int &contAnimais, int &contRacas, struct racas raca[], int &contTutores, struct tutor tutores[], cidade cidades[], int contCidades){
     int qtdInclusoes;
    cout <<"Digite quantos animais deseja incluir: ";
    cin >> qtdInclusoes; // Lê a quantidade de inclusões que o usuário deseja fazer 
   
    
    for (int i = 0; i < qtdInclusoes; i++) {
        int pos = contAnimais + i;// Posição onde o novo animal será inserido, pra nao sobrescrever os dados já existentes ele insere na ultima posição do vetor Sequencial, ou seja Sequencial[contAnimais + i] se contAnimais for 0, a primeira posição será Sequencial[0], se contAnimais for 1, a primeira posição será Sequencial[1], e assim por diante, ou seja, ele vai inserindo os dados na ultima posição do vetor Sequencial, e assim vai incrementando o contador contAnimais

        cout << "\n-------------------------------------\n";
        cout << "Sistema de inclusão de novos animais\n";
        cout << "-------------------------------------\n";
        cout << "Digite o código do animal: ";
        cin >> Sequencial[pos].codigoAnimal;
        cin.ignore();
        
        cout << "Digite o nome do animal: ";
        cin.getline(Sequencial[pos].nome, 20);
        
        cout << "Digite a idade do animal: ";
        cin >> Sequencial[pos].idade;
        
        cout << "Digite o peso do animal: ";
        cin >> Sequencial[pos].peso;

        

        cout << "Digite o código da raça do animal: ";
        cin >> Sequencial[pos].codigoRaca;
        buscaRaca(Sequencial[pos].codigoRaca, contRacas, raca);// Verifica se a raça é válida
        cin.ignore(); // Limpa o buffer antes de ler o código do tutor

        
        cout << "Digite o código do tutor: ";
        cin >> Sequencial[pos].codTutor;
        buscaTutor(Sequencial[pos].codTutor,contTutores, tutores, cidades, contCidades ); // Verifica se o código do tutor é válido
        cin.ignore(); // Limpa o buffer antes de ler o próximo dado

        

       

    }

    int i = 0, j = 0, k = 0; 

    
    while (i < contAnimais && j < contAnimais) {
        if (Sequencial[i].codigoAnimal < transacao[j].codigoAnimal) {
            atualizado[k] = Sequencial[i];
            i++;
        } else {
            atualizado[k] = transacao[j];
            j++;
        }
        k++;
    }

    while (i < contAnimais) {
        atualizado[k] = Sequencial[i];
        k++;
    }

    while (j < contAnimais) {
        atualizado[k] = transacao[j];   
        k++;
    }

    cout << "\nInclusão conclui­da com sucesso!\n";





};
// funçao a cima pode estar errada, lembrar de corrigir a logica de contadores, voce ainda nao entendeu isso
// e a logica de inclusao, pois ela nao esta funcionando, e o codigo nao esta compilando, entao voce tem que corrigir isso
int main (){
    int opcao;
    string continuar;

    int contAnimais = 0;
    int contVeterinarios = 0;
    int contTutores = 0;
    int contConsultas = 0;
    int contCidades = 0;
    int contRacas = 0;
    int verificadorVet = 0;

    
   
   
    
    
     // ponteiro que aponta para o endereço da variável contCidades que conta o número de cidades cadastradas


    struct cidade cidades[10];
    struct racas raca[10];
    struct animal animais[10];
    struct veterinario veterinarios[10];
    struct consulta consultas[10];


    struct tutor tutores[10];
    struct tutor transacao[10];
    struct tutor atualizado [10];


    struct animal transacaoAnimais[10]; // Vetor para armazenar os animais durante a transação
    struct animal atualizadoAnimais[10]; // Vetor para armazenar os animais atualizados após a transação
    
    
    //variaveis para armazenar os dados do usuario, que serão passados para as funções de cadastro
    //menu de opção, que fica dentro do laço  do while, e só sai quando o user digitar n ou N

    //opção 1 cadastrar cidade (função implementada)
    //opção 2 cadastrar raça (função implementada)
    //opção 3 cadastrar animal (função implementada)
    //opção 4 cadastrar tutor função  implementada)
    //opção 5 cadastrar veterinario (função implementada)
    //opção 6 cadastrar consulta (função implementada)
    
do //usei do while para que o menu seja exibido pelo menos uma vez, e o usuario possa escolher a opção que deseja, e depois ele pode voltar para o menu ou sair do programa
{
    cout << "Sistema de Controle de Animais" << endl;

    cout << "--------------------------------" << endl;

    cout << "Selecione uma opcao:" << endl;
    cout << "--------------------------------" << endl;
    cout << "1. Cadastrar Cidade" << endl;
    cout<<"*********************************************************" << endl;
    cout << "2. Cadastrar Raca" << endl;
    cout<<"*********************************************************" << endl;
    cout << "3. Cadastrar Animal" << endl;
    cout<<"*********************************************************" << endl;
    cout << "4. Cadastrar Tutor" << endl;
    cout<<"*********************************************************" << endl;
    cout << "5. Cadastrar Veterinario" << endl;
    cout<<"*********************************************************" << endl;
    cout << "6. Cadastrar Consulta" << endl; //parte 5
    cout<<"*********************************************************" << endl;
    cout << "7.Cadastro de consultas por veterinario" << endl; //parte 6
    cout<<"*********************************************************" << endl;

     cout <<"0. Sair" << endl;
    cout <<"digite a opcao desejada: " << endl;
    cout << "--------------------------------" << endl;
    cin >> opcao;
    cout <<"--------------------------------" << endl;

    
    


 
   

    switch (opcao){ // um switch é uma estrutura de controle que permite escolher entre várias opções com base no valor de uma variável. O switch avalia a variável e executa o bloco de código correspondente ao valor correspondente.

   // o switch é mais eficiente que o if, pois ele não precisa avaliar cada condição individualmente, mas sim apenas o valor da variável. Isso pode resultar em um código mais limpo e fácil de entender, especialmente quando há muitas opções a serem avaliadas.
        case 1: // caso o usuario digite 1, ele vai cadastrar a cidade, chamando a função cadastrarCidade, passando como parametro o vetor cidades e etc.
        cout << "--------------------------------" << endl;
        cadastrarCidade(cidades,contCidades); 
        cout << "--------------------------------" << endl;
      
        cout << "Cidade cadastrada com sucesso!" << endl;
        cout << "--------------------------------" << endl;
        break;

        case 2:
        cout << "--------------------------------" << endl;
        cadastrarRaca(raca, contRacas);
        cout << "--------------------------------" << endl;
        cout << "Raca cadastrada com sucesso!" << endl;    
        break;

        case 3:
        cout << "--------------------------------" << endl;
        cadastrarAnimal(animais, contAnimais);
        cout << "--------------------------------" << endl;
        cout << "Animal cadastrado com sucesso!" << endl;
        break;

        case 4:
        cout << "--------------------------------" << endl;
        cadastrarTutor(tutores, contTutores);
        cout << "--------------------------------" << endl;
        cout << "Tutor cadastrado com sucesso!" << endl;
        break;

        case 5:
        cout << "--------------------------------" << endl;
        cadastrarVeterinario(veterinarios, contVeterinarios);
        cout << "--------------------------------" << endl;
        cout << "Veterinario cadastrado com sucesso!" << endl;
        break;

        case 6:
        cout << "--------------------------------" << endl;
        cadastrarConsulta(consultas, contConsultas, contAnimais, animais, raca, contRacas, tutores, contTutores, cidades, contCidades, veterinarios, contVeterinarios);
        cout << "--------------------------------" << endl;
        cout << "Consulta cadastrada com sucesso!" << endl;
        break;

        case 7:
        cout << "--------------------------------" << endl;
        cadastrarConsultaVeterinario(consultas, contConsultas, contAnimais, animais, raca, contRacas, tutores, contTutores, cidades, contCidades, veterinarios, contVeterinarios, verificadorVet);


        cout << "--------------------------------" << endl;
        cout << "Consulta por veterinario cadastrada com sucesso!" << endl;

        case 0:
        cout << "Sistema de cadastro encerrado encerrado!" << endl;

        default:
        cout << "Opcao invalida!" << endl;
        break;
    }
    cout << "Deseja voltar para o menu? (s/n)" << endl;
    cin >> continuar;
    for (size_t i = 0; i < continuar.length(); i++) { // laço convertendo cada letra da string para minúscula, o size_t é um tipo de variavel que armazena uma string, e garante que o i nunca vai ser negativo, ou seja, o laço sempre vai rodar enquanto o i for menor que o tamanho da string continuar, ja que o continuar.length() garante tbm que o length, ou seja o tamanho da string, nunca vai ser negativo
        

        continuar[i] = tolower(continuar[i]);  // Converte cada caractere para minÃºsculo
    }

    }while (continuar == "s" || continuar == "sim");


    cout << "--------------------------------" << endl;

    cout << "Sistema de cadastro inicial encerrado!" << endl;


    do {
        cout << "--------------------------------" << endl;
        cout << "Sistema de inclusão de novos cadastros" << endl;
        cout << "--------------------------------" << endl;
        cout << "Selecione uma opcao:" << endl;
        cout << "--------------------------------" << endl;
        cout << "1.Deseja incluir um novo tutor? " << endl;
        cout << "**********************************" << endl;

        cout << "2.Deseja incluir um novo animal? " << endl;
        cout << "**********************************" << endl;

        cout << "0.Sair" << endl;
        cout << "Digite a opcao desejada: ";
       
        cout << "--------------------------------" << endl;
        
        cin >>opcao;

        switch (opcao){

            case 1:
            
            inclusaoTutor(tutores, transacao, atualizado, contTutores, contCidades, cidades); //corrigir 
            break;

            case 2:
            inclusaoAnimal(animais, transacaoAnimais, atualizadoAnimais, contAnimais, contRacas, raca, contTutores, tutores, cidades, contCidades);
            cout << "Animal incluido com sucesso!" << endl;
            break;
            //caso o usuario digite 0, o sistema de cadastro sera encerrado
            default:
            cout << "Opcao invalida!" << endl;
            break;

        }

   

}while (continuar == "s" || continuar == "sim");
}