/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e808; name: FUN_0085e808
 */


void FUN_0085e808(ushort *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *param_1;
  uVar3 = (ulong)uVar2;
  if (iVar1 < (int)(uint)uVar2 && uVar2 != 0) {
    plVar4 = *(long **)(param_1 + 0x14);
    do {
      if (*plVar4 == param_2) {
        return;
      }
      if (*plVar4 == -1) {
        *plVar4 = param_2;
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        return;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


