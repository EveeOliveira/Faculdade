#include <iostream>

using namespace std;

typedef long TipoChave;
typedef struct TipoRegistro {
    TipoChave Chave;
} TipoRegistro;
typedef struct TipoNo * TipoApontador;
typedef struct TipoNo {
    TipoRegistro Reg;
    TipoApontador Esq, Dir;
}TipoNo;

void Insere(TipoRegistro x, TipoApontador *p) { 
    if (*p == NULL) { 
        *p = (TipoApontador)malloc(sizeof(TipoNo));
        (*p)->Reg = x; 
        (*p)->Esq = NULL; 
        (*p)->Dir = NULL;
    return;
    }
    if (x.Chave < (*p) -> Reg.Chave){ 
        Insere(x, &(*p)->Esq); 
        return; 
    }
    if (x.Chave > (*p) -> Reg.Chave) {
        Insere(x, &(*p)->Dir);
    }
    else printf("Erro : Registro ja existe na arvore\n");
}

void Inicializa (TipoApontador *Dicionario){ 
    *Dicionario = NULL; 
}

void ImprimeChaves(TipoApontador p) {
    if (p != NULL) {
        ImprimeChaves(p->Esq); 
        printf("%ld ", p->Reg.Chave); 
        ImprimeChaves(p->Dir);
    }
}

void RemoveNosFolhas(TipoApontador *p) {
    if (*p != NULL){
        if((*p)->Esq == NULL && (*p)->Dir == NULL){
            free(*p);
            *p = NULL;
        } 
        else {
            RemoveNosFolhas(&(*p)->Esq);
            RemoveNosFolhas(&(*p)->Dir);
        }
    }
}

int main() {
    TipoApontador Dicionario;
    TipoRegistro x;
    Inicializa(&Dicionario);
    printf("Insira os valores das chaves (digite um valor negativo para encerrar):\n");

    do {
        printf("Chave: ");
        scanf("%ld", &x.Chave);

        if (x.Chave >= 0) {
            Insere(x, &Dicionario);
        }
    } while (x.Chave >= 0);

    printf("Chaves presentes na arvore: ");
    ImprimeChaves(Dicionario);
    printf("\n");

    RemoveNosFolhas(&Dicionario);

    printf("Chaves presentes na arvore apos a remocao: ");
    ImprimeChaves(Dicionario);
    printf("\n");

    return 0;
}
