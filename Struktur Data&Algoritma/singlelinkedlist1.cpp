#include <stdio.h >
#include <stdlib.h > 
// Deklarasi pointer dengan tipe data struct node 
struct node {
	int value ;
	struct node * next; 
 } 
typedef struct node * ptrnode ; 

// fungsi untuk membuat simpul baru  
ptrnode createNode ( int nilai ) { 
	ptrnode p ;
	p = ( ptrnode ) malloc ( sizeof ( struct node ) ) ; 
	p- > value = nilai ; 
	p- > next = NULL ; 
	return ( p ) ; 
}
