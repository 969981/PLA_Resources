/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e1380; name: FUN_031e1380
 */


undefined4 *
FUN_031e1380(long param_1,long *param_2,long param_3,long *param_4,long *param_5,long *param_6,
            int param_7,uint param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 auVar16 [16];
  
  puVar5 = PTR_PTR_0434a080;
  iVar14 = *(int *)(*param_5 + (long)param_7 * 4);
  if (iVar14 == -1) {
    iVar14 = (int)param_2[1];
    lVar7 = *param_2;
    if (iVar14 < (int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
      plVar6 = param_2;
      iVar9 = iVar14;
    }
    else {
      auVar16 = FUN_03192160(PTR_PTR_0434a080,iVar14 + 1,lVar7,iVar14);
      plVar6 = auVar16._8_8_;
      lVar7 = auVar16._0_8_;
      iVar9 = (int)param_2[1];
      *param_2 = lVar7;
    }
    puVar13 = (undefined4 *)(lVar7 + (long)iVar9 * 0x10);
    *(int *)(param_2 + 1) = iVar14 + 1;
    puVar2 = (undefined4 *)(param_1 + (long)param_7 * 0x10);
    *puVar13 = *puVar2;
    puVar13[1] = puVar2[1];
    *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar2 + 2);
    puVar15 = (uint *)((long)param_4 + 0xc);
    uVar10 = *puVar15;
    iVar9 = (int)param_4[1];
    uVar1 = iVar9 + param_8;
    if ((int)(uVar10 & 0x3fffffff) < (int)uVar1) {
      lVar8 = *param_4;
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1,plVar6,lVar7,lVar8);
        uVar10 = *puVar15;
      }
      uVar10 = (uVar10 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uVar4 = uVar1;
      if ((int)uVar1 <= (int)uVar10) {
        uVar4 = uVar10;
      }
      lVar7 = FUN_032bd1d4(puVar5,uVar4,4,lVar8,iVar9,puVar15);
      *param_4 = lVar7;
    }
    else {
      lVar7 = *param_4;
    }
    if (0 < (int)param_8) {
      puVar3 = (undefined4 *)(lVar7 + (long)iVar9 * 4);
      puVar2 = (undefined4 *)(param_3 + (long)(int)(param_8 * param_7) * 4);
      uVar10 = param_8 & 3;
      if (2 < param_8 - 1) {
        iVar9 = uVar10 - param_8;
        puVar11 = puVar2;
        puVar12 = puVar3;
        do {
          *puVar12 = *puVar11;
          puVar12[1] = puVar11[1];
          puVar12[2] = puVar11[2];
          puVar2 = puVar11 + 4;
          puVar3 = puVar12 + 4;
          iVar9 = iVar9 + 4;
          puVar12[3] = puVar11[3];
          puVar11 = puVar2;
          puVar12 = puVar3;
        } while (iVar9 != 0);
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *(uint *)(param_4 + 1) = uVar1;
    *(int *)(*param_5 + (long)param_7 * 4) = iVar14;
    puVar15 = (uint *)((long)param_6 + 0xc);
    uVar10 = *puVar15;
    iVar14 = (int)param_6[1];
    uVar1 = iVar14 + 1;
    if (iVar14 < (int)(uVar10 & 0x3fffffff)) {
      lVar7 = *param_6;
    }
    else {
      lVar7 = *param_6;
      if (0x3ffffffe < iVar14) {
        FUN_032bd0a8(uVar1);
        uVar10 = *puVar15;
      }
      uVar10 = (uVar10 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uVar4 = uVar1;
      if ((int)uVar1 <= (int)uVar10) {
        uVar4 = uVar10;
      }
      lVar7 = FUN_032bd1d4(puVar5,uVar4,4,lVar7,iVar14,puVar15);
      iVar14 = (int)param_6[1];
      *param_6 = lVar7;
    }
    *(int *)(lVar7 + (long)iVar14 * 4) = param_7;
    *(uint *)(param_6 + 1) = uVar1;
  }
  else {
    puVar13 = (undefined4 *)(*param_2 + (long)iVar14 * 0x10);
  }
  return puVar13;
}


