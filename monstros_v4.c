#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Definições para características
#define FRANKEN 1
#define HAPPY 2
#define ZOMBOS 3

#define WACKUS 1
#define VEGITAS 2
#define SPRITEM 3

// Estrutura para armazenar as características de um monstro
struct CaracteristicasMonstro {
    int cabeca;
    int olhos;    
    int boca;
    int nariz;
    int orelha;
};

// Funcao para limpar o console
void limpar_console() {
    // Sistemas Windows (cls) e Unix/Linux/macOS (clear)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    printf("\n"); 
}

void mostrar_alunos() {
    limpar_console();
    printf(" \n");
    printf("========================================================================\n");
    printf("  Curso Superior de Tecnologia em Analise e Desenvolvimento de Sistemas \n");
    printf("              *** Universidade do Vale do Itajai (UNIVALI) ***          \n");
	printf("                           ** Campus de Itajai.**                       \n");
	printf("                     Itajai ** Santa Catarina **Brasil                  \n");
	printf("========================================================================\n");
	printf(" \n");
    printf("--------------------------  Estudantes ---------------------------------\n");
  	printf(" \n");
    printf("* Erick Lucas Martins\n");
    printf("* Rayltson Henrique Lemes\n");
    printf("* Juarez Bento de Souza Junior\n");
    printf("* Yan Victor dos Santos Rocha\n");
    printf("* Joao Felipe Dos Santos\n");
    printf(" \n");
    printf("------------------------------------------------------------------------");
    printf("\nPressione ENTER para voltar ao Menu Principal...");
    // Limpa o buffer de entrada e aguarda ENTER
    while(getchar() != '\n'); 
    getchar(); 
}

// Funcao identificacao de monstros
void identificador_de_monstros();

int menu_cabeca() {
    int escolha;
    printf("\n--- Formato da Cabeca ---\n");
    printf("1. Quadrada\n");
    printf("2. Redonda\n");
    printf("3. Cranial\n");
    printf("Escolha (1-3): ");
    
    if (scanf("%d", &escolha) != 1) {
        while(getchar() != '\n'); 
        return 0; 
    }
    return escolha;
}

int menu_olhos() {
    int escolha;
    printf("\n--- Tipo de Olhos ---\n");
    printf("1. Redondos grandes e estrabicos\n"); 
    printf("2. Redondos grandes\n");
    printf("3. Redondos felizes\n");
    printf("Escolha (1-3): ");
    if (scanf("%d", &escolha) != 1) {
        while(getchar() != '\n');
        return 0;
    }
    return escolha;
}

int menu_nariz() {
    int escolha;
    printf("\n--- Tipo de Nariz ---\n");
    printf("1. Pequeno e arredondado\n");
    printf("2. Sem nariz, apenas buracos\n");
    printf("3. Pequeno\n");
    printf("Escolha (1-3): ");
    if (scanf("%d", &escolha) != 1) {
        while(getchar() != '\n');
        return 0;
    }
    return escolha;
}

int menu_boca() {
    int escolha;
    printf("\n--- Tipo de Boca/Dentes ---\n");
    printf("1. Dentes de coelho\n");
    printf("2. Dentes podres\n");
    printf("3. Sem dentes\n");
    printf("Escolha (1-3): ");
    if (scanf("%d", &escolha) != 1) {
        while(getchar() != '\n');
        return 0;
    }
    return escolha;
}

int menu_orelha() {
    int escolha;
    printf("\n--- Tipo de Orelha ---\n");
    printf("1. Parafusos\n");
    printf("2. Sem orelhas\n");
    printf("3. Orelhas normais\n");
    printf("Escolha (1-3): ");
    if (scanf("%d", &escolha) != 1) {
        while(getchar() != '\n');
        return 0;
    }
    return escolha;
}

// Funções de Identificação 
void identificar_rosto(int olhos) {
    printf("\n? **IDENTIFICACAO DO ROSTO**\n");
    switch (olhos) {
        case 1:
            printf("Tipo de Rosto: **WACKUS**\n");
            break;
        case 2:
            printf("Tipo de Rosto: **VEGITAS**\n");
            break;
        case 3:
            printf("Tipo de Rosto: **SPRITEM**\n");
            break;
        default:
            printf("Nao foi possivel identificar o Tipo de Rosto (escolha invalida para Olhos).\n");
    }
}

void identificar_cabeca(int cabeca) {
    printf("\n? **IDENTIFICACAO DA CABECA**\n");
    switch (cabeca) {
        case FRANKEN:
            printf("Formato de Cabeca: **FRANKEN**\n");
            break;
        case HAPPY:
            printf("Formato de Cabeca: **HAPPY**\n");
            break;
        case ZOMBOS:
            printf("Formato de Cabeca: **ZOMBOS**\n");
            break;
        default:
            printf("Nao foi possivel identificar o Formato da Cabeca (escolha invalida).\n");
    }
}

// Funcoes auxiliares para retormar a string do nome
const char* obter_nome_rosto(int olhos) {
    switch (olhos) {
        case 1: return "WACKUS";
        case 2: return "VEGITAS";
        case 3: return "SPRITEM";
        default: return "Rosto Desconhecido";
    }
}

const char* obter_nome_cabeca(int cabeca) {
    switch (cabeca) {
        case FRANKEN: return "FRANKEN";        case HAPPY: return "HAPPY";
        case ZOMBOS: return "ZOMBOS";
        default: return "Cabeca Desconhecida";
    }
}

