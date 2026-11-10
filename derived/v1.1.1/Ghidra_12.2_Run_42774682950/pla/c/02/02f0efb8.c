/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0efb8; name: FUN_02f0efb8
 */


undefined8 FUN_02f0efb8(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_2 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x30);
  plVar2 = plVar4 + uVar3;
  if ((uVar3 != 0) && (*plVar4 != param_3)) {
    lVar6 = (ulong)uVar3 * 8;
    plVar5 = plVar4;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        return 2;
      }
      plVar4 = plVar5 + 1;
      plVar1 = plVar5 + 1;
      plVar5 = plVar4;
    } while (*plVar1 != param_3);
  }
  if (plVar2 == plVar4) {
    return 2;
  }
  if (1 < uVar3) {
    *plVar4 = plVar2[-1];
    uVar3 = *(uint *)(param_2 + 0x30);
  }
  *(uint *)(param_2 + 0x30) = uVar3 - 1;
  if (uVar3 - 1 == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 6;
  }
  return 1;
}


