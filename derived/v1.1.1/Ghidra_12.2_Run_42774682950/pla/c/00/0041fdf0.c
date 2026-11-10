/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041fdf0; name: FUN_0041fdf0
 */


undefined8 FUN_0041fdf0(long *param_1,void *param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  size_t __n;
  
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) ||
      (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) || ((*(byte *)(lVar2 + 8) >> 1 & 1) == 0)) {
    return 1;
  }
  puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
  FUN_00400420(*puVar1,"external/openssl/crypto/asn1/tasn_utl.c",0x92);
  __n = (size_t)param_3;
  __dest = (void *)FUN_00400260(__n,"external/openssl/crypto/asn1/tasn_utl.c",0x93);
  *puVar1 = __dest;
  if (__dest == (void *)0x0) {
    FUN_004014b0(0xd,0x73,0x41,"external/openssl/crypto/asn1/tasn_utl.c",0x94);
    return 0;
  }
  memcpy(__dest,param_2,__n);
  puVar1[1] = __n;
  *(undefined4 *)(puVar1 + 2) = 0;
  return 1;
}


