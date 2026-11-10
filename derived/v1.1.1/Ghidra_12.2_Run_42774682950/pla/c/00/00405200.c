/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405200; name: FUN_00405200
 */


byte * FUN_00405200(char *param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  sVar4 = strlen(param_1);
  pbVar5 = (byte *)FUN_00400260(sVar4 >> 1,"external/openssl/crypto/o_str.c",0x9c);
  if (pbVar5 == (byte *)0x0) {
    FUN_004014b0(0xf,0x76,0x41,"external/openssl/crypto/o_str.c",0x9d);
    return (byte *)0x0;
  }
  pbVar6 = pbVar5;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    while( true ) {
      if (cVar1 == '\0') {
        if (param_2 == (long *)0x0) {
          return pbVar5;
        }
        *param_2 = (long)pbVar6 - (long)pbVar5;
        return pbVar5;
      }
      if (cVar1 == ':') break;
      if (*param_1 == '\0') {
        FUN_004014b0(0xf,0x76,0x67,"external/openssl/crypto/o_str.c",0xa7);
        FUN_00400420(pbVar5,"external/openssl/crypto/o_str.c",0xa8);
        return (byte *)0x0;
      }
      uVar2 = FUN_004051d0();
      uVar3 = FUN_004051d0(cVar1);
      if ((int)(uVar3 | uVar2) < 0) {
        FUN_00400420(pbVar5,"external/openssl/crypto/o_str.c",0xae);
        FUN_004014b0(0xf,0x76,0x66,"external/openssl/crypto/o_str.c",0xaf);
        return (byte *)0x0;
      }
      *pbVar6 = (byte)uVar2 | (byte)(uVar3 << 4);
      cVar1 = param_1[1];
      param_1 = param_1 + 2;
      pbVar6 = pbVar6 + 1;
    }
  } while( true );
}


