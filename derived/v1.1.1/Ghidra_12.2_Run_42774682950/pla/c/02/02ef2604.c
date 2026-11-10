/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2604; name: FUN_02ef2604
 */


void FUN_02ef2604(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    uVar5 = (ulong)((uint)param_2 - uVar2 * uVar1);
    plVar3 = *(long **)(*(long *)(param_1 + 8) + uVar5 * 8);
    if (plVar3 != (long *)0x0) {
      if (plVar3[1] == param_2) {
        *(long *)(*(long *)(param_1 + 8) + uVar5 * 8) = *plVar3;
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
          if (plVar3 == (long *)0x0) {
            return;
          }
        } while (plVar3[1] != param_2);
        *plVar4 = *plVar3;
      }
      (*DAT_0442d150)(0);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return;
}


