
%module codec
%include "typemaps.i"

%apply int *OUTPUT { unsigned char *nr, unsigned char *ng, unsigned char *nb, unsigned char *na };
%inline %{
extern void encodebyte(unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned char byte, unsigned char *nr, unsigned char *ng, unsigned char *nb, unsigned char *na);
extern char decodebyte(unsigned char r, unsigned char g, unsigned char b);
extern int parity(char byte);
%}

extern void encodebyte(unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned char byte, unsigned char *nr, unsigned char *ng, unsigned char *nb, unsigned char *na);
extern char decodebyte(unsigned char r, unsigned char g, unsigned char b);
extern int parity(char byte);