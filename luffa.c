#include "luffa.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>


#include "sha3/sph_luffa.h"


void luffa_hash(const char* input, char* output)
{
    sph_luffa512_context		ctx_luffa;
    static unsigned char pblank[1];
    uint32_t hashA[16];	
    
    sph_luffa512_init(&ctx_luffa);
    sph_luffa512(&ctx_luffa, input, 80);
    sph_luffa512_close(&ctx_luffa,hashA);
    //these uint512 in the c++ source of the client are backed by an array of uint32
	
    memcpy(output, hashA, 32);
	
}

