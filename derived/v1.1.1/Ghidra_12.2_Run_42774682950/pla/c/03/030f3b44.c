/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f3b44; name: FUN_030f3b44
 */


void FUN_030f3b44(undefined8 *param_1,uint param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  short sVar8;
  undefined2 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined8 uVar23;
  long *plVar24;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  lVar17 = tpidr_el0;
  lVar16 = *(long *)(lVar17 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar16;
  }
  plVar10 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x50,0);
  plVar10[1] = 0xffffffff;
  plVar24 = plVar10 + 2;
  *plVar24 = 1;
  *plVar10 = (long)&PTR_LAB_042b5398;
  plVar10[4] = (long)&PTR_LAB_042b53d8;
  *(undefined4 *)(plVar10 + 5) = 0;
  plVar10[6] = 0;
  plVar10[7] = -0x8000000000000000;
  puVar7 = PTR_PTR_0434a080;
  *(char *)(plVar10 + 8) = (char)param_5;
  plVar10[9] = 0;
  if ((int)param_2 < 1) {
    *(uint *)(plVar10 + 7) = param_2;
  }
  else {
    if ((int)param_2 < 0x40000000) {
      uVar20 = 0x80000000;
    }
    else {
      FUN_032bd0a8(param_2);
      uVar20 = *(uint *)((long)plVar10 + 0x3c);
    }
    uVar13 = (uVar20 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    local_7c = param_2;
    if ((int)param_2 <= (int)uVar13) {
      local_7c = uVar13;
    }
    local_88 = (ulong)local_7c * 0x30;
    if (((int)local_7c < (int)(uVar20 & 0x3fffffff)) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar20 = *(uint *)((long)plVar10 + 0x3c);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88);
    if (-1 < (int)uVar20) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,0,(ulong)(uVar20 & 0x3fffffff) * 0x30);
    }
    if (local_88 < 0xbffffffd0) {
      uVar14 = (undefined4)(local_88 / 0x30);
    }
    else {
      uVar14 = 0x3fffffff;
    }
    *(undefined4 *)((long)plVar10 + 0x3c) = uVar14;
    plVar10[6] = (long)puVar11;
    uVar23 = param_1[1];
    *puVar11 = *param_1;
    puVar11[1] = uVar23;
    uVar23 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[5];
    puVar11[4] = param_1[4];
    puVar11[5] = uVar4;
    puVar11[2] = uVar23;
    puVar11[3] = uVar3;
    if (param_2 - 1 != 0) {
      uVar23 = param_1[7];
      puVar11[6] = param_1[6];
      puVar11[7] = uVar23;
      uVar23 = param_1[8];
      uVar3 = param_1[9];
      uVar4 = param_1[0xb];
      puVar11[10] = param_1[10];
      puVar11[0xb] = uVar4;
      puVar11[8] = uVar23;
      puVar11[9] = uVar3;
      if (param_2 != 2) {
        uVar23 = param_1[0xd];
        puVar11[0xc] = param_1[0xc];
        puVar11[0xd] = uVar23;
        uVar23 = param_1[0xe];
        uVar3 = param_1[0xf];
        uVar4 = param_1[0x11];
        puVar11[0x10] = param_1[0x10];
        puVar11[0x11] = uVar4;
        puVar11[0xe] = uVar23;
        puVar11[0xf] = uVar3;
        if (param_2 != 3) {
          uVar23 = param_1[0x13];
          puVar11[0x12] = param_1[0x12];
          puVar11[0x13] = uVar23;
          uVar23 = param_1[0x14];
          uVar3 = param_1[0x15];
          uVar4 = param_1[0x17];
          puVar11[0x16] = param_1[0x16];
          puVar11[0x17] = uVar4;
          puVar11[0x14] = uVar23;
          puVar11[0x15] = uVar3;
          if (param_2 != 4) {
            uVar23 = param_1[0x19];
            puVar11[0x18] = param_1[0x18];
            puVar11[0x19] = uVar23;
            uVar23 = param_1[0x1a];
            uVar3 = param_1[0x1b];
            uVar4 = param_1[0x1d];
            puVar11[0x1c] = param_1[0x1c];
            puVar11[0x1d] = uVar4;
            puVar11[0x1a] = uVar23;
            puVar11[0x1b] = uVar3;
            if (param_2 != 5) {
              uVar23 = param_1[0x1f];
              puVar11[0x1e] = param_1[0x1e];
              puVar11[0x1f] = uVar23;
              uVar23 = param_1[0x20];
              uVar3 = param_1[0x21];
              uVar4 = param_1[0x23];
              puVar11[0x22] = param_1[0x22];
              puVar11[0x23] = uVar4;
              iVar22 = param_2 - 6;
              puVar11[0x20] = uVar23;
              puVar11[0x21] = uVar3;
              if (iVar22 != 0) {
                puVar11 = puVar11 + 0x24;
                param_1 = param_1 + 0x24;
                do {
                  uVar23 = param_1[1];
                  iVar22 = iVar22 + -1;
                  *puVar11 = *param_1;
                  puVar11[1] = uVar23;
                  uVar23 = param_1[2];
                  uVar3 = param_1[3];
                  puVar2 = param_1 + 4;
                  uVar4 = param_1[5];
                  param_1 = param_1 + 6;
                  puVar11[4] = *puVar2;
                  puVar11[5] = uVar4;
                  puVar11[2] = uVar23;
                  puVar11[3] = uVar3;
                  puVar11 = puVar11 + 6;
                } while (iVar22 != 0);
              }
            }
          }
        }
      }
    }
    *(uint *)(plVar10 + 7) = param_2;
    if (1 < (int)param_2) {
      FUN_030f4800(plVar10[6],0,param_2 - 1);
    }
  }
  if ((param_5 >> 2 & 1) == 0) {
    sVar8 = -1;
  }
  else {
    lVar16 = *(long *)(lVar17 + 0x38d490);
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar16;
    }
    plVar12 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,0);
    lVar17 = plVar10[6];
    uVar20 = *(uint *)(plVar10 + 7);
    plVar12[1] = 0xffffffff;
    plVar19 = plVar12 + 2;
    *plVar19 = 1;
    *plVar12 = (long)&PTR_LAB_042b5438;
    plVar12[4] = (long)&PTR_LAB_042b5478;
    plVar12[5] = lVar17;
    plVar12[6] = 0;
    plVar12[7] = -0x8000000000000000;
    if ((int)uVar20 < 1) {
      lVar17 = 0;
      uVar13 = 0;
    }
    else {
      if ((int)uVar20 < 0x40000000) {
        uVar13 = 0x80000000;
      }
      else {
        FUN_032bd0a8(uVar20);
        uVar13 = *(uint *)((long)plVar12 + 0x3c);
      }
      uVar15 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar15) {
        uVar15 = 0x3fffffff;
      }
      local_7c = uVar20;
      if ((int)uVar20 <= (int)uVar15) {
        local_7c = uVar15;
      }
      local_88 = (ulong)local_7c << 4;
      if (((int)local_7c < (int)(uVar13 & 0x3fffffff)) || (0x3fffffff < (int)local_7c)) {
        local_78 = 1;
        puStack_70 = &DAT_0411b3b8;
        local_68 = &local_7c;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar13 = *(uint *)((long)plVar12 + 0x3c);
      }
      lVar17 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88);
      if (-1 < (int)uVar13) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,0,(ulong)(uVar13 & 0x3fffffff) << 4);
      }
      if (local_88 < 0x3fffffff0) {
        uVar14 = (undefined4)(local_88 >> 4);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)((long)plVar12 + 0x3c) = uVar14;
      uVar13 = *(uint *)(plVar12 + 7);
      plVar12[6] = lVar17;
    }
    if ((int)uVar13 < (int)uVar20) {
      puVar11 = (undefined8 *)(lVar17 + (long)(int)uVar13 * 0x10);
      *(uint *)(plVar12 + 7) = uVar20;
      puVar2 = (undefined8 *)(lVar17 + (long)(int)uVar20 * 0x10);
      *puVar11 = 0;
      puVar11[1] = 0x8000000000000000;
      if (puVar11 + 2 != puVar2) {
        puVar11[2] = 0;
        puVar11[3] = 0x8000000000000000;
        if (puVar11 + 4 != puVar2) {
          puVar11[4] = 0;
          puVar11[5] = 0x8000000000000000;
          if (puVar11 + 6 != puVar2) {
            puVar11[6] = 0;
            puVar11[7] = 0x8000000000000000;
            if (puVar11 + 8 != puVar2) {
              puVar11[8] = 0;
              puVar11[9] = 0x8000000000000000;
              if (puVar11 + 10 != puVar2) {
                puVar11[10] = 0;
                puVar11[0xb] = 0x8000000000000000;
                for (puVar11 = puVar11 + 0xc; puVar11 != puVar2; puVar11 = puVar11 + 2) {
                  *puVar11 = 0;
                  puVar11[1] = 0x8000000000000000;
                }
              }
            }
          }
        }
      }
    }
    else if ((int)uVar20 < (int)uVar13) {
      uVar18 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar13 << 4;
      *(uint *)(plVar12 + 7) = uVar20;
      lVar16 = (long)(int)uVar20 * 0x10 - uVar18;
      puVar21 = (undefined4 *)(lVar17 + uVar18 + -8);
      do {
        *puVar21 = 0;
        if ((-1 < (int)puVar21[1]) && (*(long *)(puVar21 + -2) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))
                    (puVar7,*(long *)(puVar21 + -2),((ulong)(uint)puVar21[1] & 0x3fffffff) * 0x30);
        }
        *(undefined8 *)(puVar21 + -2) = 0;
        lVar16 = lVar16 + 0x10;
        puVar21[1] = 0x80000000;
        puVar21 = puVar21 + -4;
      } while (lVar16 != 0);
    }
    sVar8 = FUN_0333b6e8(param_4,plVar12,0x40);
    plVar10[9] = plVar12[6];
    if (plVar12[1] != 0) {
      do {
        lVar17 = *plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *plVar19 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
  }
  uVar9 = FUN_0333b858(param_4,plVar10,param_3,1,0x40);
  if (plVar10[1] != 0) {
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (sVar8 != -1) {
    uVar13 = *(uint *)(param_4 + 0x334);
    iVar22 = *(int *)(param_4 + 0x330);
    uVar20 = iVar22 + 1;
    if (iVar22 < (int)(uVar13 & 0x3fffffff)) {
      lVar17 = *(long *)(param_4 + 0x328);
    }
    else {
      uVar23 = *(undefined8 *)(param_4 + 0x328);
      if (0x3ffffffe < iVar22) {
        FUN_032bd0a8(uVar20);
        uVar13 = *(uint *)(param_4 + 0x334);
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar15 = uVar20;
      if ((int)uVar20 <= (int)uVar13) {
        uVar15 = uVar13;
      }
      lVar17 = FUN_032bd1d4(puVar7,uVar15,4,uVar23,iVar22,(uint *)(param_4 + 0x334));
      iVar22 = *(int *)(param_4 + 0x330);
      *(long *)(param_4 + 0x328) = lVar17;
    }
    puVar1 = (undefined2 *)(lVar17 + (long)iVar22 * 4);
    *(uint *)(param_4 + 0x330) = uVar20;
    *puVar1 = uVar9;
    puVar1[1] = sVar8;
  }
  return;
}


