/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031783c8; name: FUN_031783c8
 */


void FUN_031783c8(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  
  if (*(int *)(param_2 + 0x40) < 1) {
    *param_1 = 0xffffffff;
    return;
  }
  lVar1 = 0;
  piVar2 = (int *)(*(long *)(param_2 + 0x38) + 0x1c);
  while ((*piVar2 != param_3 || (*(long *)(piVar2 + -5) == 0))) {
    lVar1 = lVar1 + 1;
    piVar2 = piVar2 + 0x3c;
    if (*(int *)(param_2 + 0x40) == lVar1) {
      *param_1 = 0xffffffff;
      return;
    }
  }
  *param_1 = (int)lVar1;
  return;
}


