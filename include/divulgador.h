#include <iostream>

// Definindo uma constante para representar cada departamento da UFMG
#define PROGRAD 0
#define PJR 1
#define URB 2
#define ACR 3
#define TAU 4
#define APL 5
#define DES 6
#define FTC 7
#define ARC 8
#define OTI 9
#define TGI 10
#define BIG 11
#define BIQ 12
#define BOT 13
#define FAR 14
#define FIB 15
#define MIC 16
#define MOF 17
#define PAR 18
#define PAG 19
#define ZOL 20
#define CAD 21
#define CIC 22
#define ECN 23
#define POP 24
#define DCC 25
#define EST 26
#define FIS 27
#define MAT 28
#define QUI 29
#define DIC 30
#define DIN 31
#define DIP 32
#define DIT 33
#define ADE 34
#define CAE 35
#define MTE 36
#define EFI 37
#define ESP 38
#define FIT 39
#define DTO 40
#define ENA 41
#define ENB 42
#define EMI 43
#define ELE 44
#define EES 45
#define EHR 46
#define EMA 47
#define EMT 48
#define EMN 49
#define ENU 50
#define EPD 51
#define EQM 52
#define ESA 53
#define ETG 54
#define EMC 55
#define ALM 56 
#define ACT 57
#define FAS 58
#define PFA 59
#define DCP 60
#define COM 61 
#define FIL 62
#define HIS 63
#define PSI 64
#define DSO 65
#define DAA 66
#define CRT 67
#define GEO 68
#define GEL 69
#define APM 70
#define ALO 71
#define CIR 72
#define CLM 73
#define GOB 74
#define MPS 75
#define OFT 76
#define PED 77
#define PRO 78
#define SAM 79
#define FON 80
#define IMA 81
#define INC 82
#define TGM 83
#define CPC 84
#define ODR 85
#define OSP 86
#define OPO 87
#define CCV 88
#define MVP 89
#define TEI 90
#define ZOO 91

class Departamento{
    Private:
        int departamento;

    Public:
        Departamento(std::string nome);
        ~Departamento();
        int retornarNumeroReferencia();


}
