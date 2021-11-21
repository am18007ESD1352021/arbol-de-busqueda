
#ifndef HEAD_H
#define HEAD_H

#ifdef __cplusplus
extern "C" {
#endif
typedef int dato;

struct arbol{
dato Dato;
int pos_izq;
int pos_der;
struct arbol *izq;
struct arbol *der;
};
typedef struct arbol Arbol;

  
Arbol *nuevoNodo(dato Dato);
void insertar(Arbol*nodo, int dato);
void mostrar (Arbol *arbolNodo);  
void borrarArbol (Arbol *raiz); 
Arbol* buscar (Arbol *raiz, int dato);
int alturaArbol(Arbol *raiz, int dato);



#ifdef __cplusplus
}
#endif

#endif /* HEAD_H */

