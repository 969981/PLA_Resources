/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317842c; name: FUN_0317842c
 */


void FUN_0317842c(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_2 + 0x40) < 1) {
    *param_1 = 0xffffffff;
    return;
  }
  lVar1 = 0;
  plVar2 = (long *)(*(long *)(param_2 + 0x38) + 0x10);
  while ((*(int *)((long)plVar2 + 0xc) != param_3 || (*plVar2 == 0))) {
    lVar1 = lVar1 + 1;
    plVar2 = plVar2 + 0x1e;
    if (*(int *)(param_2 + 0x40) == lVar1) {
      *param_1 = 0xffffffff;
      return;
    }
  }
  *param_1 = (int)lVar1;
  return;
}


