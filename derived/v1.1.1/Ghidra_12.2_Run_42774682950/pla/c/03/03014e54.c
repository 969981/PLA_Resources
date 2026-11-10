/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014e54; name: FUN_03014e54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03014e54(undefined8 *param_1,ulong param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  MutexType *pMVar8;
  ulong extraout_x1;
  ulong uVar9;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  MutexType *pMVar15;
  long lVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  long lVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  *param_1 = param_4;
  param_1[1] = param_5;
  puVar17 = (uint *)((long)param_1 + 0x34);
  plVar7 = param_1 + 2;
  uVar9 = param_2;
  if ((param_3 <= *puVar17) && (param_3 < *(uint *)(param_1 + 3))) {
    uVar18 = param_3;
    do {
      if (*(char *)(*plVar7 + (long)(int)uVar18 * 0x80 + 0x5f) != '\0') goto LAB_030150f0;
      uVar18 = uVar18 + 1;
    } while (*(uint *)(param_1 + 3) != uVar18);
  }
  lVar16 = *(long *)*param_1;
  if (lVar16 != 0) {
    FUN_0301569c(lVar16 + 0x6f8,lVar16,param_1);
    uVar9 = extraout_x1;
  }
  uVar18 = *(uint *)(param_1 + 3);
  uVar20 = param_1[2];
  if ((param_3 <= *(uint *)((long)param_1 + 0x34)) && (param_3 < uVar18)) {
    uVar12 = param_3;
    do {
      if (*(char *)(uVar20 + (long)(int)uVar12 * 0x80 + 0x5f) != '\0') goto LAB_030150f0;
      uVar12 = uVar12 + 1;
    } while (uVar18 != uVar12);
  }
  lVar24 = param_1[4];
  uVar12 = uVar18;
  if (param_3 <= uVar18) {
    uVar12 = param_3;
  }
  iVar2 = *(int *)(param_1 + 5);
  if ((param_2 == 0) && (param_3 != 0)) {
    uVar14 = param_3 << 7 | 0x30;
    *(uint *)(param_1 + 5) = uVar14;
    auVar26 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,(long)(int)uVar14,0);
    uVar9 = auVar26._8_8_;
    param_1[4] = auVar26._0_8_;
    param_2 = auVar26._0_8_ + 0x3fU & 0xffffffffffffffc0;
  }
  else {
    param_1[4] = 0;
  }
  if (uVar20 != 0) {
    if (lVar24 == 0) {
      if (*(int *)((long)param_1 + 0x1c) < 0) {
        if (param_2 != uVar20) {
          FUN_032c4af0(param_2,uVar20,uVar12 << 7);
          uVar9 = extraout_x1_05;
        }
      }
      else {
        FUN_032c4a00(param_2,uVar20,uVar12 << 7);
        *(undefined4 *)(param_1 + 3) = 0;
        uVar9 = extraout_x1_03;
        if (-1 < (int)*(uint *)((long)param_1 + 0x1c)) {
          uVar9 = 0;
          if (*plVar7 != 0) {
            (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                      (PTR_PTR_0434a080,*plVar7,
                       ((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 7);
            uVar9 = extraout_x1_06;
          }
        }
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
      }
    }
    else {
      FUN_032c4a00(param_2,uVar20,uVar12 << 7);
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar24,(long)iVar2);
      uVar9 = extraout_x1_01;
    }
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 3) = param_3;
  *(uint *)((long)param_1 + 0x1c) = param_3 | 0x80000000;
  uVar5 = _UNK_0388a138;
  uVar21 = _DAT_0388a130;
  if (uVar18 < param_3) {
    puVar10 = (undefined8 *)(param_2 + (long)(int)uVar18 * 0x80);
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined2 *)((long)puVar10 + 0x5e) = 0xff;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0x7fffffff00000000;
    puVar10[1] = uVar5;
    *puVar10 = uVar21;
    uVar12 = uVar18;
    while (uVar12 = uVar12 + 1, uVar12 != param_3) {
      puVar10 = (undefined8 *)(*plVar7 + (long)(int)uVar12 * 0x80);
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      *(undefined2 *)((long)puVar10 + 0x5e) = 0xff;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      *(undefined2 *)(puVar10 + 0xb) = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0x7fffffff00000000;
      puVar10[1] = uVar5;
      *puVar10 = uVar21;
    }
    uVar12 = uVar18;
    if ((param_3 - uVar18 & 1) != 0) {
      uVar12 = uVar18 + 1;
      *(uint *)(*plVar7 + (long)(int)uVar18 * 0x80) = uVar12;
    }
    if (~uVar18 + param_3 != 0) {
      do {
        uVar20 = (ulong)uVar12;
        uVar25 = uVar12 >> 0x1f;
        uVar14 = uVar12 + 1;
        uVar12 = uVar12 + 2;
        *(uint *)(*plVar7 + (-(ulong)uVar25 & 0xffffff8000000000 | uVar20 << 7)) = uVar14;
        *(uint *)(*plVar7 + (-(ulong)(uVar14 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar14 << 7)) =
             uVar12;
      } while (param_3 != uVar12);
    }
    *(undefined4 *)
     (param_1[2] + (-(ulong)(param_3 - 1 >> 0x1f) & 0xffffff8000000000 | (ulong)(param_3 - 1) << 7))
         = 0xffffffff;
    uVar12 = *(uint *)((long)param_1 + 0x2c);
    if (uVar18 == 0) {
      *(uint *)((long)param_1 + 0x2c) = uVar12 & 0xff000000;
      lVar24 = param_1[1];
    }
    else {
      uVar14 = uVar12 & 0xffffff;
      if (uVar14 == 0xffffff) {
        *(uint *)((long)param_1 + 0x2c) = uVar12 & 0xff000000 | uVar18 & 0xffffff;
        lVar24 = param_1[1];
      }
      else {
        do {
          puVar19 = (uint *)(*plVar7 + (long)(int)uVar14 * 0x80);
          uVar14 = *puVar19;
        } while (uVar14 != 0xffffffff);
        *puVar19 = uVar18;
        lVar24 = param_1[1];
      }
    }
  }
  else {
    FUN_03015754(plVar7);
    lVar24 = param_1[1];
    uVar9 = extraout_x1_02;
  }
  if (lVar24 != 0) {
    uVar18 = *(uint *)(lVar24 + 0x390);
    uVar12 = *(uint *)(lVar24 + 0x394);
    if ((int)param_3 <= (int)uVar18) {
      param_3 = uVar18;
    }
    if ((int)(uVar12 & 0x3fffffff) < (int)param_3) {
      uVar21 = *(undefined8 *)(lVar24 + 0x388);
      if (0x3fffffff < (int)param_3) {
        FUN_032bd0a8(param_3);
        uVar12 = *(uint *)(lVar24 + 0x394);
      }
      uVar12 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      uVar14 = param_3;
      if ((int)param_3 <= (int)uVar12) {
        uVar14 = uVar12;
      }
      auVar26 = FUN_032bd1d4(PTR_PTR_0434a080,uVar14,0x20,uVar21,uVar18,(uint *)(lVar24 + 0x394));
      uVar9 = auVar26._8_8_;
      uVar18 = *(uint *)(lVar24 + 0x390);
      *(long *)(lVar24 + 0x388) = auVar26._0_8_;
    }
    if (((int)uVar18 < (int)param_3) || ((int)param_3 < (int)uVar18)) {
      *(uint *)(lVar24 + 0x390) = param_3;
    }
  }
  if (lVar16 != 0) {
    FUN_0301569c(lVar16 + 0x700,lVar16,param_1);
    uVar9 = extraout_x1_00;
  }
LAB_030150f0:
  uVar18 = *(uint *)((long)param_1 + 0x2c) & 0xffffff;
  if (uVar18 != 0xffffff) {
    puVar19 = (uint *)((long)param_1 + 0x2c);
    uVar12 = *(uint *)((long)param_1 + 0x2c);
    do {
      uVar14 = *puVar19;
      if (uVar14 == uVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar19,0x10);
        if (bVar4) {
          *puVar19 = uVar12 + 0x1000000 & 0xff000000 |
                     *(uint *)(*plVar7 + (ulong)uVar18 * 0x80) & 0xffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          piVar1 = (int *)(param_1 + 6);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar14 = *puVar17;
          uVar12 = uVar14 + 1;
          if (uVar12 <= uVar18) {
            uVar18 = uVar18 + 1;
            if (uVar12 <= uVar18) {
              uVar12 = uVar18;
            }
            do {
              if (*puVar17 != uVar14) {
                do {
                  ClearExclusiveLocal();
                  uVar14 = *puVar17;
                  uVar12 = uVar18;
                  if (uVar18 < uVar14 + 1) {
                    uVar12 = uVar14 + 1;
                  }
                  while (*puVar17 == uVar14) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar17,0x10);
                    if (bVar4) {
                      *puVar17 = uVar12 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_03015178;
                  }
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar17,0x10);
              if (bVar4) {
                *puVar17 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar18 = uVar14 & 0xffffff;
      uVar12 = uVar14;
    } while (uVar18 != 0xffffff);
  }
LAB_03015178:
  uVar5 = _UNK_0388a138;
  uVar21 = _DAT_0388a130;
  puVar10 = (undefined8 *)*plVar7;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  *(undefined1 *)((long)puVar10 + 0x5e) = 0xff;
  lVar16 = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  *(undefined2 *)(puVar10 + 0xb) = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[1] = uVar5;
  *puVar10 = uVar21;
  *(undefined1 *)(*plVar7 + 0x5f) = 1;
  do {
    puVar22 = (undefined4 *)param_1[lVar16 * 3 + 8];
    puVar17 = (uint *)(param_1 + lVar16 * 3 + 9);
    uVar14 = *puVar17;
    uVar20 = (ulong)uVar14;
    uVar18 = uVar14 + 1;
    puVar19 = (uint *)((long)param_1 + lVar16 * 0x18 + 0x4c);
    uVar25 = *puVar19;
    uVar12 = uVar25 & 0x3fffffff;
    puVar23 = puVar22;
    if ((int)uVar12 <= (int)uVar14) {
      if (0x3ffffffe < (int)uVar14) {
        FUN_032bd0a8(uVar18,uVar9,0x5a,"Invalid requestedCapacity {}");
        uVar25 = *puVar19;
        uVar12 = uVar25 & 0x3fffffff;
      }
      puVar6 = PTR_PTR_0434a080;
      local_7c = (uVar25 & 0x3fffffff) << 1;
      if (0x3ffffffe < local_7c) {
        local_7c = 0x3fffffff;
      }
      if ((int)local_7c < (int)uVar18) {
        local_7c = uVar14 + 1;
      }
      local_88 = (ulong)local_7c << 2;
      if ((int)local_7c < (int)uVar12 || 0x3fffffff < (int)local_7c) {
        local_78 = 1;
        puStack_70 = &DAT_0411b3b8;
        local_68 = &local_7c;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar25 = *puVar19;
      }
      auVar26 = (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_88,&local_88);
      uVar9 = auVar26._8_8_;
      puVar23 = auVar26._0_8_;
      if (0 < (int)uVar14) {
        puVar11 = puVar23;
        puVar13 = puVar22;
        do {
          uVar20 = uVar20 - 1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar20 != 0);
      }
      if (-1 < (int)uVar25) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar22,uVar25 << 2);
        uVar9 = extraout_x1_04;
      }
      uVar12 = (uint)(local_88 >> 2);
      if (0xfffffffb < local_88) {
        uVar12 = 0x3fffffff;
      }
      *puVar19 = uVar12;
      param_1[lVar16 * 3 + 8] = puVar23;
      uVar14 = *puVar17;
    }
    lVar16 = lVar16 + 1;
    puVar23[(int)uVar14] = 0;
    *puVar17 = uVar18;
  } while (lVar16 != 0x20);
  lVar16 = tpidr_el0;
  lVar24 = *(long *)(lVar16 + 0x38d490);
  if (lVar24 == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar24;
  }
  plVar7 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
  pMVar8 = (MutexType *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,0);
  nn::os::InitializeMutex(pMVar8,true,0);
  pMVar15 = (MutexType *)param_1[0x68];
  param_1[0x68] = pMVar8;
  if (pMVar15 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar15);
    lVar24 = *(long *)(lVar16 + 0x38d490);
    if (lVar24 == 0) {
      lVar24 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar24;
    }
    plVar7 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,pMVar15,0x20);
  }
  return;
}


