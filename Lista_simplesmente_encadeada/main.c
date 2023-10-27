#include <stdio.h>
#include <stdlib.h>
#include "listadinalu.c"

/*
IFPB - Campina Grande
Curso: Engenharia de Computação
Dupla: Gustavo Ferreira Silva e Josué Ferreira de Souza Júnior
Disciplinas: Estrutura de Dados e Laboratório de Estrutura de Dados
*/

int main(void) {
  ListaAluno lista_alunos;
  int escolha, metodo_busca;
  char s_n;
  char busca_nome[30];

  // Variáveis para os dados dos alunos
  int matricula, pos, busca_matricula;
  char nome[30];
  float nota1, nota2;

  // Inicialização da lista
  criar(&lista_alunos);
  do {
    printf("MENU:\n1 - Inserir um novo aluno\n2 - Obter os dados de um aluno segundo sua posição na lista\n3 - Obter a posição na lista de um aluno segundo a sua matrícula ou nome\n4 - Remover um aluno via matrícula\n5 - Exibir a lista\n6 - Inserir um aluno em uma posição da lista\n7 - Total de alunos\n8 - Sair");
    printf("\nDigite sua opção: ");
    scanf("%d", &escolha);
    setbuf(stdin, NULL);

    switch (escolha) {
      case 1:
        printf("\nDigite a matrícula do aluno no seguinte formato - 12345: ");
        scanf("%d", &matricula);
        
        getchar();
        printf("\nDigite o nome do aluno: ");
        fgets(nome, 30, stdin);
        
        printf("\nForneça as notas do aluno:\n");
        printf("1° nota - ");
        scanf("%f", &nota1);
        printf("2° nota - ");
        scanf("%f", &nota2);

        inserir_aluno(&lista_alunos, matricula, nome, nota1, nota2);
        break;

      case 2:
        printf("Digite a posição da lista para procurar o aluno: ");
        scanf("%d", &pos);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        if (vazia(&lista_alunos)) {
          printf("\n'Nenhum aluno ainda registrado.");
          break;
        } else {
          printf("\n");
          exibir_aluno_posicao(&lista_alunos, pos);
          break;
        }

      case 3:
        printf("Digite o método de busca (matrícula -- 1 ou nome -- 2): ");
        scanf("%d", &metodo_busca);

        if (vazia(&lista_alunos)) {
          printf("\nNenhum aluno ainda registrado.");
          break;
        }
        if (metodo_busca != 1 && metodo_busca != 2) {
          printf("\nOpção inválida.");
          break;
        }
        if (metodo_busca == 1) {
          printf("\nDigite a matrícula do aluno: ");
          scanf("%d", &busca_matricula);
          exibir_aluno(&lista_alunos, busca_matricula);
          break;
        } 
        if (metodo_busca == 2) {
          printf("\nDigite o nome do aluno a ser procurado: ");
          setbuf(stdin, NULL);
          fgets(busca_nome, 30, stdin);
          printf("\nResultado(s) encontrados:\n");
          exibir_aluno_nome(&lista_alunos, busca_nome);
          break;
        }

      case 4:
        printf("Digite a matrícula do aluno a ser removido da lista: ");
        scanf("%d", &busca_matricula);

        if (vazia(&lista_alunos)) {
          printf("\nNenhum aluno ainda registrado.");
          break;
        }

        printf("\nVocê tem certeza que deseja excluir esse aluno da lista? s/n");
        scanf("%c", &s_n);
        if (s_n == 'n'){
          printf("\nAção encerrada.");
          break;
        } else {
          remover(&lista_alunos, busca_matricula);
          printf("\nAluno removido.");
          break;
        }
      case 5:
        if (vazia(&lista_alunos)) {
          printf("\nNenhum aluno ainda registrado.");
          break;
        }
        exibir_lista(&lista_alunos);
        break;
      case 6:
        printf("\nDigite a matrícula do aluno no seguinte formato - 12345: ");
        scanf("%d", &matricula);
        
        getchar();
        printf("\nDigite o nome do aluno: ");
        fgets(nome, 30, stdin);
        
        printf("\nForneça as notas do aluno:\n");
        printf("1° nota - ");
        scanf("%f", &nota1);
        printf("2° nota - ");
        scanf("%f", &nota2);
        setbuf(stdin, NULL);

        printf("Indique a posição da lista para inserir o aluno: ");
        scanf("%d", &pos);
        inserir_na_posicao(&lista_alunos, matricula, nome, nota1, nota2, pos);
        printf("\nAluno inserido com sucesso.");
        break;
      case 7:
        printf("\nTotal de alunos: ");
        int tam = tamanho(&lista_alunos);
        printf("%d", tam);
        break;
      case 8:
        printf("Progama encerrado.");
        break;
      default:
        printf("Opção inválida. Escolha uma das opções indicadasd no MENU.");
    }
    printf("\n\n");
  } while(escolha != 8);
}
