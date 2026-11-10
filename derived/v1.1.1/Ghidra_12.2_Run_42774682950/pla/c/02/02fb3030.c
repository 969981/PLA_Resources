/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb3030; name: FUN_02fb3030
 */


/* WARNING: Removing unreachable block (ram,0x02fb3134) */

void FUN_02fb3030(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar16 = param_2[5];
  param_1[3] = param_2[3];
  param_1[5] = lVar16;
  lVar16 = param_2[2];
  param_1[4] = param_2[4];
  param_1[2] = lVar16;
  uVar4 = *(uint *)(param_2 + 1);
  lVar16 = tpidr_el0;
  puVar1 = (undefined4 *)0x0;
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)(*param_2 + (long)param_2);
  }
  if (((int)uVar4 < 1) || (puVar1 == (undefined4 *)0x0)) goto LAB_02fb328c;
  uVar7 = uVar4 - 1 | (int)(uVar4 - 1) >> 0x10;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar7 = uVar7 | (int)uVar7 >> 8;
  uVar7 = uVar7 | (int)uVar7 >> 4;
  uVar7 = uVar7 | (int)uVar7 >> 2;
  uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
  if ((int)uVar7 < (int)uVar4) {
    local_68 = 0;
    local_78 = 0;
    local_70 = PTR_DAT_04372528;
    FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                 "Capacity reservation overflow",&local_78);
  }
  lVar17 = *(long *)(lVar16 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar17;
  }
  plVar9 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
  puVar10 = (undefined4 *)
            (**(code **)(*plVar9 + 0x10))(plVar9,(long)(int)uVar7 + (long)(int)uVar7 * 4,0);
  uVar5 = *(uint *)(param_1 + 1);
  puVar27 = (undefined4 *)0x0;
  if (*param_1 != 0) {
    puVar27 = (undefined4 *)(*param_1 + (long)param_1);
  }
  if (0 < (int)uVar5) {
    if (uVar5 == 1) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar25 = puVar27;
      puVar26 = puVar10;
      do {
        uVar6 = *puVar25;
        lVar17 = lVar17 + 2;
        *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar25 + 1);
        *puVar26 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar25 + 5);
        *(undefined1 *)((long)puVar26 + 9) = *(undefined1 *)((long)puVar25 + 9);
        *(undefined4 *)((long)puVar26 + 5) = uVar6;
        puVar26 = (undefined4 *)((long)puVar26 + 10);
        puVar25 = (undefined4 *)((long)puVar25 + 10);
      } while ((ulong)uVar5 - ((ulong)uVar5 & 1) != lVar17);
      if ((uVar5 & 1) == 0) goto LAB_02fb319c;
    }
    puVar27 = (undefined4 *)((long)puVar27 + lVar17 * 5);
    puVar26 = (undefined4 *)((long)puVar10 + lVar17 * 5);
    uVar6 = *puVar27;
    *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar27 + 1);
    *puVar26 = uVar6;
  }
LAB_02fb319c:
  if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
    uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((int)uVar5 <= (int)*(uint *)(param_1 + 1)) {
      uVar5 = *(uint *)(param_1 + 1);
    }
    lVar17 = 0;
    if (*param_1 != 0) {
      lVar17 = *param_1 + (long)param_1;
    }
    lVar18 = *(long *)(lVar16 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar18;
    }
    plVar9 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,(ulong)uVar5 * 5);
  }
  lVar17 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    lVar17 = (long)puVar10 - (long)param_1;
  }
  *(uint *)(param_1 + 1) = uVar4;
  *(uint *)((long)param_1 + 0xc) = uVar7 | 0x80000000;
  *param_1 = lVar17;
  lVar18 = 0;
  if (uVar4 != 1) {
    lVar18 = 0;
    puVar10 = puVar1;
    puVar27 = (undefined4 *)(lVar17 + (long)param_1);
    do {
      uVar6 = *puVar10;
      lVar18 = lVar18 + 2;
      *(undefined1 *)(puVar27 + 1) = *(undefined1 *)(puVar10 + 1);
      *puVar27 = uVar6;
      uVar6 = *(undefined4 *)((long)puVar10 + 5);
      *(undefined1 *)((long)puVar27 + 9) = *(undefined1 *)((long)puVar10 + 9);
      *(undefined4 *)((long)puVar27 + 5) = uVar6;
      puVar27 = (undefined4 *)((long)puVar27 + 10);
      puVar10 = (undefined4 *)((long)puVar10 + 10);
    } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar18);
  }
  if ((uVar4 & 1) != 0) {
    puVar27 = (undefined4 *)(lVar17 + (long)param_1 + lVar18 * 5);
    puVar1 = (undefined4 *)((long)puVar1 + lVar18 * 5);
    uVar6 = *puVar1;
    *(undefined1 *)(puVar27 + 1) = *(undefined1 *)(puVar1 + 1);
    *puVar27 = uVar6;
  }
