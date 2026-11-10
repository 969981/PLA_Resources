/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3865c; name: FUN_02c3865c
 */


void FUN_02c3865c(long *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ulong uVar19;
  
  uVar19 = (ulong)param_2;
  plVar7 = (long *)FUN_00d1603c();
  lVar9 = *plVar7;
  *(long *)PTR_DAT_0437b198 = lVar9;
  iVar10 = *(int *)(lVar9 + 0x238);
  *(undefined4 *)(param_1[0x1f] + uVar19 * 8) = param_3;
  puVar2 = (undefined4 *)(param_1[0x1f] + uVar19 * 8 + 4);
  if ((iVar10 == 3 | param_4) == 1) {
    *puVar2 = 0;
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1);
    if (lVar9 == 0) {
      uVar8 = 0x20000;
    }
    else {
      uVar8 = FUN_02c2e33c(lVar9,param_3,param_1[0xd]);
      uVar8 = uVar8 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar13 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar19 * 0x18 + 8) = uVar8;
    lVar11 = param_1[0x13];
    lVar9 = *(long *)(lVar11 + uVar19 * 0x18);
    if (*(char *)(lVar9 + 0x7c) == '\0') goto LAB_02c389ec;
    uVar12 = (uint)*(ushort *)(lVar9 + 0x78);
    if (*(ushort *)(lVar9 + 0x78) == 0) {
LAB_02c389c8:
      iVar10 = 0;
      goto LAB_02c389e4;
    }
    puVar15 = *(ushort **)(lVar13 + 0x58);
    iVar10 = 0;
    puVar14 = *(ushort **)(lVar9 + 0x58);
    do {
      while( true ) {
        uVar3 = *puVar15;
        *puVar14 = uVar3;
        if (uVar3 == 0x10) break;
        if (uVar3 == 0) goto LAB_02c389e4;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        iVar10 = iVar10 + 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_02c389d0;
      }
      uVar3 = puVar15[1];
      uVar1 = uVar3 + 2;
      bVar5 = uVar12 < uVar1;
      uVar12 = uVar12 - uVar1;
      if (bVar5 || uVar12 == 0) goto LAB_02c389e0;
      uVar17 = uVar3 + 1;
      uVar6 = uVar17 & 7;
      puVar18 = puVar14 + 1;
      *puVar18 = uVar3;
      puVar4 = puVar15 + 1;
      puVar16 = puVar15;
      if (uVar6 != 0) {
        lVar11 = 0;
        do {
          lVar13 = lVar11;
          uVar17 = uVar17 - 1;
          uVar6 = uVar6 - 1;
          *(undefined2 *)((long)puVar14 + lVar13 + 4) = *(undefined2 *)((long)puVar15 + lVar13 + 4);
          lVar11 = lVar13 + 2;
        } while (uVar6 != 0);
        puVar18 = (ushort *)((long)puVar14 + lVar13 + 4);
        puVar16 = (ushort *)((long)puVar15 + lVar13 + 2);
        puVar4 = puVar16 + 1;
        puVar14 = puVar18;
      }
      puVar15 = puVar4;
      if (6 < uVar3) {
        puVar14 = puVar18;
        do {
          puVar14[1] = puVar16[2];
          puVar14[2] = puVar15[2];
          puVar14[3] = puVar15[3];
          puVar14[4] = puVar15[4];
          puVar14[5] = puVar15[5];
          puVar14[6] = puVar15[6];
          puVar16 = puVar15 + 7;
          puVar14[7] = *puVar16;
          puVar15 = puVar15 + 8;
          uVar17 = uVar17 - 8;
          puVar14 = puVar14 + 8;
          *puVar14 = *puVar15;
        } while (uVar17 != 0);
      }
      iVar10 = uVar1 + iVar10;
    } while (uVar12 != 0);
  }
  else {
    *puVar2 = 1;
    lVar9 = (**(code **)(*param_1 + 0x68))(param_1);
    if (lVar9 == 0) {
      uVar8 = 0x60000;
    }
    else {
      uVar8 = FUN_02c2e33c(lVar9,param_3,param_1[0xd]);
      uVar8 = uVar8 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar13 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar19 * 0x18 + 8) = uVar8;
    lVar11 = param_1[0x13];
    lVar9 = *(long *)(lVar11 + uVar19 * 0x18);
    if (*(char *)(lVar9 + 0x7c) == '\0') goto LAB_02c389ec;
    uVar12 = (uint)*(ushort *)(lVar9 + 0x78);
    if (*(ushort *)(lVar9 + 0x78) == 0) goto LAB_02c389c8;
    puVar15 = *(ushort **)(lVar13 + 0x58);
    iVar10 = 0;
    puVar14 = *(ushort **)(lVar9 + 0x58);
    do {
      while( true ) {
        uVar3 = *puVar15;
        *puVar14 = uVar3;
        if (uVar3 == 0x10) break;
        if (uVar3 == 0) goto LAB_02c389e4;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        iVar10 = iVar10 + 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_02c389d0;
      }
      uVar3 = puVar15[1];
      uVar1 = uVar3 + 2;
      bVar5 = uVar12 < uVar1;
      uVar12 = uVar12 - uVar1;
      if (bVar5 || uVar12 == 0) goto LAB_02c389e0;
      uVar17 = uVar3 + 1;
      uVar6 = uVar17 & 7;
      puVar18 = puVar14 + 1;
      *puVar18 = uVar3;
      puVar4 = puVar15 + 1;
      puVar16 = puVar15;
      if (uVar6 != 0) {
        lVar11 = 0;
        do {
          lVar13 = lVar11;
          uVar17 = uVar17 - 1;
          uVar6 = uVar6 - 1;
          *(undefined2 *)((long)puVar14 + lVar13 + 4) = *(undefined2 *)((long)puVar15 + lVar13 + 4);
          lVar11 = lVar13 + 2;
        } while (uVar6 != 0);
        puVar18 = (ushort *)((long)puVar14 + lVar13 + 4);
        puVar16 = (ushort *)((long)puVar15 + lVar13 + 2);
        puVar4 = puVar16 + 1;
        puVar14 = puVar18;
      }
      puVar15 = puVar4;
      if (6 < uVar3) {
        puVar14 = puVar18;
        do {
          puVar14[1] = puVar16[2];
          puVar14[2] = puVar15[2];
          puVar14[3] = puVar15[3];
          puVar14[4] = puVar15[4];
          puVar14[5] = puVar15[5];
          puVar14[6] = puVar15[6];
          puVar16 = puVar15 + 7;
          puVar14[7] = *puVar16;
          puVar15 = puVar15 + 8;
          uVar17 = uVar17 - 8;
          puVar14 = puVar14 + 8;
          *puVar14 = *puVar15;
        } while (uVar17 != 0);
      }
      iVar10 = uVar1 + iVar10;
    } while (uVar12 != 0);
  }
LAB_02c389d0:
  if (iVar10 != 0) {
    iVar10 = iVar10 + -1;
    puVar14[-1] = 0;
  }
  goto LAB_02c389e4;
LAB_02c389e0:
  *puVar14 = 0;
LAB_02c389e4:
  *(short *)(lVar9 + 0x7a) = (short)iVar10;
  lVar11 = param_1[0x13];
LAB_02c389ec:
  *(undefined2 *)(lVar11 + uVar19 * 0x18 + 0x10) = 0;
  lVar9 = param_1[0x13] + uVar19 * 0x18;
  *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  return;
}


