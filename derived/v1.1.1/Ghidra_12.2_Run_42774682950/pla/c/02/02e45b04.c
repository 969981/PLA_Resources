/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45b04; name: FUN_02e45b04
 */


void FUN_02e45b04(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar5 = *param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)lVar5 / uVar1;
    }
    plVar6 = (long *)(*param_1 + (ulong)((uint)lVar5 - uVar2 * uVar1) * 8);
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x40) != lVar5) {
        do {
          lVar4 = lVar3;
          lVar3 = *(long *)(lVar4 + 0x48);
          if (lVar3 == 0) {
            return;
          }
        } while (*(long *)(lVar3 + 0x40) != lVar5);
        plVar6 = (long *)(lVar4 + 0x48);
      }
      *plVar6 = *(long *)(lVar3 + 0x48);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
  }
  return;
}