LAB_02fb328c:
  lVar17 = param_2[6];
  uVar22 = *(undefined8 *)((long)param_2 + 0x35);
  plVar9 = param_1 + 8;
  *plVar9 = 0;
  *(undefined8 *)((long)param_1 + 0x35) = uVar22;
  param_1[6] = lVar17;
  param_1[9] = 0;
  lVar18 = param_2[8];
  uVar4 = *(uint *)(param_2 + 9);
  uVar29 = (ulong)uVar4;
  lVar17 = 0;
  if (lVar18 != 0) {
    lVar17 = lVar18 + (long)(param_2 + 8);
  }
  if ((0 < (int)uVar4) && (lVar17 != 0)) {
    uVar7 = uVar4 - 1 | (int)(uVar4 - 1) >> 0x10;
    uVar7 = uVar7 | (int)uVar7 >> 8;
    uVar7 = uVar7 | (int)uVar7 >> 4;
    uVar7 = uVar7 | (int)uVar7 >> 2;
    uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    if ((int)uVar7 < (int)uVar4) {
      local_68 = 0;
      local_78 = 0;
      local_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar18 = *(long *)(lVar16 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar18;
    }
    plVar11 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
    lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,(long)(int)uVar7 * 0x60,0);
    uVar28 = (ulong)*(uint *)(param_1 + 9);
    lVar18 = 0;
    if (param_1[8] != 0) {
      lVar18 = param_1[8] + (long)plVar9;
    }
    if (0 < (int)*(uint *)(param_1 + 9)) {
      lVar30 = 0;
      do {
        puVar21 = (undefined8 *)(lVar12 + lVar30);
        plVar11 = (long *)(lVar18 + lVar30);
        *puVar21 = 0;
        puVar21[1] = 0;
        lVar19 = plVar11[5];
        puVar21[3] = plVar11[3];
        puVar21[5] = lVar19;
        lVar19 = plVar11[2];
        puVar21[4] = plVar11[4];
        puVar21[2] = lVar19;
        uVar5 = *(uint *)(plVar11 + 1);
        pvVar3 = (void *)0x0;
        if (*plVar11 != 0) {
          pvVar3 = (void *)(*plVar11 + (long)plVar11);
        }
        if ((0 < (int)uVar5) && (pvVar3 != (void *)0x0)) {
          uVar8 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
          *(undefined4 *)((long)puVar21 + 0xc) = 0;
          uVar8 = uVar8 | (int)uVar8 >> 8;
          uVar8 = uVar8 | (int)uVar8 >> 4;
          uVar8 = uVar8 | (int)uVar8 >> 2;
          uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
          if ((int)uVar8 < (int)uVar5) {
            local_78 = 0;
            local_68 = 0;
            local_70 = PTR_DAT_04372528;
            FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow",&local_78);
          }
          lVar19 = *(long *)(lVar16 + 0x38d490);
          if (lVar19 == 0) {
            lVar19 = FUN_0333d16c(0,1);
            *(long *)(lVar16 + 0x38d490) = lVar19;
          }
          plVar13 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x10))
                                      (plVar13,-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                               (ulong)uVar8 << 2,0);
          if (0 < (int)*(uint *)(puVar21 + 1)) {
            pvVar15 = (void *)0x0;
            if (*(long *)(lVar12 + lVar30) != 0) {
              pvVar15 = (void *)(*(long *)(lVar12 + lVar30) + (long)puVar21);
            }
            memcpy(pvVar14,pvVar15,(ulong)*(uint *)(puVar21 + 1) << 2);
          }
          if ((int)*(uint *)((long)puVar21 + 0xc) < 0) {
            uVar2 = *(uint *)((long)puVar21 + 0xc) & 0x7fffffff;
            if ((int)uVar2 <= (int)*(uint *)(puVar21 + 1)) {
              uVar2 = *(uint *)(puVar21 + 1);
            }
            lVar19 = 0;
            if (*(long *)(lVar12 + lVar30) != 0) {
              lVar19 = *(long *)(lVar12 + lVar30) + (long)puVar21;
            }
            lVar23 = *(long *)(lVar16 + 0x38d490);
            if (lVar23 == 0) {
              lVar23 = FUN_0333d16c(0,1);
              *(long *)(lVar16 + 0x38d490) = lVar23;
            }
            plVar13 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
            (**(code **)(*plVar13 + 0x18))(plVar13,lVar19,(ulong)uVar2 << 2);
          }
          lVar19 = 0;
          if (pvVar14 != (void *)0x0) {
            lVar19 = (long)pvVar14 - (long)puVar21;
          }
          *(long *)(lVar12 + lVar30) = lVar19;
          *(uint *)(puVar21 + 1) = uVar5;
          *(uint *)((long)puVar21 + 0xc) = uVar8 | 0x80000000;
          memcpy((void *)(lVar19 + (long)puVar21),pvVar3,(ulong)uVar5 << 2);
        }
        *(int *)(puVar21 + 9) = (int)plVar11[9];
        *(undefined4 *)((long)puVar21 + 0x4c) = *(undefined4 *)((long)plVar11 + 0x4c);
        *(int *)(puVar21 + 10) = (int)plVar11[10];
        *(undefined4 *)((long)puVar21 + 0x54) = *(undefined4 *)((long)plVar11 + 0x54);
        *(char *)(puVar21 + 0xb) = (char)plVar11[0xb];
        *(undefined1 *)((long)puVar21 + 0x59) = *(undefined1 *)((long)plVar11 + 0x59);
        *(undefined1 *)((long)puVar21 + 0x5a) = *(undefined1 *)((long)plVar11 + 0x5a);
        *(undefined1 *)((long)puVar21 + 0x5b) = *(undefined1 *)((long)plVar11 + 0x5b);
        *(undefined2 *)((long)puVar21 + 0x5c) = *(undefined2 *)((long)plVar11 + 0x5c);
        *(undefined1 *)((long)puVar21 + 0x5e) = *(undefined1 *)((long)plVar11 + 0x5e);
        *(undefined1 *)((long)puVar21 + 0x5f) = *(undefined1 *)((long)plVar11 + 0x5f);
        lVar19 = plVar11[6];
        lVar23 = plVar11[8];
        uVar28 = uVar28 - 1;
        lVar30 = lVar30 + 0x60;
        puVar21[7] = plVar11[7];
        puVar21[8] = lVar23;
        puVar21[6] = lVar19;
      } while (uVar28 != 0);
    }
    if ((int)*(uint *)((long)param_1 + 0x4c) < 0) {
      uVar5 = *(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
      if ((int)uVar5 <= (int)*(uint *)(param_1 + 9)) {
        uVar5 = *(uint *)(param_1 + 9);
      }
      lVar18 = 0;
      if (param_1[8] != 0) {
        lVar18 = param_1[8] + (long)plVar9;
      }
      lVar30 = *(long *)(lVar16 + 0x38d490);
      if (lVar30 == 0) {
        lVar30 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar30;
      }
      plVar11 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar18,(ulong)uVar5 * 0x60);
    }
    *(uint *)(param_1 + 9) = uVar4;
    *(uint *)((long)param_1 + 0x4c) = uVar7 | 0x80000000;
    lVar18 = 0;
    if (lVar12 != 0) {
      lVar18 = lVar12 - (long)plVar9;
    }
    param_1[8] = lVar18;
    puVar21 = (undefined8 *)(lVar18 + (long)plVar9);
    if (uVar4 != 1) {
      iVar24 = (uVar4 & 1) - uVar4;
      puVar20 = puVar21;
      do {
        puVar21 = puVar20 + 0x18;
        *puVar20 = 0;
        puVar20[1] = 0;
        iVar24 = iVar24 + 2;
        puVar20[6] = 0;
        puVar20[7] = 0;
        puVar20[8] = 0;
        puVar20[9] = 0;
        puVar20[10] = 0;
        puVar20[0xb] = 0;
        puVar20[0xc] = 0;
        puVar20[0xd] = 0;
        puVar20[0x12] = 0;
        puVar20[0x13] = 0;
        puVar20[0x14] = 0;
        puVar20[0x15] = 0;
        puVar20[0x16] = 0;
        puVar20[0x17] = 0;
        puVar20[3] = 0x7f7fffee7f7fffee;
        puVar20[2] = 0x7f7fffee7f7fffee;
        puVar20[5] = 0xff7fffeeff7fffee;
        puVar20[4] = 0xff7fffeeff7fffee;
        puVar20[0xf] = 0x7f7fffee7f7fffee;
        puVar20[0xe] = 0x7f7fffee7f7fffee;
        puVar20[0x11] = 0xff7fffeeff7fffee;
        puVar20[0x10] = 0xff7fffeeff7fffee;
        puVar20 = puVar21;
      } while (iVar24 != 0);
    }
    if ((uVar4 & 1) != 0) {
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = 0;
      puVar21[7] = 0;
      puVar21[8] = 0;
      puVar21[9] = 0;
      puVar21[10] = 0;
      puVar21[0xb] = 0;
      puVar21[3] = 0x7f7fffee7f7fffee;
      puVar21[2] = 0x7f7fffee7f7fffee;
      puVar21[5] = 0xff7fffeeff7fffee;
      puVar21[4] = 0xff7fffeeff7fffee;
    }
    lVar12 = *plVar9;
    lVar18 = 0;
    do {
      puVar21 = (undefined8 *)((long)plVar9 + lVar18 + lVar12);
      plVar11 = (long *)(lVar17 + lVar18);
      *puVar21 = 0;
      puVar21[1] = 0;
      lVar30 = plVar11[5];
      puVar21[3] = plVar11[3];
      puVar21[5] = lVar30;
      lVar30 = plVar11[2];
      puVar21[4] = plVar11[4];
      puVar21[2] = lVar30;
      uVar4 = *(uint *)(plVar11 + 1);
      pvVar3 = (void *)0x0;
      if (*plVar11 != 0) {
        pvVar3 = (void *)(*plVar11 + (long)plVar11);
      }
      if ((0 < (int)uVar4) && (pvVar3 != (void *)0x0)) {
        uVar7 = uVar4 - 1 | (int)(uVar4 - 1) >> 0x10;
        *(undefined4 *)((long)puVar21 + 0xc) = 0;
        uVar7 = uVar7 | (int)uVar7 >> 8;
        uVar7 = uVar7 | (int)uVar7 >> 4;
        uVar7 = uVar7 | (int)uVar7 >> 2;
        uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
        if ((int)uVar7 < (int)uVar4) {
          local_78 = 0;
          local_68 = 0;
          local_70 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_78);
        }
        lVar30 = *(long *)(lVar16 + 0x38d490);
        if (lVar30 == 0) {
          lVar30 = FUN_0333d16c(0,1);
          *(long *)(lVar16 + 0x38d490) = lVar30;
        }
        plVar13 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
        pvVar14 = (void *)(**(code **)(*plVar13 + 0x10))
                                    (plVar13,-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 |
                                             (ulong)uVar7 << 2,0);
        if (0 < (int)*(uint *)(puVar21 + 1)) {
          lVar30 = *(long *)((long)plVar9 + lVar18 + lVar12);
          pvVar15 = (void *)0x0;
          if (lVar30 != 0) {
            pvVar15 = (void *)(lVar30 + (long)puVar21);
          }
          memcpy(pvVar14,pvVar15,(ulong)*(uint *)(puVar21 + 1) << 2);
        }
        if ((int)*(uint *)((long)puVar21 + 0xc) < 0) {
          uVar5 = *(uint *)((long)puVar21 + 0xc) & 0x7fffffff;
          lVar30 = *(long *)((long)plVar9 + lVar18 + lVar12);
          if ((int)uVar5 <= (int)*(uint *)(puVar21 + 1)) {
            uVar5 = *(uint *)(puVar21 + 1);
          }
          lVar19 = 0;
          if (lVar30 != 0) {
            lVar19 = lVar30 + (long)puVar21;
          }
          lVar30 = *(long *)(lVar16 + 0x38d490);
          if (lVar30 == 0) {
            lVar30 = FUN_0333d16c(0,1);
            *(long *)(lVar16 + 0x38d490) = lVar30;
          }
          plVar13 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar19,(ulong)uVar5 << 2);
        }
        lVar30 = 0;
        if (pvVar14 != (void *)0x0) {
          lVar30 = (long)pvVar14 - (long)puVar21;
        }
        *(long *)((long)plVar9 + lVar18 + lVar12) = lVar30;
        *(uint *)(puVar21 + 1) = uVar4;
        *(uint *)((long)puVar21 + 0xc) = uVar7 | 0x80000000;
        memcpy((void *)(lVar30 + (long)puVar21),pvVar3,(ulong)uVar4 << 2);
      }
      *(int *)(puVar21 + 9) = (int)plVar11[9];
      *(undefined4 *)((long)puVar21 + 0x4c) = *(undefined4 *)((long)plVar11 + 0x4c);
      *(int *)(puVar21 + 10) = (int)plVar11[10];
      *(undefined4 *)((long)puVar21 + 0x54) = *(undefined4 *)((long)plVar11 + 0x54);
      *(char *)(puVar21 + 0xb) = (char)plVar11[0xb];
      *(undefined1 *)((long)puVar21 + 0x59) = *(undefined1 *)((long)plVar11 + 0x59);
      *(undefined1 *)((long)puVar21 + 0x5a) = *(undefined1 *)((long)plVar11 + 0x5a);
      *(undefined1 *)((long)puVar21 + 0x5b) = *(undefined1 *)((long)plVar11 + 0x5b);
      *(undefined2 *)((long)puVar21 + 0x5c) = *(undefined2 *)((long)plVar11 + 0x5c);
      *(undefined1 *)((long)puVar21 + 0x5e) = *(undefined1 *)((long)plVar11 + 0x5e);
      *(undefined1 *)((long)puVar21 + 0x5f) = *(undefined1 *)((long)plVar11 + 0x5f);
      lVar30 = plVar11[6];
      lVar19 = plVar11[8];
      uVar29 = uVar29 - 1;
      lVar18 = lVar18 + 0x60;
      puVar21[7] = plVar11[7];
      puVar21[8] = lVar19;
      puVar21[6] = lVar30;
    } while (uVar29 != 0);
  }
  plVar9 = param_1 + 10;
  *plVar9 = 0;
  param_1[0xb] = 0;
  lVar17 = param_2[10];
  iVar24 = (int)param_2[0xb];
  pvVar3 = (void *)0x0;
  if (lVar17 != 0) {
    pvVar3 = (void *)(lVar17 + (long)(param_2 + 10));
  }
  if ((0 < iVar24) && (pvVar3 != (void *)0x0)) {
    uVar4 = iVar24 - 1U | (int)(iVar24 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < iVar24) {
      local_68 = 0;
      local_78 = 0;
      local_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar17 = *(long *)(lVar16 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar17;
    }
    plVar11 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
    pvVar15 = (void *)(**(code **)(*plVar11 + 0x10))
                                (plVar11,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar4 << 2,0);
    pvVar14 = (void *)0x0;
    if (param_1[10] != 0) {
      pvVar14 = (void *)(param_1[10] + (long)plVar9);
    }
    memcpy(pvVar15,pvVar14,(long)(int)param_1[0xb] << 2);
    if ((int)*(uint *)((long)param_1 + 0x5c) < 0) {
      uVar7 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff;
      if ((int)uVar7 <= (int)*(uint *)(param_1 + 0xb)) {
        uVar7 = *(uint *)(param_1 + 0xb);
      }
      lVar17 = 0;
      if (param_1[10] != 0) {
        lVar17 = param_1[10] + (long)plVar9;
      }
      lVar18 = *(long *)(lVar16 + 0x38d490);
      if (lVar18 == 0) {
        lVar18 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar18;
      }
      plVar11 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar17,(ulong)uVar7 << 2);
    }
    lVar17 = 0;
    if (pvVar15 != (void *)0x0) {
      lVar17 = (long)pvVar15 - (long)plVar9;
    }
    *(int *)(param_1 + 0xb) = iVar24;
    *(uint *)((long)param_1 + 0x5c) = uVar4 | 0x80000000;
    param_1[10] = lVar17;
    memcpy((void *)(lVar17 + (long)plVar9),pvVar3,(long)iVar24 << 2);
  }
  plVar9 = param_1 + 0xc;
  *plVar9 = 0;
  param_1[0xd] = 0;
  lVar17 = param_2[0xc];
  iVar24 = (int)param_2[0xd];
  pvVar3 = (void *)0x0;
  if (lVar17 != 0) {
    pvVar3 = (void *)(lVar17 + (long)(param_2 + 0xc));
  }
  if ((0 < iVar24) && (pvVar3 != (void *)0x0)) {
    uVar4 = iVar24 - 1U | (int)(iVar24 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < iVar24) {
      local_68 = 0;
      local_78 = 0;
      local_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar17 = *(long *)(lVar16 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar17;
    }
    plVar11 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
    pvVar15 = (void *)(**(code **)(*plVar11 + 0x10))
                                (plVar11,-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 |
                                         (ulong)uVar4 << 1,0);
    pvVar14 = (void *)0x0;
    if (param_1[0xc] != 0) {
      pvVar14 = (void *)(param_1[0xc] + (long)plVar9);
    }
    memcpy(pvVar15,pvVar14,(long)(int)param_1[0xd] << 1);
    if ((int)*(uint *)((long)param_1 + 0x6c) < 0) {
      uVar7 = *(uint *)((long)param_1 + 0x6c) & 0x7fffffff;
      if ((int)uVar7 <= (int)*(uint *)(param_1 + 0xd)) {
        uVar7 = *(uint *)(param_1 + 0xd);
      }
      lVar17 = 0;
      if (param_1[0xc] != 0) {
        lVar17 = param_1[0xc] + (long)plVar9;
      }
      lVar18 = *(long *)(lVar16 + 0x38d490);
      if (lVar18 == 0) {
        lVar18 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar18;
      }
      plVar11 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar17,uVar7 << 1);
    }
    lVar16 = 0;
    if (pvVar15 != (void *)0x0) {
      lVar16 = (long)pvVar15 - (long)plVar9;
    }
    *(int *)(param_1 + 0xd) = iVar24;
    *(uint *)((long)param_1 + 0x6c) = uVar4 | 0x80000000;
    param_1[0xc] = lVar16;
    memcpy((void *)(lVar16 + (long)plVar9),pvVar3,(long)iVar24 << 1);
  }
  return;
}


