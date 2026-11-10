/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060e088; name: FUN_0060e088
 */


void FUN_0060e088(long *param_1,undefined2 param_2,byte *param_3)

{
  byte *__src;
  void *__dest;
  size_t __n;
  long lVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = (long)(PTR_DAT_04375360 + 0x10);
  param_1[2] = 0;
  __n = (size_t)(*param_3 >> 1);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  else {
    __n = *(size_t *)(param_3 + 8);
  }
  __dest = (void *)FUN_002e2ec0(PTR_FUN_04373078,__n);
  memcpy(__dest,__src,__n);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_002e2f10(lVar1);
    FUN_002e2ef0(PTR_LAB_04373088,lVar1);
  }
  param_1[2] = (long)__dest;
  *(short *)((long)param_1 + 10) = (short)__n;
  return;
}


