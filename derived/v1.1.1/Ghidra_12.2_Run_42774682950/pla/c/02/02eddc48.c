/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eddc48; name: FUN_02eddc48
 */


uint * FUN_02eddc48(long *param_1,uint param_2,undefined1 *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    uVar12 = 0;
  }
  else {
    iVar7 = 0;
    do {
      iVar2 = iVar7 + (uVar8 >> 1);
      uVar5 = *(uint *)(*param_1 + (long)iVar2 * 4);
      if (uVar5 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar2 * 4);
      }
      if (uVar5 < param_2) {
        iVar7 = iVar2 + 1;
      }
      uVar8 = uVar8 - (uVar5 < param_2) >> 1;
    } while (uVar8 != 0);
    uVar12 = (ulong)iVar7;
  }
  *param_3 = 0;
  lVar6 = *param_1;
  if (lVar6 + uVar12 * 4 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar8 <= uVar5) {
      iVar7 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar7 = 1;
      }
      uVar8 = iVar7 + uVar8;
      lVar6 = (*DAT_0442d148)(0,lVar6,(ulong)uVar8 << 2);
      if (lVar6 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    if (uVar8 <= uVar5) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar6 + (ulong)*(uint *)(param_1 + 1) * 4);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar8 <= uVar5) {
      iVar7 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar7 = 1;
      }
      uVar8 = iVar7 + uVar8;
      lVar6 = (*DAT_0442d148)(0,lVar6,(ulong)uVar8 << 2);
      if (lVar6 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    if (uVar8 <= uVar5) {
      return (uint *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if ((uint)uVar12 < uVar8) {
      lVar10 = (ulong)uVar8 * 4;
      lVar3 = lVar6 + lVar10;
      uVar12 = uVar12 & 0xffffffff;
      puVar9 = (uint *)(lVar3 + -4);
      *(uint *)(lVar6 + lVar10) = *puVar9;
      puVar4 = (uint *)(*param_1 + uVar12 * 4);
      if (puVar4 < puVar9) {
        puVar11 = (uint *)(lVar3 + -8);
        *puVar9 = *puVar11;
        puVar4 = (uint *)(*param_1 + uVar12 * 4);
        if (puVar4 < puVar11) {
          puVar9 = (uint *)(lVar6 + (ulong)uVar8 * 4 + -0xc);
          do {
            puVar9[1] = *puVar9;
            puVar4 = (uint *)(*param_1 + uVar12 * 4);
            bVar1 = puVar4 < puVar9;
            puVar9 = puVar9 + -1;
          } while (bVar1);
        }
      }
    }
    else {
      puVar4 = (uint *)(lVar6 + (uVar12 & 0xffffffff) * 4);
    }
  }
  if (puVar4 != (uint *)0x0) {
    *puVar4 = param_2;
  }
  return puVar4;
}


