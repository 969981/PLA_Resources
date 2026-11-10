/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4de0; name: FUN_031a4de0
 */


void FUN_031a4de0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong local_58;
  
  *param_1 = &PTR_LAB_0430b368;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  plVar15 = param_1 + 7;
  *plVar15 = 0;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  if (param_2[7] != 0) {
    FUN_032d645c();
    lVar5 = *plVar15;
    *plVar15 = param_2[7];
    if (lVar5 != 0) {
      FUN_032d647c();
    }
  }
  puVar4 = PTR_PTR_0434a080;
  if (param_2 != param_1) {
    iVar14 = *(int *)(param_2 + 9);
    pvVar16 = (void *)param_2[8];
    pvVar6 = (void *)param_1[8];
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar14) {
      pvVar6 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar14,4,pvVar6,*(undefined4 *)(param_1 + 9),
                                    (long)param_1 + 0x4c);
      param_1[8] = pvVar6;
    }
    memcpy(pvVar6,pvVar16,(long)iVar14 << 2);
    *(int *)(param_1 + 9) = iVar14;
    uVar1 = *(uint *)(param_2 + 0xb);
    lVar18 = param_2[10];
    lVar17 = param_1[10];
    lVar5 = lVar17;
    if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) < (int)uVar1) {
      uVar2 = *(uint *)(param_1 + 0xb);
      uVar19 = (ulong)uVar2;
      FUN_032bd100(uVar1,8,*(uint *)((long)param_1 + 0x5c),&local_58);
      uVar3 = *(uint *)((long)param_1 + 0x5c);
      lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_58,&local_58);
      if (0 < (int)uVar2) {
        uVar8 = uVar19 & 3;
        if (uVar19 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar10 = (undefined8 *)(lVar5 + 0x10);
          puVar12 = (undefined8 *)(lVar17 + 0x10);
          do {
            puVar10[-2] = puVar12[-2];
            puVar10[-1] = puVar12[-1];
            *puVar10 = *puVar12;
            puVar11 = puVar12 + 1;
            lVar9 = lVar9 + 4;
            puVar12 = puVar12 + 4;
            puVar10[1] = *puVar11;
            puVar10 = puVar10 + 4;
          } while (uVar19 - uVar8 != lVar9);
        }
        if ((uVar2 & 3) != 0) {
          puVar10 = (undefined8 *)(lVar17 + lVar9 * 8);
          puVar12 = (undefined8 *)(lVar5 + lVar9 * 8);
          do {
            uVar8 = uVar8 - 1;
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar8 != 0);
        }
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar17,((ulong)uVar3 & 0x3fffffff) << 3);
      }
      if (local_58 < 0x1fffffff8) {
        uVar7 = (undefined4)(local_58 >> 3);
      }
      else {
        uVar7 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_1 + 0x5c) = uVar7;
      param_1[10] = lVar5;
    }
    uVar3 = *(uint *)(param_1 + 0xb);
    uVar2 = uVar3;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar1;
    }
    if ((lVar5 != lVar18) && (0 < (int)uVar2)) {
      uVar8 = (ulong)uVar2;
      uVar19 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        puVar10 = (undefined8 *)(lVar18 + 0x10);
        puVar12 = (undefined8 *)(lVar5 + 0x10);
        do {
          puVar12[-2] = puVar10[-2];
          puVar12[-1] = puVar10[-1];
          *puVar12 = *puVar10;
          puVar11 = puVar10 + 1;
          lVar17 = lVar17 + 4;
          puVar10 = puVar10 + 4;
          puVar12[1] = *puVar11;
          puVar12 = puVar12 + 4;
        } while (uVar8 - uVar19 != lVar17);
      }
      if ((uVar2 & 3) != 0) {
        puVar10 = (undefined8 *)(lVar5 + lVar17 * 8);
        puVar12 = (undefined8 *)(lVar18 + lVar17 * 8);
        do {
          uVar19 = uVar19 - 1;
          *puVar10 = *puVar12;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar19 != 0);
      }
      lVar5 = param_1[10];
    }
    if ((int)uVar3 < (int)uVar1) {
      uVar3 = uVar1 - uVar2 & 3;
      puVar10 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8);
      puVar12 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8);
      if (2 < uVar1 + ~uVar2) {
        iVar14 = (uVar1 - uVar2) - uVar3;
        puVar11 = puVar10;
        puVar13 = puVar12;
        do {
          *puVar13 = *puVar11;
          puVar13[1] = puVar11[1];
          puVar13[2] = puVar11[2];
          puVar10 = puVar11 + 4;
          puVar12 = puVar13 + 4;
          iVar14 = iVar14 + -4;
          puVar13[3] = puVar11[3];
          puVar11 = puVar10;
          puVar13 = puVar12;
        } while (iVar14 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    *(uint *)(param_1 + 0xb) = uVar1;
    iVar14 = *(int *)(param_2 + 0xd);
    pvVar16 = (void *)param_2[0xc];
    pvVar6 = (void *)param_1[0xc];
    if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) < iVar14) {
      pvVar6 = (void *)FUN_032bd1d4(puVar4,iVar14,8,pvVar6,*(undefined4 *)(param_1 + 0xd),
                                    (long)param_1 + 0x6c);
      param_1[0xc] = pvVar6;
    }
    memcpy(pvVar6,pvVar16,(long)iVar14 << 3);
    *(int *)(param_1 + 0xd) = iVar14;
    iVar14 = *(int *)(param_2 + 0xf);
    pvVar16 = (void *)param_2[0xe];
    pvVar6 = (void *)param_1[0xe];
    if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) < iVar14) {
      pvVar6 = (void *)FUN_032bd1d4(puVar4,iVar14,0x18,pvVar6,*(undefined4 *)(param_1 + 0xf),
                                    (long)param_1 + 0x7c);
      param_1[0xe] = pvVar6;
    }
    memcpy(pvVar6,pvVar16,(long)iVar14 * 0x18);
    *(int *)(param_1 + 0xf) = iVar14;
    iVar14 = *(int *)(param_2 + 0x11);
    pvVar16 = (void *)param_2[0x10];
    pvVar6 = (void *)param_1[0x10];
    if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x3fffffff) < iVar14) {
      pvVar6 = (void *)FUN_032bd1d4(puVar4,iVar14,4,pvVar6,*(undefined4 *)(param_1 + 0x11),
                                    (long)param_1 + 0x8c);
      param_1[0x10] = pvVar6;
    }
    memcpy(pvVar6,pvVar16,(long)iVar14 << 2);
    *(int *)(param_1 + 0x11) = iVar14;
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  return;
}