// Função lógica do Identificador de Monstros
void identificador_de_monstros() {
    struct CaracteristicasMonstro monstro;
    char continuar;
    
    // Memoria temporaria dos nomes
    const char* nome_cabeca;
    const char* nome_rosto;
    
    // Loop principal para permitir identificacoes de monstros repetidamente
    do {
        limpar_console(); 
        
		printf("========================================================================\n");
	    printf("                                                                        \n");    
        printf("!!!    !!!  !!!!!!  !!!    !! !!!!!!! !!!!!!!! !!!!!!   !!!!!!  !!!!!!! \n");
	    printf("!!!!  !!!! !!    !! !!!!   !! !!         !!    !!   !! !!    !! !!      \n");
	    printf("!! !!!! !! !!    !! !! !!  !! !!!!!!!    !!    !!!!!!  !!    !! !!!!!!! \n");
	    printf("!!  !!  !! !!    !! !!  !! !!      !!    !!    !!   !! !!    !!      !! \n");
	    printf("!!      !!  !!!!!!  !!   !!!! !!!!!!!    !!    !!   !!  !!!!!!  !!!!!!! \n");
	    printf("                                                                        \n");
	    printf("========================================================================\n");
	    printf("                                                                        \n");
        printf("                       **IDENTIFICADOR DE MONSTROS**                    \n");
        printf("                                                                        \n");
        printf("--- Selecione as Caracteristicas do Monstro ---\n");

        // Coleta das características
        monstro.cabeca = menu_cabeca();
        monstro.olhos = menu_olhos();
        monstro.nariz = menu_nariz();
        monstro.boca = menu_boca();
        monstro.orelha = menu_orelha();

        printf("\n--- Resultado da Identificacao ---\n");

        // Processamento e identificação
        identificar_cabeca(monstro.cabeca);
        identificar_rosto(monstro.olhos);
                
        nome_cabeca = obter_nome_cabeca(monstro.cabeca);
        nome_rosto = obter_nome_rosto(monstro.olhos);

        printf("\n?? **MONSTRO IDENTIFICADO:** **%s %s**\n", nome_cabeca, nome_rosto);
        
        printf("\n----------------------------------\n");
        printf("Deseja identificar um novo monstro? (S/N): ");
        
        // Limpa o buffer de entrada antes da proxima entrada 
        while(getchar() != '\n'); 
        scanf("%c", &continuar);
        
        if (continuar >= 'a' && continuar <= 'z') {
            continuar = continuar - 32;
        }

    } while (continuar == 'S'); // loop
}

int main() {
    int opcao;
    
    do {
        limpar_console();
        
    	printf("                                                                        \n");
        printf("========================================================================\n");
        printf("                                                                        \n");
        printf("!!!!!!!  !!!!!  !!!!!!  !!!!!!  !!  !!!!!!  !!!!!                       \n");
	    printf("!!      !!   !! !!   !! !!   !! !! !!      !!   !!                      \n");
	    printf("!!!!!   !!!!!!! !!!!!!  !!!!!!  !! !!      !!!!!!!                      \n");
	    printf("!!      !!   !! !!   !! !!   !! !! !!      !!   !!                      \n");
	    printf("!!      !!   !! !!!!!!  !!   !! !!  !!!!!! !!   !!                      \n");
	    printf("                                                                        \n");
	    printf("!!!!!!  !!!!!!!                                                         \n");
	    printf("!!   !! !!                                                              \n");
	    printf("!!   !! !!!!!                                                           \n");
	    printf("!!   !! !!                                                              \n");
	    printf("!!!!!!  !!!!!!!                                                         \n");
	    printf("                                                                        \n");
	    printf("!!!    !!!  !!!!!!  !!!    !! !!!!!!! !!!!!!!! !!!!!!   !!!!!!  !!!!!!! \n");
	    printf("!!!!  !!!! !!    !! !!!!   !! !!         !!    !!   !! !!    !! !!      \n");
	    printf("!! !!!! !! !!    !! !! !!  !! !!!!!!!    !!    !!!!!!  !!    !! !!!!!!! \n");
	    printf("!!  !!  !! !!    !! !!  !! !!      !!    !!    !!   !! !!    !!      !! \n");
	    printf("!!      !!  !!!!!!  !!   !!!! !!!!!!!    !!    !!   !!  !!!!!!  !!!!!!! \n");
	    printf("                                                                        \n");
        printf("========================================================================\n");
        printf("                       **MENU PRINCIPAL**                               \n");
        printf("                1. Iniciar Identificador de Monstros\n");
        printf("                2. Alunos do Trabalho\n");
        printf("                3. Fechar o Programa\n");
        printf("------------------------------------------------------------------------\n");
        printf("Escolha uma opcao (1-3): ");
        printf(" \n");    	
        
        if (scanf("%d", &opcao) != 1) {
            // Lidar com entrada nao numerica ou falha de leitura
            while(getchar() != '\n'); // Limpa o buffer
            opcao = 0; // Opcao invalida para repetir o loop
        } else {
            // Limpa o buffer para a proxima leitura (se houver)
            while(getchar() != '\n');
        }

        switch (opcao) {
            case 1:
                identificador_de_monstros(); // Chama funcao de identificacao de monstros
                break;
            case 2:
                mostrar_alunos(); // Mostra a lista de alunos
                break;
            case 3:
                limpar_console();
                printf("Fim do Programa. Ate mais!\n");
                return 0; // Encerra o programa
            default:
                limpar_console();
                printf("Opcao invalida. Pressione ENTER para tentar novamente...");
                getchar(); // Aguarda ENTER para continuar
                break;
        }

    } while (opcao != 3);

    return 0;
}
