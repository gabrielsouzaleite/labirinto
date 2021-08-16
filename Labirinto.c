#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
    int main(){
        setlocale(LC_ALL, "Portuguese_Brazil");
        int qntJogadas = 1, opcaoEscolhida = 1;
        int salaAtual = 1;
        char inicioJornada = 'S', personagem;

        printf("Bem-vindo nobre aventureiro, você está prestes a comecar uma jornada!!\n");
        printf("Deseja iniciar sua jornada?\n[S]im;\n[N]ão; ");
        scanf(" %c", &inicioJornada);

        if(inicioJornada == 'S'|| inicioJornada == 's'){
            printf("Vejo que você está preparado para o que está por vir, mas tome cuidado! dentro dessa dungeon existem diversos perigos HUAHUAHUAHUA");
        }else{
            printf("[Empurrão] Você não tem escolha, aproveite a viagem!! HUAHUAHUAHUA");
        }

        printf("\nAgora que você entrou nesse labirinto muitas surpresas lhe aguardam! escolha o seu personagem para prosseguir com a sua jornada \nVocê sera um: \n[H]umano; \n[B]andido;\n[E]lfo;\n[G]uerreiro: ");
        scanf(" %c", &personagem);

        switch (personagem)
        {
        case 'H':
            printf("Humano! ótima escolha\n");
            printf("Agora meu nobre Humano que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'h':
            printf("Humano! ótima escolha\n");
            printf("Agora meu nobre Humano que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'B':
            printf("Bandido! Espertinho heim?!\n");
            printf("Agora Bandido que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'b':
            printf("Bandido! Espertinho heim?!\n");
            printf("Agora Bandido que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'E':
            printf("Elfo! Horas mas que elegante não?!\n");
            printf("Agora meu nobre Elfo que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'e':
            printf("Elfo! Horas mas que elegante não?!\n");
            printf("Agora meu nobre Elfo que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'G':
            printf("Guerreiro! Quanta bravura meu caro!!\n");
            printf("Agora meu nobre Guerreiro que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        case 'g':
            printf("Guerreiro! Quanta bravura meu caro!!\n");
            printf("Agora meu nobre Guerreiro que se inicie a Jornada, você irá iniciar na sala 1, boa sorte!");
            break;
        default:
            break;
        }
        printf("\nEscolha o seu caminho com muita sabedoria, pois um passo em falso e pode acabar tudo para você!!!");
        while(salaAtual != 9){
            while(salaAtual != 6 && salaAtual != 10 && salaAtual != 9 && (opcaoEscolhida == 1 || opcaoEscolhida == 2)){
            printf("\nVoce esta na sala  %d", salaAtual);
            printf("\nEscolha o caminho vermelho da [1]Direita ou o caminho preto da [2]Esquerda: ");
            scanf(" %d", &opcaoEscolhida);
            salaAtual += opcaoEscolhida;
             qntJogadas++;
            }
            if(salaAtual == 6){
                printf("\nVoce esta na sala  %d", salaAtual);
                printf("\nParece que tem uma criatura feroz bloqueando o caminho vermelho, melhor não perturba-la, siga pelo caminho preto a esquerda, vamos!!\n");
                system ("pause");
                salaAtual = 8;
                qntJogadas++;
            }else{
                while(salaAtual == 10){
                    printf("Voce caiu em um portal e agora vai ser redirecionao para uma sala entre 1 e 5!!\nBoa sorte!!");
                    salaAtual = rand() % 6;
                }
            }
            
        }  
        if(salaAtual==9 && qntJogadas <= 7){
            printf("\nUal, você esta na sala 9!!\n");
            printf("Você chegou ao final da sua jornada, mesmo com todos os obstáculos e crituras perigosas, muito bem você venceu!!!\n");
        }else if(salaAtual ==9 && qntJogadas > 7){
            printf("\nVocê chegou até o final, mas passar por tantas salas e criaturas acabou com sua sanidade HUAHUAHUAHUA!!! NUNCA MAIS VAI SAIR DAQUI\n");
        }else if(salaAtual !=9 && (opcaoEscolhida != 1 || opcaoEscolhida != 2)){
            printf("\nEsse caminho não existe!\n");
        }
        system("pause");
        return 0;
    }