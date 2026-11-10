/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f47a0; name: FUN_032f47a0
 */


void FUN_032f47a0(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined1 auVar30 [16];
  ulong local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  uint *local_1b0;
  int local_70;
  uint local_6c [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 6));
  FUN_032c31ec();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x444a260,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_0444a260 = DAT_0444a260 + 1;
    }
  } while (cVar5 != '\0');
  local_70 = (int)param_1[0x22];
  uVar23 = local_70 + 1U & 3;
  if ((local_70 + 1U & 3) == 0) {
    uVar23 = uVar23 + 1;
  }
  *(uint *)(param_1 + 0x22) = uVar23;
  if ((3 < DAT_0444aaf8) || (uVar9 = FUN_03327170(), (uVar9 & 1) != 0)) {
    uVar9 = FUN_03327170();
    if ((uVar9 & 1) == 0) {
      FUN_03326994(&local_1c0,&DAT_0444aaa8,4);
      local_1d0 = CONCAT44(local_1d0._4_4_,(int)param_1[5]);
      lVar26 = FUN_03326338(&local_1c0,"Inheritance State changing from {} to {} [{} lists]",
                            PTR_DAT_04388dd0,&local_70,param_1 + 0x22,&local_1d0);
      *(char **)(lVar26 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      *(undefined8 *)(lVar26 + 0x40) = 0x4ae;
      FUN_033269dc(&local_1c0);
    }
    else {
      FUN_03326a7c(&local_1c0,&DAT_0444aaa8,4);
      local_6c[0] = *(uint *)(param_1 + 5);
      lVar26 = FUN_03326338(&local_1c0,"Inheritance State changing from {} to {} [{} lists]",
                            PTR_DAT_04388dd0,&local_70,param_1 + 0x22,local_6c);
      *(char **)(lVar26 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      *(undefined8 *)(lVar26 + 0x40) = 0x4ae;
      FUN_03326adc(&local_1c0);
    }
  }
  puVar7 = PTR_PTR_0434a080;
  iVar8 = (int)param_1[5];
  if (iVar8 < 1) {
    bVar6 = false;
    local_1d8._0_4_ = 0x80000000;
    uVar23 = 0;
    puVar22 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)0x0;
  }
  else {
    lVar26 = 0;
    uVar23 = 0;
    puVar22 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)0x0;
    local_1d8 = 0x80000000;
    do {
      puVar20 = *(ulong **)(param_1[4] + lVar26 * 8);
      puVar29 = puVar28;
      if (puVar20 != (ulong *)0x0) {
        do {
          puVar28 = puVar29;
          if (puVar20[1] != 0) {
            uVar10 = (uint)local_1d8;
            uVar12 = uVar10 & 0x3fffffff;
            uVar15 = uVar23 + 1;
            if ((int)uVar23 < (int)uVar12) {
            }
            else {
              if (0x3ffffffe < (int)uVar23) {
                FUN_032bd0a8(uVar15);
              }
              uVar11 = (uVar10 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar11) {
                uVar11 = 0x3fffffff;
              }
              local_6c[0] = uVar15;
              if ((int)uVar15 <= (int)uVar11) {
                local_6c[0] = uVar11;
              }
              local_1d0 = (ulong)local_6c[0] << 5;
              if (((int)local_6c[0] < (int)uVar12) || (0x3fffffff < (int)local_6c[0])) {
                local_1c0 = 1;
                local_1b0 = local_6c;
                local_1b8 = &DAT_0411b3b8;
                FUN_03320b50(0x65816502,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                             ,0x5a,"Invalid requestedCapacity {}",&local_1c0);
              }
              puVar28 = (undefined8 *)
                        (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_1d0,&local_1d0);
              if (0 < (int)uVar23) {
                uVar14 = (ulong)uVar23;
                uVar9 = uVar14 & 3;
                if (uVar14 - 1 < 3) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  puVar16 = puVar28 + 8;
                  puVar19 = puVar22 + 8;
                  do {
                    uVar27 = puVar19[-8];
                    uVar21 = puVar19[-7];
                    lVar13 = lVar13 + 4;
                    uVar3 = puVar19[-5];
                    puVar16[-6] = puVar19[-6];
                    puVar16[-5] = uVar3;
                    puVar16[-8] = uVar27;
                    puVar16[-7] = uVar21;
                    uVar27 = puVar19[-4];
                    uVar21 = puVar19[-3];
                    uVar3 = puVar19[-1];
                    puVar16[-2] = puVar19[-2];
                    puVar16[-1] = uVar3;
                    puVar16[-4] = uVar27;
                    puVar16[-3] = uVar21;
                    uVar27 = *puVar19;
                    uVar21 = puVar19[1];
                    uVar3 = puVar19[3];
                    puVar16[2] = puVar19[2];
                    puVar16[3] = uVar3;
                    *puVar16 = uVar27;
                    puVar16[1] = uVar21;
                    uVar27 = puVar19[4];
                    uVar21 = puVar19[5];
                    puVar2 = puVar19 + 6;
                    uVar3 = puVar19[7];
                    puVar19 = puVar19 + 0x10;
                    puVar16[6] = *puVar2;
                    puVar16[7] = uVar3;
                    puVar16[4] = uVar27;
                    puVar16[5] = uVar21;
                    puVar16 = puVar16 + 0x10;
                  } while (uVar14 - uVar9 != lVar13);
                }
                if ((uVar23 & 3) != 0) {
                  puVar22 = puVar22 + lVar13 * 4;
                  puVar16 = puVar28 + lVar13 * 4;
                  do {
                    uVar27 = *puVar22;
                    uVar21 = puVar22[1];
                    uVar9 = uVar9 - 1;
                    puVar19 = puVar22 + 2;
                    uVar3 = puVar22[3];
                    puVar22 = puVar22 + 4;
                    puVar16[2] = *puVar19;
                    puVar16[3] = uVar3;
                    *puVar16 = uVar27;
                    puVar16[1] = uVar21;
                    puVar16 = puVar16 + 4;
                  } while (uVar9 != 0);
                }
              }
              if (-1 < (int)uVar10) {
                (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar29,(ulong)uVar12 << 5);
              }
              if (local_1d0 < 0x7ffffffe0) {
                local_1d8 = local_1d0 >> 5;
              }
              else {
                local_1d8 = 0x3fffffff;
              }
              puVar22 = puVar28;
            }
            puVar25 = puVar22 + (long)(int)uVar23 * 4;
            *puVar25 = (ulong)puVar20;
            *(int *)(puVar25 + 1) = (int)lVar26;
            auVar30 = FUN_032e2464(puVar20[1]);
            *(undefined1 (*) [16])(puVar25 + 2) = auVar30;
            if ((*(byte *)puVar20[1] >> 3 & 1) == 0) {
              CallSupervisor(0x26);
            }
            uVar23 = uVar15;
          }
          puVar20 = (ulong *)(*puVar20 & 0xfffffffffffffffc);
          puVar29 = puVar28;
        } while (puVar20 != (ulong *)0x0);
        iVar8 = (int)param_1[5];
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 < iVar8);
    if (uVar23 - 1 == 0 || (int)uVar23 < 1) {
      bVar6 = false;
    }
    else {
      FUN_032f7230(puVar22,0,uVar23 - 1);
      bVar6 = true;
    }
  }
  puVar7 = PTR_PTR_0434a090;
  local_1c0 = 0;
  local_1b8 = (undefined *)0x8000000000000000;
  lVar26 = (long)&local_1b8 + 4;
  if (0 < (int)uVar23) {
    local_1c0 = FUN_032f71a4(PTR_PTR_0434a090,uVar23,0,0,lVar26);
  }
  lVar13 = local_1c0;
  uVar15 = uVar23;
  if ((int)uVar23 < 0) {
    uVar15 = uVar23 + 1;
  }
  local_1d0 = 0;
  local_1c8 = 0xffffffff00000000;
  iVar8 = 8;
  do {
    bVar1 = iVar8 < (int)(uVar15 & 0xfffffffe);
    iVar8 = iVar8 << 1;
  } while (bVar1);
  FUN_02fec8dc(&local_1d0,puVar7);
  if (uVar23 != 0) {
    puVar20 = (ulong *)*puVar22;
    uVar27 = puVar22[2];
    uVar21 = puVar22[3];
    iVar8 = (int)local_1b8 + 1;
    if ((int)(local_1b8._4_4_ & 0x3fffffff) <= (int)local_1b8) {
      lVar13 = FUN_032f71a4(puVar7,iVar8,lVar13,(ulong)local_1b8 & 0xffffffff,lVar26);
      local_1c0 = lVar13;
    }
    *(ulong **)(lVar13 + (long)(int)local_1b8 * 8) = puVar20;
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,iVar8);
    if (bVar6) {
      uVar9 = 1;
      do {
        puVar29 = puVar22 + uVar9 * 4;
        puVar25 = (ulong *)*puVar29;
        uVar3 = puVar29[2];
        uVar4 = puVar29[3];
        if (puVar25[1] == puVar20[1]) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_032e3c78(uVar3,uVar4,uVar27,uVar21);
        }
        uVar14 = *puVar25 | 2;
        if (iVar8 != 0) {
          uVar14 = *puVar25 & 0xfffffffffffffffd;
        }
        *puVar25 = uVar14;
        if (iVar8 == 0) {
          uVar15 = *(uint *)((long)param_1 + 0x8c);
          uVar14 = puVar20[1];
          uVar24 = puVar25[1];
          if ((int)uVar15 < (int)param_1[0x11] * 2) {
            FUN_032c329c(param_1 + 0x10,uVar15 * 2 + 2);
            uVar15 = *(uint *)((long)param_1 + 0x8c);
          }
          uVar12 = (int)(uVar14 >> 4) * -0x61c8864f;
          while( true ) {
            uVar12 = uVar12 & uVar15;
            puVar25 = (ulong *)(param_1[0x10] + (ulong)uVar12 * 0x10);
            if (*puVar25 == 0xffffffffffffffff) break;
            uVar12 = uVar12 + 1;
          }
          *(int *)(param_1 + 0x11) = (int)param_1[0x11] + 1;
          *puVar25 = uVar14;
          *(ulong *)(param_1[0x10] + (ulong)uVar12 * 0x10 + 8) = uVar24;
          if ((int)local_1c8._4_4_ < (int)local_1c8 * 2) {
            FUN_02fec8dc(&local_1d0,puVar7,local_1c8._4_4_ * 2 + 2);
          }
          uVar15 = (int)(uVar24 >> 0x20) * -0x61c8864f;
          uVar12 = (int)uVar24 * -0x61c8864f;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
          uVar17 = (ulong)(local_1c8._4_4_ &
                          (uVar12 + (uVar12 >> 2) + uVar15 * 0x40 + 0x9e3779b9 ^ uVar15));
          uVar18 = *(ulong *)(local_1d0 + uVar17 * 0x10);
          if (uVar18 == 0xffffffffffffffff) {
            iVar8 = 1;
          }
          else {
            do {
              if (uVar18 == uVar24) {
                iVar8 = 0;
                break;
              }
              uVar17 = (ulong)((int)uVar17 + 1U & local_1c8._4_4_);
              uVar18 = *(ulong *)(local_1d0 + uVar17 * 0x10);
              iVar8 = 1;
            } while (uVar18 != 0xffffffffffffffff);
          }
          local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_1c8 + iVar8);
          uVar17 = -(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4;
          *(ulong *)(local_1d0 + uVar17) = uVar24;
          *(ulong *)(local_1d0 + uVar17 + 8) = uVar14;
        }
        else {
          iVar8 = (int)local_1b8 + 1;
          if ((int)(local_1b8._4_4_ & 0x3fffffff) <= (int)local_1b8) {
            local_1c0 = FUN_032f71a4(puVar7,iVar8,local_1c0,(ulong)local_1b8 & 0xffffffff,lVar26);
          }
          *(ulong **)(local_1c0 + (long)(int)local_1b8 * 8) = puVar25;
          local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,iVar8);
          uVar21 = uVar4;
          puVar20 = puVar25;
          uVar27 = uVar3;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar23);
    }
  }
  lVar26 = FUN_032f54d0(&local_1c0,0,(int)local_1b8 + -1);
  param_1[3] = lVar26;
  FUN_032f5550(&local_1c0,&local_1d0,(int)param_1[0x22]);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x444a260,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_0444a260 = DAT_0444a260 + 1;
    }
  } while (cVar5 != '\0');
  (**(code **)(*param_1 + 0x50))(param_1);
  if (0 < (int)local_1c8._4_4_) {
    lVar13 = 0;
    lVar26 = (ulong)local_1c8._4_4_ + 1;
    do {
      if (*(long *)(local_1d0 + lVar13) != -1) {
        *(undefined8 *)(local_1d0 + lVar13) = 0xffffffffffffffff;
      }
      lVar26 = lVar26 + -1;
      lVar13 = lVar13 + 0x10;
    } while (lVar26 != 0);
  }
  iVar8 = (int)local_1c8;
  local_1c8 = local_1c8 & 0xffffffff80000000;
  if ((-1 < iVar8) && (local_1d0 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,local_1d0,(long)(int)(local_1c8._4_4_ * 0x10 + 0x10));
  }
  uVar9 = (ulong)local_1b8;
  uVar14 = (ulong)local_1b8._4_4_;
  local_1b8 = (undefined *)((ulong)local_1b8._4_4_ << 0x20);
  if ((-1 < (long)uVar9) && (local_1c0 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_1c0,(uVar14 & 0x3fffffff) << 3);
  }
  if ((-1 < (int)(uint)local_1d8) && (puVar22 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,puVar28,(ulong)((uint)local_1d8 & 0x3fffffff) << 5);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 6));
  return;
}


