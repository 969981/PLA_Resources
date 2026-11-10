/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304b100; name: FUN_0304b100
 */


void FUN_0304b100(long *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  ushort *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined4 *puVar30;
  int *piVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  uint *puVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  undefined8 *puVar41;
  ulong uVar42;
  long lVar43;
  int iVar44;
  int iVar45;
  ushort *puVar46;
  ulong local_ac0;
  uint *local_a88;
  long local_a78;
  undefined4 *local_a50;
  undefined8 local_a48;
  undefined4 auStack_a40 [32];
  undefined8 *local_9c0;
  uint local_9b8;
  uint local_9b4;
  undefined8 local_9b0 [32];
  undefined1 *local_8b0;
  undefined8 local_8a8;
  undefined1 auStack_8a0 [1024];
  undefined1 *local_4a0;
  undefined8 local_498;
  undefined1 auStack_490 [1024];
  ulong local_90;
  uint local_84;
  ulong local_80;
  undefined *local_78;
  uint *local_70;
  
  lVar22 = *(long *)(param_2 + 8);
  if (param_7 != 0) {
    puVar41 = *(undefined8 **)(param_7 + 8);
    uVar23 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar23, puVar41 != (undefined8 *)0x0)) {
      *puVar41 = "StMakeGroups";
      uVar29 = nn::os::GetSystemTick();
      puVar41[1] = uVar29;
    }
  }
  lVar39 = *param_3;
  local_4a0 = auStack_490;
  local_498 = -0x7fffff0000000000;
  FUN_02f89518(lVar39,&local_4a0);
  puVar12 = local_4a0;
  puVar11 = PTR_PTR_0434a090;
  local_8a8 = -0x7fffff0000000000;
  uVar18 = *(uint *)(lVar39 + 0x10);
  puVar2 = local_4a0 + (long)(int)local_498 * 4;
  local_8b0 = auStack_8a0;
  if ((int)uVar18 < 0x101) {
    uVar36 = 0;
    if (uVar18 == 0) goto LAB_0304b1c4;
  }
  else {
    local_8a8._4_4_ = 0x80000100;
    if (0x3fffffff < (int)uVar18) {
      FUN_032bd0a8(uVar18);
    }
    uVar36 = (local_8a8._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar36) {
      uVar36 = 0x3fffffff;
    }
    uVar21 = uVar18;
    if ((int)uVar18 <= (int)uVar36) {
      uVar21 = uVar36;
    }
    local_8b0 = (undefined1 *)FUN_032bd1d4(puVar11,uVar21,4,auStack_8a0,0,(long)&local_8a8 + 4);
    uVar36 = (uint)local_8a8;
    if ((uint)local_8a8 == uVar18) goto LAB_0304b1c4;
  }
  local_8a8 = CONCAT44(local_8a8._4_4_,uVar18);
  uVar36 = uVar18;
