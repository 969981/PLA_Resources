/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed3680; name: FUN_02ed3680
 */


undefined8 * FUN_02ed3680(long *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar16 = *param_1;
  lVar15 = lVar16;
  if (uVar4 != 0) {
    iVar9 = 0;
    uVar13 = uVar4;
    do {
      iVar2 = iVar9 + (uVar13 >> 1);
      lVar15 = *(long *)(lVar16 + (long)iVar2 * 8);
      if (*(float *)(lVar15 + 0x2a8) == (float)param_2) {
        uVar5 = *(uint *)(lVar15 + 0x2ac);
        uVar10 = (uint)((ulong)param_2 >> 0x20);
        uVar6 = *(uint *)(lVar15 + 0x2b0);
        if (uVar5 == uVar10 && uVar6 == param_3) break;
        bVar1 = param_3 < uVar6;
        if (uVar6 == param_3) {
          bVar1 = uVar10 < uVar5;
        }
        bVar7 = uVar6 < param_3;
        if (uVar6 == param_3) {
          bVar7 = uVar5 < uVar10;
        }
        if (*(char *)((long)param_1 + 0x12) != '\0') {
          bVar1 = bVar7;
        }
      }
      else {
        bVar1 = (float)param_2 < *(float *)(lVar15 + 0x2a8);
      }
      if (bVar1 != 0) {
        iVar9 = iVar2 + 1;
      }
      uVar13 = uVar13 - bVar1 >> 1;
      iVar2 = iVar9;
    } while (uVar13 != 0);
    lVar15 = lVar16 + (long)iVar2 * 8;
  }
  if (lVar15 == 0) {
    uVar13 = *(uint *)((long)param_1 + 0xc);
    if (uVar13 <= uVar4) {
      iVar9 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar9 = 1;
      }
      uVar13 = iVar9 + uVar13;
      lVar16 = (*DAT_0442d148)(0,lVar16,(ulong)uVar13 << 3);
      if (lVar16 == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = lVar16;
      *(uint *)((long)param_1 + 0xc) = uVar13;
    }
    if (uVar4 < uVar13) {
      uVar4 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      return (undefined8 *)(lVar16 + (ulong)uVar4 * 8);
    }
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0xc);
    lVar8 = lVar16;
    if (uVar13 <= uVar4) {
      iVar9 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar9 = 1;
      }
      uVar13 = iVar9 + uVar13;
      lVar8 = (*DAT_0442d148)(0,lVar16,(ulong)uVar13 << 3);
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar13;
    }
    if (uVar4 < uVar13) {
      uVar4 = *(uint *)(param_1 + 1);
      uVar11 = (ulong)(lVar15 - lVar16) >> 3;
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (uVar4 <= (uint)uVar11) {
        return (undefined8 *)(lVar8 + (uVar11 & 0xffffffff) * 8);
      }
      uVar11 = (ulong)(lVar15 - lVar16) >> 3 & 0xffffffff;
      puVar12 = (undefined8 *)((lVar8 + (ulong)uVar4 * 8) - 8);
      *(undefined8 *)(lVar8 + (ulong)uVar4 * 8) = *puVar12;
      puVar3 = (undefined8 *)(*param_1 + uVar11 * 8);
      if (puVar12 <= puVar3) {
        return puVar3;
      }
      do {
        puVar14 = puVar12 + -1;
        *puVar12 = *puVar14;
        puVar3 = (undefined8 *)(*param_1 + uVar11 * 8);
        puVar12 = puVar14;
      } while (puVar3 < puVar14);
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}


