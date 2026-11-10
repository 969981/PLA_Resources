/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec53cc; name: FUN_02ec53cc
 */


undefined8 FUN_02ec53cc(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  ulong uVar15;
  
  plVar5 = param_1 + 0xc;
  lVar7 = *plVar5;
  uVar2 = *(uint *)(param_1 + 0xd);
  if (uVar2 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    uVar9 = uVar2;
    do {
      iVar11 = iVar10 + (uVar9 >> 1);
      uVar15 = *(ulong *)(lVar7 + (long)iVar11 * 8);
      if (uVar15 == param_2) {
        if (lVar7 + (long)iVar11 * 8 != 0) {
          return 1;
        }
        break;
      }
      if ((*(int *)(uVar15 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar15 < param_2 && (*(int *)(uVar15 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar10 = iVar11 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
    iVar11 = 0;
    uVar9 = uVar2;
    do {
      iVar10 = iVar11 + (uVar9 >> 1);
      uVar15 = *(ulong *)(lVar7 + (long)iVar10 * 8);
      if (uVar15 == param_2) break;
      if ((*(int *)(uVar15 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar15 < param_2 && (*(int *)(uVar15 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar11 = iVar10 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
      iVar10 = iVar11;
    } while (uVar9 != 0);
  }
  lVar1 = lVar7 + (long)iVar10 * 8;
  if (lVar1 == 0) {
    puVar6 = (ulong *)FUN_02ec6314();
  }
  else {
    uVar9 = *(uint *)((long)param_1 + 0x6c);
    if (uVar9 <= uVar2) {
      uVar15 = FUN_02ec6380();
      if ((uVar15 & 1) == 0) {
        return 0x34;
      }
      uVar9 = *(uint *)((long)param_1 + 0x6c);
    }
    if (uVar9 <= uVar2) {
      return 0x34;
    }
    uVar15 = lVar1 - lVar7;
    lVar7 = param_1[0xc];
    puVar13 = (undefined8 *)(lVar7 + (ulong)*(uint *)(param_1 + 0xd) * 8);
    *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) + 1;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = 0;
      lVar7 = *plVar5;
    }
    uVar8 = uVar15 >> 3 & 0xffffffff;
    puVar12 = (undefined8 *)(lVar7 + (uVar15 >> 3 & 0xffffffff) * 8);
    if (puVar12 < puVar13) {
      do {
        puVar14 = puVar13 + -1;
        *puVar13 = *puVar14;
        lVar7 = *plVar5;
        puVar12 = (undefined8 *)(lVar7 + uVar8 * 8);
        puVar13 = puVar14;
      } while (puVar12 < puVar14);
    }
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = 0;
      lVar7 = *plVar5;
    }
    puVar6 = (ulong *)(lVar7 + uVar8 * 8);
  }
  if (puVar6 == (ulong *)0x0) {
    return 0x34;
  }
  *puVar6 = param_2;
  bVar3 = *(byte *)(param_1 + 0xe);
  if ((*(int *)(param_2 + 0x48) == 1) ||
     ((*(int *)(param_2 + 8) != 7 && (*(int *)(param_2 + 8) != 0)))) {
    bVar4 = 0;
  }
  else {
    bVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    bVar4 = bVar4 & 1;
  }
  *(byte *)(param_1 + 0xe) = bVar4 | bVar3;
  return 1;
}


