/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc16c; name: FUN_02edc16c
 */


void FUN_02edc16c(ulong *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = (long *)*param_1;
  uVar4 = (uint)param_1[1];
  plVar5 = plVar2 + (ulong)uVar4 * 6;
  if ((uVar4 != 0) && (*plVar2 != param_2)) {
    lVar6 = (ulong)uVar4 * 0x30;
    plVar3 = plVar2;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        return;
      }
      plVar2 = plVar3 + 6;
      plVar1 = plVar3 + 6;
      plVar3 = plVar2;
    } while (*plVar1 != param_2);
  }
  if (plVar5 != plVar2) {
    if (plVar2 < plVar5 + -6) {
      do {
        plVar3 = plVar2 + 6;
        plVar2[2] = plVar2[8];
        plVar2[3] = plVar2[9];
        *plVar2 = *plVar3;
        plVar2[1] = plVar2[7];
        plVar2[4] = plVar2[10];
        plVar2[5] = plVar2[0xb];
        plVar2 = plVar3;
      } while (plVar3 < plVar5 + -6);
      uVar4 = (uint)param_1[1];
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