LAB_0304b1c4:
  FUN_032bcd28(lVar39,puVar12,puVar2,local_8b0,local_8b0 + (long)(int)uVar36 * 4);
  if (param_7 != 0) {
    puVar41 = *(undefined8 **)(param_7 + 8);
    uVar23 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar23, puVar41 != (undefined8 *)0x0)) {
      *puVar41 = "StIterateGroups";
      uVar29 = nn::os::GetSystemTick();
      puVar41[1] = uVar29;
    }
  }
  puVar12 = local_4a0;
  puVar2 = local_8b0;
  local_9c0 = local_9b0;
  local_9b4 = 0x80000020;
  local_9b8 = 0;
  if ((int)local_498 < 2) {
    puVar35 = (uint *)0x0;
    uVar18 = 0;
    iVar45 = -0x80000000;
    local_a88 = (uint *)0x0;
  }
  else {
    lVar39 = param_1[0x71];
    uVar18 = 0;
    puVar35 = (uint *)0x0;
    uVar34 = 0x80000000;
    local_a88 = (uint *)0x0;
    uVar23 = 1;
    uVar36 = 1;
    do {
      local_a48 = 0x8000002000000000;
      local_a50 = auStack_a40;
      if (*(int *)(puVar12 + uVar23 * 4) < 1) {
        iVar45 = 0;
LAB_0304b344:
        uVar21 = iVar45 + uVar18;
        uVar33 = (uint)uVar34;
        if ((int)(uVar33 & 0x3fffffff) < (int)uVar21) {
          if (0x3fffffff < (int)uVar21) {
            FUN_032bd0a8(uVar21);
          }
          uVar20 = (uVar33 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          local_84 = uVar21;
          if ((int)uVar21 <= (int)uVar20) {
            local_84 = uVar20;
          }
          local_90 = (ulong)local_84 << 2;
          if (((int)local_84 < (int)(uVar33 & 0x3fffffff)) || (0x3fffffff < (int)local_84)) {
            local_80 = 1;
            local_78 = &DAT_0411b3b8;
            local_70 = &local_84;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_80);
          }
          puVar40 = (uint *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_90,&local_90);
          if (0 < (int)uVar18) {
            uVar34 = (ulong)uVar18;
            puVar28 = puVar40;
            do {
              uVar34 = uVar34 - 1;
              *puVar28 = *local_a88;
              puVar28 = puVar28 + 1;
              local_a88 = local_a88 + 1;
            } while (uVar34 != 0);
          }
          if (-1 < (int)uVar33) {
            (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar35,uVar33 << 2);
          }
          local_a88 = puVar40;
          puVar35 = puVar40;
          if (local_90 < 0xfffffffc) {
            uVar34 = local_90 >> 2;
            goto joined_r0x0304bd04;
          }
          uVar34 = 0x3fffffff;
        }
        else {
joined_r0x0304bd04:
          local_a48._4_4_ = (uint)(local_a48 >> 0x20);
        }
        if (iVar45 == 0) {
          uVar18 = uVar21;
        }
        else {
          lVar43 = (long)(int)uVar18 << 2;
          lVar38 = (long)iVar45 << 2;
          puVar16 = local_a50;
          do {
            lVar38 = lVar38 + -4;
            *(undefined4 *)((long)local_a88 + lVar43) = *puVar16;
            lVar43 = lVar43 + 4;
            puVar16 = puVar16 + 1;
          } while (lVar38 != 0);
          uVar18 = uVar21;
        }
      }
      else {
        lVar43 = 0;
        iVar45 = 0;
        iVar44 = 0;
        do {
          uVar33 = *(uint *)(puVar2 + (lVar43 + (int)uVar36) * 4);
          uVar21 = *(uint *)(*param_6 + (long)(int)uVar33 * 4);
          if ((uVar21 <= *(uint *)(lVar22 + 0x174)) &&
             (uVar21 != 0 &&
              *(char *)(*(long *)(lVar22 + 0x150) + (long)(int)uVar21 * 0x80 + 0x5f) != '\0')) {
            iVar45 = iVar45 + 1;
            iVar44 = (*(uint *)(*param_4 + (long)((int)uVar33 >> 5) * 4) >> (ulong)(uVar33 & 0x1f) &
                     1) + iVar44;
            cVar4 = *(char *)(lVar39 + (ulong)uVar21 * 0x20 + 0xe);
            if (cVar4 == '\x02') {
              iVar17 = (uint)local_a48;
              local_ac0 = local_a48 & 0xffffffff;
              uVar33 = (uint)local_a48 + 1;
              uVar20 = local_a48._4_4_ & 0x3fffffff;
              if ((int)uVar20 <= (int)(uint)local_a48) {
                if (0x3ffffffe < (int)(uint)local_a48) {
                  FUN_032bd0a8(uVar33);
                  uVar20 = local_a48._4_4_ & 0x3fffffff;
                }
                uVar19 = (local_a48._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar19) {
                  uVar19 = 0x3fffffff;
                }
                local_84 = uVar33;
                if ((int)uVar33 <= (int)uVar19) {
                  local_84 = uVar19;
                }
                local_90 = (ulong)local_84 << 2;
                if (((int)local_84 < (int)uVar20) ||
                   (uVar20 = local_a48._4_4_, 0x3fffffff < (int)local_84)) {
                  local_80 = 1;
                  local_70 = &local_84;
                  local_78 = &DAT_0411b3b8;
                  FUN_03320b50(0x65816502,
                               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                               ,0x5a,"Invalid requestedCapacity {}",&local_80);
                  uVar20 = local_a48._4_4_;
                }
                puVar16 = (undefined4 *)
                          (**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_90,&local_90);
                if (0 < iVar17) {
                  puVar26 = puVar16;
                  puVar30 = local_a50;
                  do {
                    *puVar26 = *puVar30;
                    local_ac0 = local_ac0 - 1;
                    puVar26 = puVar26 + 1;
                    puVar30 = puVar30 + 1;
                  } while (local_ac0 != 0);
                }
                if (-1 < (int)uVar20) {
                  (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a50,uVar20 << 2);
                }
                local_ac0 = local_a48;
                if (local_90 < 0xfffffffc) {
                  uVar20 = (uint)(local_90 >> 2);
                }
                else {
                  uVar20 = 0x3fffffff;
                }
                local_a48 = (ulong)uVar20 << 0x20;
                local_ac0 = local_ac0 & 0xffffffff;
                local_a50 = puVar16;
              }
              local_a50[(int)local_ac0] = uVar21;
              local_a48 = CONCAT44(local_a48._4_4_,uVar33);
            }
            else if (cVar4 == '\x01') {
              iVar44 = -1;
            }
          }
          uVar21 = local_9b8;
          puVar41 = local_9c0;
          lVar43 = lVar43 + 1;
        } while (lVar43 < *(int *)(puVar12 + uVar23 * 4));
        if ((iVar45 < 1) || (iVar44 != *(int *)(local_4a0 + uVar23 * 4))) {
          iVar45 = (uint)local_a48;
          goto LAB_0304b344;
        }
        uVar20 = local_9b4 & 0x3fffffff;
        uVar42 = (ulong)local_9b8;
        uVar33 = local_9b8 + 1;
        if ((int)uVar20 <= (int)local_9b8) {
          if (0x3ffffffe < (int)local_9b8) {
            FUN_032bd0a8(uVar33);
            uVar20 = local_9b4 & 0x3fffffff;
          }
          uVar19 = (local_9b4 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar19) {
            uVar19 = 0x3fffffff;
          }
          local_84 = uVar33;
          if ((int)uVar33 <= (int)uVar19) {
            local_84 = uVar19;
          }
          local_90 = (ulong)local_84 << 3;
          if (((int)local_84 < (int)uVar20) || (0x3fffffff < (int)local_84)) {
            local_80 = 1;
            local_78 = &DAT_0411b3b8;
            local_70 = &local_84;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_80);
            uVar20 = local_9b4 & 0x3fffffff;
          }
          uVar19 = local_9b4;
          puVar15 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_90,&local_90)
          ;
          if (0 < (int)uVar21) {
            puVar25 = puVar15;
            puVar27 = puVar41;
            do {
              uVar42 = uVar42 - 1;
              *puVar25 = *puVar27;
              puVar25 = puVar25 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar42 != 0);
          }
          if (-1 < (int)uVar19) {
            (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar41,(ulong)uVar20 << 3);
          }
          if (local_90 < 0x1fffffff8) {
            local_9b4 = (uint)(local_90 >> 3);
          }
          else {
            local_9b4 = 0x3fffffff;
          }
          local_9c0 = puVar15;
        }
        local_9c0[(int)local_9b8] = uVar23 | (ulong)uVar36 << 0x20;
        local_9b8 = uVar33;
      }
      uVar21 = local_a48._4_4_;
      iVar45 = (int)uVar34;
      local_a48 = (ulong)local_a48._4_4_ << 0x20;
      uVar36 = *(int *)(local_4a0 + uVar23 * 4) + uVar36;
      if ((-1 < (int)uVar21) && (local_a50 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a50,uVar21 << 2);
      }
      uVar23 = uVar23 + 1;
    } while ((long)uVar23 < (long)(int)local_498);
  }
  if (param_7 != 0) {
    puVar41 = *(undefined8 **)(param_7 + 8);
    uVar23 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar23, puVar41 != (undefined8 *)0x0)) {
      *puVar41 = "StAssignStatesAndIslands";
      uVar29 = nn::os::GetSystemTick();
      puVar41[1] = uVar29;
    }
  }
  puVar10 = PTR_PTR_0434a080;
  puVar40 = (uint *)((long)param_1 + 0x3a4);
  lVar39 = param_1[0x74];
  uVar36 = local_9b8 - (int)param_1[0x69];
  uVar36 = (uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU)) + (int)lVar39;
  uVar21 = *(uint *)((long)param_1 + 0x3a4);
  if ((int)(uVar21 & 0x3fffffff) < (int)uVar36) {
    lVar43 = param_1[0x73];
    if (0x3fffffff < (int)uVar36) {
      FUN_032bd0a8(uVar36);
      uVar21 = *puVar40;
    }
    uVar21 = (uVar21 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar21) {
      uVar21 = 0x3fffffff;
    }
    if ((int)uVar36 <= (int)uVar21) {
      uVar36 = uVar21;
    }
    lVar39 = FUN_032bd1d4(puVar10,uVar36,8,lVar43,(int)lVar39,puVar40);
    param_1[0x73] = lVar39;
  }
  else {
    lVar39 = param_1[0x73];
  }
  local_a50 = (undefined4 *)0x0;
  local_a48 = 0x8000000000000000;
  if (0 < (int)local_9b8) {
    local_a78 = FUN_032bd1d4(puVar11,local_9b8,4,0,0);
    local_a50 = (undefined4 *)local_a78;
    if ((int)local_9b8 < 1) {
      uVar36 = (uint)local_a48;
    }
    else {
      lVar43 = 0;
      lVar38 = tpidr_el0;
      do {
        if ((int)param_1[0x69] == 0) {
          lVar24 = *(long *)(lVar38 + 0x38d490);
          if (lVar24 == 0) {
            lVar24 = FUN_0333d16c(0,1);
            *(long *)(lVar38 + 0x38d490) = lVar24;
          }
          plVar13 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
          puVar41 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x70,0);
          *(int *)(puVar41 + 4) = (int)param_1[0x74];
          puVar41[5] = 0xffffffffffffffff;
          puVar41[6] = puVar41 + 8;
          *(undefined4 *)(puVar41 + 10) = 0;
          *puVar41 = 0;
          puVar41[1] = 0x8000000000000000;
          puVar41[2] = 0;
          puVar41[3] = 0x8000000000000000;
          *(undefined2 *)((long)puVar41 + 0x24) = 0;
          *(undefined4 *)(puVar41 + 0xd) = 0;
          puVar41[7] = 0x8000000100000000;
          puVar41[0xb] = 0;
          puVar41[0xc] = 0x8000000000000000;
          uVar21 = *(uint *)((long)param_1 + 0x3a4);
          iVar44 = (int)param_1[0x74];
          uVar36 = iVar44 + 1;
          if (iVar44 < (int)(uVar21 & 0x3fffffff)) {
            lVar24 = param_1[0x73];
            iVar17 = iVar44;
          }
          else {
            lVar24 = param_1[0x73];
            if (0x3ffffffe < iVar44) {
              FUN_032bd0a8(uVar36);
              uVar21 = *puVar40;
            }
            uVar21 = (uVar21 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar33 = uVar36;
            if ((int)uVar36 <= (int)uVar21) {
              uVar33 = uVar21;
            }
            lVar24 = FUN_032bd1d4(puVar10,uVar33,8,lVar24,iVar44,puVar40);
            iVar17 = (int)param_1[0x74];
            param_1[0x73] = lVar24;
          }
          *(undefined8 **)(lVar24 + (long)iVar17 * 8) = puVar41;
          *(uint *)(param_1 + 0x74) = uVar36;
        }
        else {
          iVar17 = (int)param_1[0x69] + -1;
          iVar44 = *(int *)(param_1[0x68] + (long)iVar17 * 4);
          *(int *)(param_1 + 0x69) = iVar17;
          lVar24 = *(long *)(lVar38 + 0x38d490);
          if (lVar24 == 0) {
            lVar24 = FUN_0333d16c(0,1);
            *(long *)(lVar38 + 0x38d490) = lVar24;
          }
          plVar13 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
          puVar41 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x70,0);
          *(int *)(puVar41 + 4) = iVar44;
          puVar41[5] = 0xffffffffffffffff;
          puVar41[6] = puVar41 + 8;
          *puVar41 = 0;
          puVar41[1] = 0x8000000000000000;
          *(undefined2 *)((long)puVar41 + 0x24) = 0;
          puVar41[7] = 0x8000000100000000;
          *(undefined4 *)(puVar41 + 10) = 0;
          *(undefined4 *)(puVar41 + 0xd) = 0;
          puVar41[2] = 0;
          puVar41[3] = 0x8000000000000000;
          puVar41[0xb] = 0;
          puVar41[0xc] = 0x8000000000000000;
          *(undefined8 **)(param_1[0x73] + (long)iVar44 * 8) = puVar41;
        }
        iVar8 = *(int *)(local_9c0 + lVar43);
        iVar17 = *(int *)(puVar12 + (long)iVar8 * 4);
        if (0 < iVar17) {
          iVar7 = *(int *)((long)local_9c0 + lVar43 * 8 + 4);
          lVar24 = 0;
          do {
            uVar36 = *(uint *)(*param_6 + (long)*(int *)(puVar2 + (lVar24 + iVar7) * 4) * 4);
            lVar37 = *(long *)(lVar22 + 0x150) + (ulong)uVar36 * 0x80;
            iVar3 = *(int *)(lVar37 + 0x4c);
            if ((iVar3 != 0 && iVar3 != 0x7fffffff) &&
               (piVar31 = (int *)(param_1[0x71] + (long)(int)uVar36 * 0x20 + 0x10),
               *piVar31 != iVar44)) {
              *piVar31 = iVar44;
              lVar32 = *param_1;
              uVar36 = *(uint *)(lVar37 + 0x48);
              uVar23 = (ulong)uVar36 & 0xffffff;
              lVar37 = *(long *)(lVar32 + 0x38);
              plVar13 = *(long **)(lVar39 + (long)iVar44 * 8);
              bVar5 = *(byte *)(lVar37 + uVar23 * 0xc0 + 0x88);
              while( true ) {
                if ((bVar5 & 1) != 0) {
                  iVar17 = (int)plVar13[1];
                  uVar33 = *(uint *)((long)plVar13 + 0xc);
                  uVar21 = iVar17 + 1;
                  if (iVar17 < (int)(uVar33 & 0x3fffffff)) {
                    lVar14 = *plVar13;
                  }
                  else {
                    lVar14 = *plVar13;
                    if (0x3ffffffe < iVar17) {
                      FUN_032bd0a8(uVar21);
                      uVar33 = *(uint *)((long)plVar13 + 0xc);
                    }
                    uVar33 = (uVar33 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar33) {
                      uVar33 = 0x3fffffff;
                    }
                    uVar20 = uVar21;
                    if ((int)uVar21 <= (int)uVar33) {
                      uVar20 = uVar33;
                    }
                    lVar14 = FUN_032bd1d4(puVar10,uVar20,4,lVar14,iVar17);
                    *plVar13 = lVar14;
                    iVar17 = (int)plVar13[1];
                  }
                  lVar37 = lVar37 + uVar23 * 0xc0;
                  *(undefined4 *)(lVar14 + (long)iVar17 * 4) = *(undefined4 *)(lVar37 + 0x50);
                  *(uint *)(plVar13 + 1) = uVar21;
                  uVar21 = *(uint *)(lVar37 + 0x50);
                  if (uVar21 < *(uint *)((long)plVar13 + 0x2c)) {
                    *(uint *)((long)plVar13 + 0x2c) = uVar21;
                    *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(lVar32 + 0x5b8);
                  }
                }
                lVar37 = *(long *)(lVar32 + 0x38);
                uVar21 = *(uint *)(lVar37 + uVar23 * 0xc0 + 0x84);
                if (uVar21 == uVar36) break;
                uVar23 = (ulong)(uVar21 & 0xffffff);
                bVar5 = *(byte *)(lVar37 + uVar23 * 0xc0 + 0x88);
              }
              iVar17 = *(int *)(puVar12 + (long)iVar8 * 4);
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < iVar17);
        }
        uVar23 = local_a48;
        uVar21 = local_a48._4_4_;
        uVar36 = (uint)local_a48 + 1;
        if ((int)(local_a48._4_4_ & 0x3fffffff) <= (int)(uint)local_a48) {
          if (0x3ffffffe < (int)(uint)local_a48) {
            FUN_032bd0a8(uVar36);
          }
          uVar21 = (uVar21 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar21) {
            uVar21 = 0x3fffffff;
          }
          uVar33 = uVar36;
          if ((int)uVar36 <= (int)uVar21) {
            uVar33 = uVar21;
          }
          local_a78 = FUN_032bd1d4(puVar11,uVar33,4,local_a78,uVar23 & 0xffffffff,
                                   (long)&local_a48 + 4);
          local_a50 = (undefined4 *)local_a78;
        }
        *(int *)(local_a78 + (long)(int)(uint)local_a48 * 4) = iVar44;
        lVar43 = lVar43 + 1;
        local_a48 = CONCAT44(local_a48._4_4_,uVar36);
      } while (lVar43 < (int)local_9b8);
    }
    if (0 < (int)uVar36) {
      lVar39 = 0;
      do {
        plVar13 = *(long **)(param_1[0x73] + (long)*(int *)(local_a78 + lVar39 * 4) * 8);
        iVar44 = (int)plVar13[1];
        if (0 < iVar44) {
          lVar43 = *param_1;
          if ((*(byte *)(*(long *)(lVar43 + 0x38) + ((ulong)*(uint *)*plVar13 & 0xffffff) * 0xc0 +
                        0x54) >> 3 & 1) != 0) {
            uVar23 = *(ulong *)(*(long *)(lVar43 + 0x38) +
                                ((ulong)*(uint *)*plVar13 & 0xffffff) * 0xc0 + 0xb0);
            if ((long)uVar23 < 0) {
              uVar23 = uVar23 & 0xffffffff;
            }
            else {
              uVar23 = FUN_032c0fa4(lVar43 + 0x948,uVar23,&local_80);
              if ((uVar23 & 1) == 0) {
                uVar23 = 0xffffff;
              }
              else {
                uVar23 = local_80 & 0xffffffff;
              }
            }
            FUN_03030748(lVar43,uVar23,1);
            iVar44 = (int)plVar13[1];
          }
          if (1 < iVar44) {
            lVar43 = 1;
            do {
              lVar38 = *param_1;
              uVar23 = (ulong)*(uint *)(*plVar13 + lVar43 * 4) & 0xffffff;
              if ((*(byte *)(*(long *)(lVar38 + 0x38) + uVar23 * 0xc0 + 0x54) >> 3 & 1) != 0) {
                uVar23 = *(ulong *)(*(long *)(lVar38 + 0x38) + uVar23 * 0xc0 + 0xb0);
                if ((long)uVar23 < 0) {
                  uVar23 = uVar23 & 0xffffffff;
                }
                else {
                  uVar23 = FUN_032c0fa4(lVar38 + 0x948,uVar23,&local_80);
                  if ((uVar23 & 1) == 0) {
                    uVar23 = 0xffffff;
                  }
                  else {
                    uVar23 = local_80 & 0xffffffff;
                  }
                }
                FUN_03030748(lVar38,uVar23,1);
                iVar44 = (int)plVar13[1];
              }
              lVar43 = lVar43 + 1;
            } while (lVar43 < iVar44);
          }
        }
        lVar39 = lVar39 + 1;
      } while (lVar39 < (int)uVar36);
    }
  }
  if (0 < (int)uVar18) {
    uVar23 = (ulong)uVar18;
    puVar40 = local_a88;
    do {
      lVar39 = *param_1;
      uVar34 = *(ulong *)(*(long *)(lVar39 + 0x38) +
                          ((ulong)*(uint *)(*(long *)(lVar22 + 0x150) + (ulong)*puVar40 * 0x80 +
                                           0x48) & 0xffffff) * 0xc0 + 0xb0);
      if ((long)uVar34 < 0) {
        uVar34 = uVar34 & 0xffffffff;
      }
      else {
        uVar34 = FUN_032c0fa4(lVar39 + 0x948,uVar34,&local_80);
        if ((uVar34 & 1) == 0) {
          uVar34 = 0xffffff;
        }
        else {
          uVar34 = local_80 & 0xffffffff;
        }
      }
      FUN_03030748(lVar39,uVar34,1);
      *(undefined4 *)(param_1[0x71] + (long)(int)*puVar40 * 0x20 + 0x10) = 0xffffffff;
      uVar23 = uVar23 - 1;
      puVar40 = puVar40 + 1;
    } while (uVar23 != 0);
  }
  if (param_7 != 0) {
    puVar41 = *(undefined8 **)(param_7 + 8);
    uVar23 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar23, puVar41 != (undefined8 *)0x0)) {
      *puVar41 = "StRaiseEvents";
      uVar29 = nn::os::GetSystemTick();
      puVar41[1] = uVar29;
    }
  }
  if (0 < (int)param_1[0x6b]) {
    lVar22 = 0;
    do {
      puVar46 = (ushort *)(param_1[0x6a] + lVar22 * 0x20);
      puVar41 = *(undefined8 **)(param_2 + 0x4e0);
      puVar40 = *(uint **)(*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
      uVar6 = *puVar46;
      iVar44 = 0xee0 - (uint)uVar6;
      uVar18 = *puVar40 >> 0x10;
      if (iVar44 <= (int)uVar18) {
        puVar28 = puVar40;
        do {
          iVar17 = *(int *)(puVar41 + 0xb) + -1;
          if (*(int *)(puVar41 + 0xb) < 1) {
            lVar39 = puVar41[1];
            (**(code **)(*(long *)*puVar41 + 0x20))((long *)*puVar41,lVar39,6);
            *(undefined4 *)(puVar41 + 0xb) = 5;
            puVar15 = (undefined8 *)(lVar39 + 0x28);
          }
          else {
            *(int *)(puVar41 + 0xb) = iVar17;
            puVar15 = (undefined8 *)(puVar41[1] + (long)iVar17 * 8);
          }
          puVar40 = (uint *)*puVar15;
          puVar40[4] = 0;
          puVar40[5] = 0;
          puVar40[6] = 0;
          puVar40[7] = 0;
          puVar40[0] = 0;
          puVar40[1] = 0;
          puVar40[2] = 0;
          puVar40[3] = 0;
          puVar40[1] = *(uint *)(param_2 + 0x538);
          uVar36 = *(uint *)(param_2 + 0x53c);
          iVar17 = *(int *)(param_2 + 0x538);
          uVar18 = iVar17 + 1;
          if (iVar17 < (int)(uVar36 & 0x3fffffff)) {
            lVar39 = *(long *)(param_2 + 0x530);
          }
          else {
            uVar29 = *(undefined8 *)(param_2 + 0x530);
            if (0x3ffffffe < iVar17) {
              FUN_032bd0a8(uVar18);
              uVar36 = *(uint *)(param_2 + 0x53c);
            }
            uVar36 = (uVar36 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar36) {
              uVar36 = 0x3fffffff;
            }
            uVar21 = uVar18;
            if ((int)uVar18 <= (int)uVar36) {
              uVar21 = uVar36;
            }
            lVar39 = FUN_032bd1d4(puVar10,uVar21,8,uVar29,iVar17,(uint *)(param_2 + 0x53c));
            *(long *)(param_2 + 0x530) = lVar39;
            iVar17 = *(int *)(param_2 + 0x538);
          }
          *(uint **)(lVar39 + (long)iVar17 * 8) = puVar40;
          *(uint *)(param_2 + 0x538) = uVar18;
          *(uint **)(puVar28 + 2) = puVar40;
          uVar18 = *puVar40 >> 0x10;
          puVar28 = puVar40;
        } while (iVar44 <= (int)uVar18);
      }
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar9) {
          *puVar40 = *puVar40 + ((uint)uVar6 << 0x10 | 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
      uVar36 = (uint)(uVar6 >> 2);
      if (uVar36 != 0) {
        puVar16 = (undefined4 *)((long)puVar40 + (ulong)uVar18 + 0x20);
        uVar18 = uVar6 >> 2 & 7;
        if (6 < uVar36 - 1) {
          iVar44 = uVar18 - uVar36;
          puVar26 = puVar16;
          do {
            *puVar26 = *(undefined4 *)puVar46;
            puVar26[1] = *(undefined4 *)(puVar46 + 2);
            puVar26[2] = *(undefined4 *)(puVar46 + 4);
            puVar26[3] = *(undefined4 *)(puVar46 + 6);
            puVar26[4] = *(undefined4 *)(puVar46 + 8);
            puVar26[5] = *(undefined4 *)(puVar46 + 10);
            puVar26[6] = *(undefined4 *)(puVar46 + 0xc);
            puVar1 = puVar46 + 0xe;
            puVar46 = puVar46 + 0x10;
            puVar16 = puVar26 + 8;
            iVar44 = iVar44 + 8;
            puVar26[7] = *(undefined4 *)puVar1;
            puVar26 = puVar16;
          } while (iVar44 != 0);
        }
        if ((uVar6 >> 2 & 7) != 0) {
          do {
            uVar18 = uVar18 - 1;
            *puVar16 = *(undefined4 *)puVar46;
            puVar16 = puVar16 + 1;
            puVar46 = puVar46 + 2;
          } while (uVar18 != 0);
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)param_1[0x6b]);
  }
  uVar23 = local_a48;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  uVar18 = local_a48._4_4_;
  local_a48 = (ulong)local_a48._4_4_ << 0x20;
  if ((-1 < (long)uVar23) && (local_a50 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a50,uVar18 << 2);
  }
  local_9b8 = 0;
  if ((-1 < (int)local_9b4) && (local_9c0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_9c0,((ulong)local_9b4 & 0x3fffffff) << 3);
  }
  if ((local_a88 != (uint *)0x0) && (-1 < iVar45)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar35,iVar45 << 2);
  }
  lVar22 = local_8a8;
  uVar18 = local_8a8._4_4_;
  local_8a8 = (ulong)local_8a8._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_8b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_8b0,uVar18 << 2);
  }
  lVar22 = local_498;
  uVar18 = local_498._4_4_;
  local_498 = (ulong)local_498._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_4a0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_4a0,uVar18 << 2);
  }
  return;
}


