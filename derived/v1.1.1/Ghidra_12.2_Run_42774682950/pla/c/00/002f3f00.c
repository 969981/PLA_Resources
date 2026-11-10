/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3f00; name: FUN_002f3f00
 */


bool FUN_002f3f00(long *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  void *__s1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    uVar2 = (ulong)(byte)param_1[1];
  }
  else {
    uVar2 = param_1[1];
  }
  if (uVar2 < param_3) {
    return false;
  }
  if (*param_1 == 0) {
    __s1 = (void *)((long)param_1 + 9);
  }
  else {
    __s1 = (void *)param_1[2];
  }
  iVar1 = memcmp(__s1,param_2,param_3);
  return iVar1 == 0;
}


