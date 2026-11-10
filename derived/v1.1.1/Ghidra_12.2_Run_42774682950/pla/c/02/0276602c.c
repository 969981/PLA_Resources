/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276602c; name: FUN_0276602c
 */


void FUN_0276602c(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  int local_28 [2];
  
  FUN_027660bc(local_28);
  if (local_28[0] == 0) {
    lVar2 = param_3[2];
    cVar1 = *(char *)(*param_3 + lVar2);
    param_3[2] = lVar2 + 1;
    if ((cVar1 < '\0') && (cVar1 != -0x80)) {
      *param_1 = 1;
    }
    else {
      if (cVar1 == -0x80) {
        cVar1 = *(char *)(*param_3 + lVar2 + 1);
        param_3[2] = lVar2 + 2;
      }
      *(char *)(param_2 + 0xd) = cVar1;
      *param_1 = 0;
    }
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


