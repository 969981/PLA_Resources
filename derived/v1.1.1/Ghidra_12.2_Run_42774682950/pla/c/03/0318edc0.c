/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318edc0; name: FUN_0318edc0
 */


undefined4 * FUN_0318edc0(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 auVar21 [16];
  
  puVar8 = PTR_PTR_0434a080;
  lVar13 = *(long *)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0xc0);
  plVar2 = (long *)(param_1 + 0x130);
  lVar9 = *(long *)(param_1 + 0x58);
  plVar3 = (long *)(param_1 + 0x80);
  iVar5 = *param_2;
  uVar6 = *(uint *)(param_1 + 0x60);
  iVar19 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 4);
  if (iVar19 == -1) {
    iVar19 = *(int *)(param_1 + 200);
    auVar21._8_8_ = plVar1;
    auVar21._0_8_ = *plVar1;
    if (iVar19 < (int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff)) {
      iVar10 = iVar19;
    }
    else {
      auVar21 = FUN_0318a8d4(PTR_PTR_0434a080,iVar19 + 1,*plVar1,iVar19);
      iVar10 = *(int *)(param_1 + 200);
      *plVar1 = auVar21._0_8_;
    }
    puVar18 = (undefined4 *)(auVar21._0_8_ + (long)iVar10 * 0x14);
    *(int *)(param_1 + 200) = iVar19 + 1;
    *(undefined8 *)(puVar18 + 2) = 0xffffffffffffffff;
    puVar18[4] = 4;
    puVar14 = (undefined4 *)(lVar13 + (long)iVar5 * 0x14);
    *puVar18 = *puVar14;
    puVar18[1] = puVar14[1];
    uVar15 = *(undefined8 *)(puVar14 + 2);
    *(undefined2 *)(puVar18 + 4) = *(undefined2 *)(puVar14 + 4);
    *(undefined8 *)(puVar18 + 2) = uVar15;
    *(undefined2 *)((long)puVar18 + 0x12) = *(undefined2 *)((long)puVar14 + 0x12);
    puVar20 = (uint *)(param_1 + 0x13c);
    uVar11 = *puVar20;
    iVar10 = *(int *)(param_1 + 0x138);
    uVar12 = iVar10 + uVar6;
    if ((int)(uVar11 & 0x3fffffff) < (int)uVar12) {
      lVar13 = *plVar2;
      if (0x3fffffff < (int)uVar12) {
        FUN_032bd0a8(uVar12,auVar21._8_8_,auVar21._0_8_,lVar13);
        uVar11 = *puVar20;
      }
      uVar11 = (uVar11 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
      uVar7 = uVar12;
      if ((int)uVar12 <= (int)uVar11) {
        uVar7 = uVar11;
      }
      lVar13 = FUN_032bd1d4(puVar8,uVar7,4,lVar13,iVar10,puVar20);
      *plVar2 = lVar13;
    }
    else {
      lVar13 = *plVar2;
    }
    if (0 < (int)uVar6) {
      puVar4 = (undefined4 *)(lVar13 + (long)iVar10 * 4);
      puVar14 = (undefined4 *)(lVar9 + (long)(int)(uVar6 * iVar5) * 4);
      uVar11 = uVar6 & 3;
      if (2 < uVar6 - 1) {
        iVar10 = uVar11 - uVar6;
        puVar16 = puVar14;
        puVar17 = puVar4;
        do {
          *puVar17 = *puVar16;
          puVar17[1] = puVar16[1];
          puVar17[2] = puVar16[2];
          puVar14 = puVar16 + 4;
          puVar4 = puVar17 + 4;
          iVar10 = iVar10 + 4;
          puVar17[3] = puVar16[3];
          puVar16 = puVar14;
          puVar17 = puVar4;
        } while (iVar10 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar4 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    *(uint *)(param_1 + 0x138) = uVar12;
    *(int *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 4) = iVar19;
    puVar20 = (uint *)(param_1 + 0x8c);
    uVar12 = *puVar20;
    iVar19 = *(int *)(param_1 + 0x88);
    uVar6 = iVar19 + 1;
    if (iVar19 < (int)(uVar12 & 0x3fffffff)) {
      lVar9 = *plVar3;
    }
    else {
      lVar9 = *plVar3;
      if (0x3ffffffe < iVar19) {
        FUN_032bd0a8(uVar6);
        uVar12 = *puVar20;
      }
      uVar12 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      uVar11 = uVar6;
      if ((int)uVar6 <= (int)uVar12) {
        uVar11 = uVar12;
      }
      lVar9 = FUN_032bd1d4(puVar8,uVar11,4,lVar9,iVar19,puVar20);
      iVar19 = *(int *)(param_1 + 0x88);
      *plVar3 = lVar9;
    }
    *(int *)(lVar9 + (long)iVar19 * 4) = iVar5;
    *(uint *)(param_1 + 0x88) = uVar6;
  }
  else {
    puVar18 = (undefined4 *)(*plVar1 + (long)iVar19 * 0x14);
  }
  return puVar18;
}


