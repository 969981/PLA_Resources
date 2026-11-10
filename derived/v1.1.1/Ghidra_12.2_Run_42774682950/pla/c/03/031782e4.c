/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031782e4; name: FUN_031782e4
 */


void FUN_031782e4(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_2 + 0x40) < 1) {
    *param_1 = 0xffffffff;
    return;
  }
  plVar2 = *(long **)(param_2 + 0x38);
  lVar1 = 0;
  while ((*(int *)((long)plVar2 + 0x1c) != param_3 || (*plVar2 == 0))) {
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


