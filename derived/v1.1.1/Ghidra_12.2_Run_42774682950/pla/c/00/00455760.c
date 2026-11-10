/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00455760; name: FUN_00455760
 */


undefined8 FUN_00455760(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_004014b0(4,0x6c,0x6e,"external/openssl/crypto/rsa/rsa_pk1.c",0x1a);
    return 0;
  }
  *param_1 = 0x100;
  __n = (size_t)(int)((param_2 - param_4) + -3);
  memset(param_1 + 1,0xff,__n);
  puVar1 = (undefined1 *)((long)(param_1 + 1) + __n);
  *puVar1 = 0;
  memcpy(puVar1 + 1,param_3,(ulong)param_4);
  return 1;
}


