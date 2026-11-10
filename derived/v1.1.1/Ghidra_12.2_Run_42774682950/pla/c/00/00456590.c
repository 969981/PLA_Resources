/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456590; name: FUN_00456590
 */


undefined8 FUN_00456590(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *__s;
  size_t __n;
  
  lVar3 = (long)param_2 - (long)(int)param_4;
  iVar2 = (int)lVar3;
  iVar1 = iVar2 + -2;
  if (iVar1 < 0) {
    FUN_004014b0(4,0x7f,0x6e,"external/openssl/crypto/rsa/rsa_x931.c",0x1e);
    return 0xffffffff;
  }
  __s = param_1 + 1;
  if (iVar2 == 2) {
    *param_1 = 0x6a;
  }
  else {
    *param_1 = 0x6b;
    puVar4 = __s;
    if (1 < iVar1) {
      __n = lVar3 - 3;
      memset(__s,0xbb,__n);
      puVar4 = __s + __n;
    }
    __s = puVar4 + 1;
    *puVar4 = 0xba;
  }
  memcpy(__s,param_3,(ulong)param_4);
  __s[(int)param_4] = 0xcc;
  return 1;
}


