#include <stdio.h>

void encodebyte(unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned char byte, unsigned char *nr, unsigned char *ng, unsigned char *nb, unsigned char *na){
	*nr = (r & 248) ^ (byte & 224) >> 5;
	*ng = (g & 248) ^ (byte & 28) >> 2;
	*nb = (b & 248) ^ (byte & 3) << 1;
	*na = a;
}

char decodebyte(unsigned char r, unsigned char g, unsigned char b){
	return (((r & 7) << 5) ^ ((g & 7) << 2)) ^ ((b & 6) >> 1);
}

int parity(char byte){
	int c = 0;
	while (byte){
		c ^= byte & 1;
		byte >>= 1;
	}
	return c;
}

/*
int main(int argc, char *argv[]) {
	int r=127, g=127, b=127, a=255, nr=0, ng=0, nb=0, na=0;
	int *pr = &nr, *pg = &ng, *pb = &nb, *pa = &na;
	char byte = 'U', dbyte = 0;
	char *pbyte = &dbyte;

	encodebyte(r,g,b,a, byte, pr, pg, pb, pa);
	printf("R: %d, G: %d, B: %d, A: %d\n",nr,ng,nb,na);
	printf("Byte: %c", decodebyte(nr, ng, nb));
	
}
*/