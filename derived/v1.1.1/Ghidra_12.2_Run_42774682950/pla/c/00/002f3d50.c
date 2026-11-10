/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3d50; name: FUN_002f3d50
 */


int FUN_002f3d50(long *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  
  __n = strlen(param_2);
  if (*param_1 == 0) {
    iVar1 = (uint)*(byte *)(param_1 + 1) - (int)__n;
  }
  else {
    iVar1 = (int)param_1[1] - (int)__n;
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 0) {
    iVar1 = memcmp((void *)((long)param_1 + 9),param_2,__n);
    return iVar1;
  }
  iVar1 = memcmp((void *)param_1[2],param_2,__n);
  return iVar1;
}


