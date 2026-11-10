/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405340; name: FUN_00405340
 */


char * FUN_00405340(byte *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    pcVar1 = (char *)FUN_004002a0(1,"external/openssl/crypto/o_str.c",200);
    return pcVar1;
  }
  pcVar1 = (char *)FUN_00400260(param_2 * 3,"external/openssl/crypto/o_str.c",0xcb);
  if (pcVar1 == (char *)0x0) {
    FUN_004014b0(0xf,0x75,0x41,"external/openssl/crypto/o_str.c",0xcc);
    return (char *)0x0;
  }
  pcVar3 = pcVar1;
  if (0 < param_2) {
    pcVar2 = pcVar1;
    do {
      pcVar3 = pcVar2 + 3;
      *pcVar2 = "0123456789ABCDEF"[*param_1 >> 4];
      pcVar2[1] = "0123456789ABCDEF"[(ulong)*param_1 & 0xf];
      pcVar2[2] = ':';
      param_2 = param_2 + -1;
      pcVar2 = pcVar3;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  pcVar3[-1] = '\0';
  return pcVar1;
}


