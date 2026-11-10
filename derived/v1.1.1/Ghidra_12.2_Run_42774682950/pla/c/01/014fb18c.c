/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fb18c; name: FUN_014fb18c
 */


void FUN_014fb18c(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_18;
  undefined1 local_14;
  
  lVar1 = *(long *)(param_1 + 0x630);
  if ((int)*(ulong *)(lVar1 + 0xb0) != 0) {
    piVar3 = *(int **)(lVar1 + 0xa8);
    uVar2 = *(ulong *)(lVar1 + 0xb0) & 0xffffffff;
    do {
      if (*piVar3 == param_2) {
        return;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  local_14 = 0;
  local_18 = param_2;
  FUN_01501bfc(lVar1 + 0x88,&local_18);
  return;
}


