#include <stdio.h>
#include <string.h>

typedef struct Livro {
    char titulo[100];
    char autor[100];
    float preco;
} Livro;

void cadastro_livro(Livro livros[], int *num_livros) {
    if (*num_livros < 100) {
        printf("Digite o título do livro: ");
        fgets(livros[*num_livros].titulo, sizeof(livros[*num_livros].titulo), stdin);
        livros[*num_livros].titulo[strcspn(livros[*num_livros].titulo, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite o autor do livro: ");
        fgets(livros[*num_livros].autor, sizeof(livros[*num_livros].autor), stdin);
        livros[*num_livros].autor[strspn(livros[*num_livros].autor, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite o preço do livro: ");
        scanf("%f", &livros[*num_livros].preco);

        (*num_livros)++;
        printf("Livro cadastrado!!!\n");

    } else {
        printf("Limite máximo de livros atingidos!!!\n");
    }
}

int contar_livros_acima_media(Livro livros[], int n_livros, float media) {
    int count = 0;
    
    for (int i = 0; i < n_livros; i++) {
        if (livros[i].preco > media) {
            count++;
        }
    }

    return count;
}

float calcula_media(Livro livros[], int n_livros) {
    float soma = 0;
    
    for (int i = 0; i < n_livros; i++) {
        soma += livros[i].preco;
    }

    return (n_livros > 0) ? (soma / n_livros) : 0;
}

void busca_livro(Livro livros[], int n_livros, char *termo){
    int found = 0;

    for (int i = 0; i < n_livros; i++) {
        if (strstr(livros[i].titulo, termo) || strstr(livros[i].autor, termo)) {
            printf("Livro encontrado:\n");
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Preço: %.2f\n", livros[i].preco);
            found++;
        }
        if (found == 0) {
            printf("Nenhum livro encontrado com %s como termo\n", termo);
        }
    }
}

int main(void) {
    Livro livros[100];
    int n_livros = 0;

    int escolha;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar livro\n");
        printf("2. Calcular média de preço\n");
        printf("3. Contar livros acima da média de preço\n");
        printf("4. Buscar livro por autor ou título\n");
        printf("5. Sair\n");
        
        printf("Escolha uma das opções: ");
        scanf("%d", &escolha);
        
        switch (escolha) {
            case 1:
                cadastro_livro(livros, &n_livros);
                break;
            case 2:
                if (n_livros > 0) {
                    float media = calcula_media(livros, n_livros);
                    printf("A média de preço dos livros é de %.2f\n", media);
                } else {
                    printf("Não há livros cadastrados!!!\n");
                }
                break;
            case 3:
                if (n_livros > 0) {
                    float media = calcula_media(livros, n_livros);
                    int acima_da_media = contar_livros_acima_media(livros, n_livros, media);
                    printf("%d livro(s) estão acima da média de preços.\n", acima_da_media);
                } else {
                    printf("Não há livros cadastrados!!!\n");
                }
                break;
            case 4:
                if (n_livros > 0) {
                    char termo[100];
                    printf("Digite o nome do autor ou título do livro: ");
                    setbuf(stdin, NULL);
                    fgets(termo, sizeof(termo), stdin);
                    termo[strcspn(termo, "\n")] = '\0';
                    busca_livro(livros, n_livros, termo);
                } else {
                    printf("Não há livros cadastrados!!!\n");
                }
                break;
            case 5:
                printf("Programa encerrado!!!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente um número indicado no MENU!!!\n");
        } 
    } while (escolha != 5);


    return 0;
}