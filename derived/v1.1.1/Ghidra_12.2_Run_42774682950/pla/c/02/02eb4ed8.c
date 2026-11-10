/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb4ed8; name: FUN_02eb4ed8
 */


undefined8 FUN_02eb4ed8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar5;
  plVar2 = plVar8 + uVar6;
  plVar4 = plVar8;
  if ((uVar5 != 0) && (*plVar8 != param_2)) {
    lVar3 = uVar6 * 8;
    plVar9 = plVar8;
    do {
      lVar3 = lVar3 + -8;
      if (lVar3 == 0) {
        return 2;
      }
      plVar4 = plVar9 + 1;
      plVar1 = plVar9 + 1;
      plVar9 = plVar4;
    } while (*plVar1 != param_2);
  }
  if (plVar2 == plVar4) {
    return 2;
  }
  if (plVar4 < plVar2 + -1) {
    uVar7 = (long)plVar8 + ~(ulong)plVar4 + uVar6 * 8 + -8;
    uVar5 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    uVar6 = (ulong)uVar5 & 3;
    if ((uVar5 & 3) != 0) {
      plVar8 = plVar4;
      do {
        plVar4 = plVar8 + 1;
        *plVar8 = *plVar4;
        uVar6 = uVar6 - 1;
        plVar8 = plVar4;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar7) {
      do {
        *plVar4 = plVar4[1];
        plVar4[1] = plVar4[2];
        plVar4[2] = plVar4[3];
        plVar8 = plVar4 + 4;
        plVar4[3] = *plVar8;
        plVar4 = plVar8;
      } while (plVar8 < plVar2 + -1);
    }
    uVar5 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar5 - 1;
  return 1;
}


