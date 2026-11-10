/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc598; name: FUN_02edc598
 */


undefined8 FUN_02edc598(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  plVar7 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar5 = plVar7 + uVar3;
  if ((uVar3 != 0) && (*plVar7 != param_2)) {
    lVar6 = (ulong)uVar3 * 8;
    plVar8 = plVar7;
    do {
      lVar6 = lVar6 + -8;
      plVar7 = plVar5;
      if (lVar6 == 0) break;
      plVar7 = plVar8 + 1;
      plVar1 = plVar8 + 1;
      plVar8 = plVar7;
    } while (*plVar1 != param_2);
  }
  if (plVar7 == (long *)0x0) {
    return 2;
  }
  if (plVar5 == plVar7) {
    return 2;
  }
  plVar5 = *(long **)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x38);
  plVar7 = plVar5;
  if ((uVar3 != 0) && (*plVar5 != param_3)) {
    lVar6 = (ulong)uVar3 * 8;
    plVar8 = plVar5;
    do {
      lVar6 = lVar6 + -8;
      plVar7 = plVar5 + uVar3;
      if (lVar6 == 0) break;
      plVar7 = plVar8 + 1;
      plVar1 = plVar8 + 1;
      plVar8 = plVar7;
    } while (*plVar1 != param_3);
  }
  if ((plVar7 != (long *)0x0) && (plVar5 + uVar3 != plVar7)) {
    return 0x28;
  }
  if (*(short *)(param_2 + 0x42) != -1) {
    uVar4 = *(uint *)(param_2 + 0x3c);
    if (uVar4 <= uVar3) {
      iVar2 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      uVar4 = iVar2 + uVar4;
      plVar5 = (long *)(*DAT_0442d148)(0,plVar5,(ulong)uVar4 << 3);
      if (plVar5 == (long *)0x0) {
        return 2;
      }
      *(long **)(param_2 + 0x30) = plVar5;
      *(uint *)(param_2 + 0x3c) = uVar4;
    }
    if (uVar3 < uVar4) {
      uVar3 = *(uint *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      if (plVar5 + uVar3 != (long *)0x0) {
        plVar5[uVar3] = param_3;
        *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + 1;
        if (*(char *)(param_2 + 0x2c) != '\0') {
          lVar6 = *(long *)(param_3 + 0x160);
          fVar9 = *(float *)(param_2 + 0x78);
          fVar10 = *(float *)(param_2 + 0x7c);
          *(float *)(lVar6 + 4) = *(float *)(param_2 + 0x74) + *(float *)(lVar6 + 4);
          *(float *)(lVar6 + 8) = fVar9 + *(float *)(lVar6 + 8);
          *(float *)(lVar6 + 0xc) = fVar10 + *(float *)(lVar6 + 0xc);
          FUN_02edbb08(param_2,*(int *)(DAT_0440a128 + 0x78) + 1);
        }
        return 1;
      }
    }
  }
  return 2;
}


