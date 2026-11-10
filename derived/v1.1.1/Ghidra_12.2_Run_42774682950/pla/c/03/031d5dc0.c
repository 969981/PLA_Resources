/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5dc0; name: FUN_031d5dc0
 */


undefined4 *
FUN_031d5dc0(long param_1,long *param_2,long param_3,long *param_4,long *param_5,long *param_6,
            int param_7,uint param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  
  puVar4 = PTR_PTR_0434a080;
  iVar15 = *(int *)(*param_5 + (long)param_7 * 4);
  if (iVar15 == -1) {
    iVar15 = (int)param_2[1];
    lVar6 = *param_2;
    if (iVar15 < (int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
      plVar5 = param_2;
      iVar8 = iVar15;
    }
    else {
      auVar17 = FUN_0318a8d4(PTR_PTR_0434a080,iVar15 + 1,lVar6,iVar15);
      plVar5 = auVar17._8_8_;
      lVar6 = auVar17._0_8_;
      iVar8 = (int)param_2[1];
      *param_2 = lVar6;
    }
    puVar14 = (undefined4 *)(lVar6 + (long)iVar8 * 0x14);
    *(int *)(param_2 + 1) = iVar15 + 1;
    *(undefined8 *)(puVar14 + 2) = 0xffffffffffffffff;
    puVar14[4] = 4;
    puVar10 = (undefined4 *)(param_1 + (long)param_7 * 0x14);
    *puVar14 = *puVar10;
    puVar14[1] = puVar10[1];
    uVar11 = *(undefined8 *)(puVar10 + 2);
    *(undefined2 *)(puVar14 + 4) = *(undefined2 *)(puVar10 + 4);
    *(undefined8 *)(puVar14 + 2) = uVar11;
    *(undefined2 *)((long)puVar14 + 0x12) = *(undefined2 *)((long)puVar10 + 0x12);
    puVar16 = (uint *)((long)param_4 + 0xc);
    uVar9 = *puVar16;
    iVar8 = (int)param_4[1];
    uVar1 = iVar8 + param_8;
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      lVar7 = *param_4;
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1,plVar5,lVar6,lVar7);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar6 = FUN_032bd1d4(puVar4,uVar3,4,lVar7,iVar8,puVar16);
      *param_4 = lVar6;
    }
    else {
      lVar6 = *param_4;
    }
    if (0 < (int)param_8) {
      puVar2 = (undefined4 *)(lVar6 + (long)iVar8 * 4);
      puVar10 = (undefined4 *)(param_3 + (long)(int)(param_8 * param_7) * 4);
      uVar9 = param_8 & 3;
      if (2 < param_8 - 1) {
        iVar8 = uVar9 - param_8;
        puVar12 = puVar10;
        puVar13 = puVar2;
        do {
          *puVar13 = *puVar12;
          puVar13[1] = puVar12[1];
          puVar13[2] = puVar12[2];
          puVar10 = puVar12 + 4;
          puVar2 = puVar13 + 4;
          iVar8 = iVar8 + 4;
          puVar13[3] = puVar12[3];
          puVar12 = puVar10;
          puVar13 = puVar2;
        } while (iVar8 != 0);
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(uint *)(param_4 + 1) = uVar1;
    *(int *)(*param_5 + (long)param_7 * 4) = iVar15;
    puVar16 = (uint *)((long)param_6 + 0xc);
    uVar9 = *puVar16;
    iVar15 = (int)param_6[1];
    uVar1 = iVar15 + 1;
    if (iVar15 < (int)(uVar9 & 0x3fffffff)) {
      lVar6 = *param_6;
    }
    else {
      lVar6 = *param_6;
      if (0x3ffffffe < iVar15) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar6 = FUN_032bd1d4(puVar4,uVar3,4,lVar6,iVar15,puVar16);
      iVar15 = (int)param_6[1];
      *param_6 = lVar6;
    }
    *(int *)(lVar6 + (long)iVar15 * 4) = param_7;
    *(uint *)(param_6 + 1) = uVar1;
  }
  else {
    puVar14 = (undefined4 *)(*param_2 + (long)iVar15 * 0x14);
  }
  return puVar14;
}


