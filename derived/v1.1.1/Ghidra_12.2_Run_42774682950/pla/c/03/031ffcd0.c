/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ffcd0; name: FUN_031ffcd0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_031ffcd0(long param_1,long param_2,short param_3)

{
  short *psVar1;
  ushort *puVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  char cVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  short sVar19;
  short sVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  undefined8 *puVar43;
  long lVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  int iVar49;
  long lVar50;
  long *plVar51;
  long lVar52;
  long *plVar53;
  long *plVar54;
  long lVar55;
  long *plVar56;
  long lVar57;
  uint uVar58;
  ulong *puVar59;
  long lVar60;
  uint *puVar61;
  undefined4 *puVar62;
  long lVar63;
  int *piVar64;
  long *plVar65;
  uint uVar66;
  uint uVar67;
  long *plVar68;
  ulong local_f0;
  long local_e8;
  ushort local_c0 [4];
  ulong local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  long *local_90;
  undefined *local_88;
  ulong *local_80;
  ulong *local_78;
  uint local_6c [3];
  
  lVar27 = tpidr_el0;
  local_a0 = param_2;
  if (*(long *)(lVar27 + 0x38d490) == 0) {
    lVar52 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar52;
    lVar52 = *(long *)(lVar52 + 0x10);
  }
  else {
    lVar52 = *(long *)(*(long *)(lVar27 + 0x38d490) + 0x10);
  }
  if (lVar52 != 0) {
    puVar38 = *(undefined8 **)(lVar52 + 8);
    uVar36 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
    if ((uVar36 <= *(ulong *)(lVar52 + 0x10)) &&
       (*(ulong *)(lVar52 + 8) = uVar36, puVar38 != (undefined8 *)0x0)) {
      *puVar38 = "TthkaiUpdateNavDataTasks::addPhase2Tasks";
      uVar28 = nn::os::GetSystemTick();
      puVar38[1] = uVar28;
    }
  }
  uVar67 = *(uint *)(param_2 + 0x74);
  uVar58 = *(uint *)(*(long *)(param_2 + 0x90) + 0x28);
  uVar66 = uVar67 & 0x3fffffff;
  local_a8 = lVar52;
  if ((int)uVar66 < (int)uVar58) {
    plVar54 = *(long **)(param_2 + 0x68);
    uVar42 = *(uint *)(param_2 + 0x70);
    uVar36 = (ulong)uVar42;
    if (0x3fffffff < (int)uVar58) {
      FUN_032bd0a8(uVar58);
      uVar67 = *(uint *)(param_2 + 0x74);
      uVar66 = uVar67 & 0x3fffffff;
    }
    uVar32 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar32) {
      uVar32 = 0x3fffffff;
    }
    uVar41 = uVar58;
    if ((int)uVar58 <= (int)uVar32) {
      uVar41 = uVar32;
    }
    local_b8 = (ulong)uVar41 << 7;
    local_98 = CONCAT44(local_98._4_4_,uVar41);
    if (((int)uVar41 < (int)uVar66) || (0x3fffffff < (int)uVar41)) {
      local_90 = (long *)0x1;
      local_80 = &local_98;
      local_88 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_90);
      uVar67 = *(uint *)(param_2 + 0x74);
      uVar66 = uVar67 & 0x3fffffff;
    }
    lVar21 = (**(code **)(DAT_04434e70 + 0x10))(&DAT_04434e70,local_b8,&local_b8);
    puVar12 = PTR_PTR_0434a080;
    if (0 < (int)uVar42) {
      local_e8 = 0;
      local_f0 = uVar36;
      do {
        puVar43 = (undefined8 *)(lVar21 + local_e8);
        *puVar43 = &PTR_LAB_042f1e28;
        puVar43[1] = 0xffffffff;
        puVar43[2] = 1;
        puVar43[3] = *(undefined8 *)((long)plVar54 + local_e8 + 0x18);
        puVar43[4] = 0;
        puVar43[5] = 0x8000000000000000;
        puVar38 = (undefined8 *)((long)plVar54 + local_e8 + 0x20);
        if (*(int *)((long)plVar54 + local_e8 + 0x2c) < 0) {
          FUN_03208a4c(puVar12,puVar38);
        }
        puVar43[4] = *(undefined8 *)((long)plVar54 + local_e8 + 0x20);
        *(undefined4 *)(puVar43 + 5) = *(undefined4 *)((long)plVar54 + local_e8 + 0x28);
        *(undefined4 *)((long)puVar43 + 0x2c) = *(undefined4 *)((long)plVar54 + local_e8 + 0x2c);
        *puVar38 = 0;
        *(undefined8 *)((long)plVar54 + local_e8 + 0x28) = 0;
        puVar43[6] = 0;
        puVar43[7] = 0x8000000000000000;
        puVar38 = (undefined8 *)((long)plVar54 + local_e8 + 0x30);
        if (*(int *)((long)plVar54 + local_e8 + 0x3c) < 0) {
          FUN_031dcf80(puVar12,puVar38);
        }
        puVar43[6] = *(undefined8 *)((long)plVar54 + local_e8 + 0x30);
        *(undefined4 *)(puVar43 + 7) = *(undefined4 *)((long)plVar54 + local_e8 + 0x38);
        *(undefined4 *)((long)puVar43 + 0x3c) = *(undefined4 *)((long)plVar54 + local_e8 + 0x3c);
        *puVar38 = 0;
        *(undefined8 *)((long)plVar54 + local_e8 + 0x38) = 0;
        puVar43[8] = 0;
        puVar43[9] = 0x8000000000000000;
        puVar38 = (undefined8 *)((long)plVar54 + local_e8 + 0x40);
        if (*(int *)((long)plVar54 + local_e8 + 0x4c) < 0) {
          FUN_031dd310(puVar12,puVar38);
        }
        puVar43[8] = *(undefined8 *)((long)plVar54 + local_e8 + 0x40);
        *(undefined4 *)(puVar43 + 9) = *(undefined4 *)((long)plVar54 + local_e8 + 0x48);
        *(undefined4 *)((long)puVar43 + 0x4c) = *(undefined4 *)((long)plVar54 + local_e8 + 0x4c);
        *puVar38 = 0;
        *(undefined8 *)((long)plVar54 + local_e8 + 0x48) = 0;
        local_f0 = local_f0 - 1;
        local_e8 = local_e8 + 0x80;
      } while (local_f0 != 0);
      plVar29 = plVar54;
      do {
        (**(code **)(*plVar29 + 8))(plVar29);
        uVar36 = uVar36 - 1;
        plVar29 = plVar29 + 0x10;
      } while (uVar36 != 0);
    }
    if (-1 < (int)uVar67) {
      (**(code **)(DAT_04434e70 + 0x18))(&DAT_04434e70,plVar54,(ulong)uVar66 << 7);
    }
    if (local_b8 < 0x1fffffff80) {
      uVar33 = (undefined4)(local_b8 >> 7);
    }
    else {
      uVar33 = 0x3fffffff;
    }
    *(undefined4 *)(param_2 + 0x74) = uVar33;
    *(long *)(param_2 + 0x68) = lVar21;
  }
  iVar49 = *(int *)(param_2 + 0x70);
  lVar60 = (long)iVar49;
  lVar21 = (long)(int)uVar58;
  if (iVar49 < (int)uVar58) {
    lVar37 = *(long *)(param_2 + 0x68);
    puVar38 = (undefined8 *)(lVar37 + lVar60 * 0x80);
    *(uint *)(param_2 + 0x70) = uVar58;
    *puVar38 = &PTR_LAB_042f1e28;
    puVar38[1] = 0xffffffff;
    puVar43 = (undefined8 *)(lVar37 + lVar21 * 0x80);
    puVar38[2] = 1;
    puVar38[4] = 0;
    puVar38[5] = 0x8000000000000000;
    puVar38[6] = 0;
    puVar38[7] = 0x8000000000000000;
    puVar38[8] = 0;
    puVar38[9] = 0x8000000000000000;
    if (puVar38 + 0x10 != puVar43) {
      puVar38[0x10] = &PTR_LAB_042f1e28;
      puVar38[0x11] = 0xffffffff;
      puVar38[0x12] = 1;
      puVar38[0x14] = 0;
      puVar38[0x15] = 0x8000000000000000;
      puVar38[0x16] = 0;
      puVar38[0x17] = 0x8000000000000000;
      puVar38[0x18] = 0;
      puVar38[0x19] = 0x8000000000000000;
      if (puVar38 + 0x20 != puVar43) {
        lVar21 = lVar21 * 0x80 + -0x100;
        do {
          lVar21 = lVar21 + -0x80;
          lVar50 = lVar37 + lVar60 * 0x80;
          *(undefined8 *)(lVar50 + 0x110) = 1;
          lVar37 = lVar37 + 0x80;
          *(undefined ***)(lVar50 + 0x100) = &PTR_LAB_042f1e28;
          *(undefined8 *)(lVar50 + 0x108) = 0xffffffff;
          *(undefined8 *)(lVar50 + 0x120) = 0;
          *(undefined8 *)(lVar50 + 0x128) = 0x8000000000000000;
          *(undefined8 *)(lVar50 + 0x130) = 0;
          *(undefined8 *)(lVar50 + 0x138) = 0x8000000000000000;
          *(undefined8 *)(lVar50 + 0x140) = 0;
          *(undefined8 *)(lVar50 + 0x148) = 0x8000000000000000;
        } while (lVar60 * 0x80 != lVar21);
      }
    }
    param_2 = local_a0;
  }
  else if ((int)uVar58 < iVar49) {
    lVar50 = *(long *)(param_2 + 0x68);
    lVar37 = lVar50 + lVar60 * 0x80;
    *(uint *)(param_2 + 0x70) = uVar58;
    plVar29 = (long *)(lVar37 + -0x80);
    plVar54 = (long *)(lVar50 + lVar21 * 0x80);
    (**(code **)(*plVar29 + 8))(plVar29);
    if (plVar29 != plVar54) {
      plVar29 = (long *)(lVar37 + -0x100);
      (**(code **)(*plVar29 + 8))(plVar29);
      if (plVar29 != plVar54) {
        lVar21 = lVar21 * 0x80 + lVar60 * -0x80 + 0x100;
        plVar54 = (long *)(lVar60 * 0x80 + lVar50 + -0x180);
        do {
          (**(code **)(*plVar54 + 8))(plVar54);
          lVar21 = lVar21 + 0x80;
          plVar54 = plVar54 + -0x10;
        } while (lVar21 != 0);
      }
    }
  }
  puVar12 = PTR_PTR_0434a090;
  local_b8 = 0;
  local_b0 = -0x8000000000000000;
  iVar49 = *(int *)(*(long *)(param_2 + 0x90) + 0x28);
  if (iVar49 < 1) {
    local_b0._0_4_ = 0;
  }
  else {
    if (0x3fffffff < iVar49) {
      FUN_032bd0a8(iVar49);
    }
    local_b8 = FUN_032bd1d4(puVar12,iVar49,2,0,0,(long)&local_b0 + 4);
    if ((int)(uint)local_b0 < iVar49) {
      lVar21 = (long)(int)(uint)local_b0;
      uVar66 = ~(uint)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,iVar49);
      memset((void *)(local_b8 + lVar21 * 2),0xff,(ulong)(iVar49 + uVar66) * 2 + 2);
      goto LAB_031fff00;
    }
  }
  if (iVar49 < (int)(uint)local_b0) {
    local_b0 = CONCAT44(local_b0._4_4_,iVar49);
  }
LAB_031fff00:
  FUN_02ff1f1c(local_a0 + 0x98,0,*(undefined4 *)(*(long *)(local_a0 + 0x90) + 0x28),0);
  puVar13 = PTR_PTR_0434a080;
  puVar61 = (uint *)(param_1 + 0x24);
  uVar67 = *puVar61;
  iVar49 = *(int *)(param_1 + 0x20);
  uVar66 = iVar49 + 1;
  if (iVar49 < (int)(uVar67 & 0x3fffffff)) {
    lVar21 = *(long *)(param_1 + 0x18);
    iVar35 = iVar49;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < iVar49) {
      FUN_032bd0a8(uVar66);
      uVar67 = *puVar61;
    }
    uVar67 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar67) {
      uVar67 = 0x3fffffff;
    }
    uVar58 = uVar66;
    if ((int)uVar66 <= (int)uVar67) {
      uVar58 = uVar67;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar58,0x18,uVar28,iVar49,puVar61);
    iVar35 = *(int *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar21;
  }
  puVar38 = (undefined8 *)(lVar21 + (long)iVar35 * 0x18);
  *(uint *)(param_1 + 0x20) = uVar66;
  *(undefined2 *)(puVar38 + 1) = 1;
  *puVar38 = 0;
  *(undefined1 *)((long)puVar38 + 10) = 0x40;
  puVar38[2] = 0;
  iVar35 = *(int *)(param_1 + 0x20);
  uVar67 = *(uint *)(param_1 + 0x24);
  uVar66 = iVar35 + 1;
  if (iVar35 < (int)(uVar67 & 0x3fffffff)) {
    lVar21 = *(long *)(param_1 + 0x18);
    iVar34 = iVar35;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < iVar35) {
      FUN_032bd0a8(uVar66);
      uVar67 = *puVar61;
    }
    uVar67 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar67) {
      uVar67 = 0x3fffffff;
    }
    uVar58 = uVar66;
    if ((int)uVar66 <= (int)uVar67) {
      uVar58 = uVar67;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar58,0x18,uVar28,iVar35,puVar61);
    iVar34 = *(int *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar21;
  }
  puVar38 = (undefined8 *)(lVar21 + (long)iVar34 * 0x18);
  *(uint *)(param_1 + 0x20) = uVar66;
  *(undefined2 *)(puVar38 + 1) = 1;
  *puVar38 = 0;
  *(undefined1 *)((long)puVar38 + 10) = 0x40;
  puVar38[2] = 0;
  lVar60 = (long)DAT_0444b53c;
  local_c0[0] = (ushort)iVar35;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  if (*(long *)(lVar21 + lVar60 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (0 < *(int *)(*(long *)(local_a0 + 0x90) + 0x28)) {
    uVar36 = 0;
    do {
      lVar21 = local_a0;
      if (*(long *)(lVar27 + 0x38d490) == 0) {
        lVar60 = FUN_0333d16c(0,1);
        *(long *)(lVar27 + 0x38d490) = lVar60;
        lVar60 = *(long *)(lVar60 + 0x10);
      }
      else {
        lVar60 = *(long *)(*(long *)(lVar27 + 0x38d490) + 0x10);
      }
      if (lVar60 != 0) {
        puVar38 = *(undefined8 **)(lVar60 + 8);
        uVar39 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
        if ((uVar39 <= *(ulong *)(lVar60 + 0x10)) &&
           (*(ulong *)(lVar60 + 8) = uVar39, puVar38 != (undefined8 *)0x0)) {
          *puVar38 = "TthkaiUpdateNavDataTasks::addPhase2TasksForSection";
          uVar28 = nn::os::GetSystemTick();
          puVar38[1] = uVar28;
        }
      }
      lVar37 = *(long *)(lVar21 + 0x68);
      lVar50 = *(long *)(*(long *)(*(long *)(lVar21 + 0x90) + 0x20) +
                        (-(uVar36 >> 0x1f & 1) & 0xfffffff800000000 | (uVar36 & 0xffffffff) << 3));
      *(long *)(lVar37 + ((long)(uVar36 << 0x20) >> 0x19) + 0x18) = lVar50;
      uVar66 = (uint)uVar36;
      sVar19 = param_3;
      if (lVar50 == 0) {
        bVar14 = false;
        if (lVar60 != 0) goto LAB_03200164;
LAB_03200178:
        if (bVar14) {
LAB_03201114:
          lVar21 = (uVar36 >> 5 & 0x7ffffff) * 4;
          *(uint *)(*(long *)(local_a0 + 0x98) + lVar21) =
               *(uint *)(*(long *)(local_a0 + 0x98) + lVar21) | 1 << (ulong)(uVar66 & 0x1f);
        }
      }
      else {
        lVar55 = *(long *)(lVar21 + 0x80);
        lVar63 = (long)(int)uVar66;
        uVar67 = *(uint *)(lVar50 + 0x100);
        plVar54 = (long *)(lVar55 + lVar63 * 0x38 + 0x28);
        if (uVar67 == 0) {
          if (plVar54 != (long *)(lVar50 + 0xf8)) {
            if (*(int *)(lVar50 + 0x104) < 0) {
              *(undefined4 *)(lVar50 + 0x104) = 0;
              *(undefined8 *)(lVar50 + 0xf8) = 0;
            }
            piVar64 = (int *)(lVar55 + lVar63 * 0x38 + 0x34);
            if (*piVar64 < 0) {
              local_6c[0] = 0x20;
              puVar59 = (ulong *)(lVar55 + lVar63 * 0x38 + 0x30);
              local_98 = (long)*(int *)puVar59 << 5;
              if (*(int *)puVar59 < 0) {
                local_88 = &DAT_0411b3a0;
                local_90 = (long *)0x2;
                local_78 = (ulong *)local_6c;
                local_80 = puVar59;
                FUN_03320b50(0x77a36e5f,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                             ,0x27,"Array size overflow {}*{}",&local_90);
                iVar35 = *(int *)puVar59;
              }
              else {
                iVar35 = *(int *)puVar59;
              }
              if (iVar35 == 0) {
                *piVar64 = 0;
                *plVar54 = 0;
              }
              else {
                lVar40 = (**(code **)(*(long *)puVar13 + 0x10))(puVar13,local_98,&local_98);
                if (lVar40 != 0) {
                  iVar35 = (int)(local_98 >> 5);
                  if (0x3ffffffe < iVar35) {
                    iVar35 = 0x3fffffff;
                  }
                  if (0 < *(int *)puVar59) {
                    lVar57 = 0;
                    lVar44 = 0;
                    do {
                      puVar38 = (undefined8 *)(*plVar54 + lVar57);
                      uVar28 = puVar38[1];
                      puVar43 = (undefined8 *)(lVar40 + lVar57);
                      lVar57 = lVar57 + 0x20;
                      puVar43[3] = puVar38[3];
                      puVar43[1] = uVar28;
                      uVar28 = *puVar38;
                      puVar43[2] = puVar38[2];
                      *puVar43 = uVar28;
                      lVar44 = lVar44 + 1;
                    } while (lVar44 < *(int *)puVar59);
                  }
                  *plVar54 = lVar40;
                  *piVar64 = iVar35;
                }
              }
            }
            lVar40 = *(long *)(lVar50 + 0xf8);
            *(long *)(lVar50 + 0xf8) = *plVar54;
            *plVar54 = lVar40;
            lVar55 = lVar55 + lVar63 * 0x38;
            uVar33 = *(undefined4 *)(lVar50 + 0x100);
            *(undefined4 *)(lVar50 + 0x100) = *(undefined4 *)(lVar55 + 0x30);
            *(undefined4 *)(lVar55 + 0x30) = uVar33;
            iVar35 = *(int *)(lVar50 + 0x104);
            *(int *)(lVar50 + 0x104) = *piVar64;
            *piVar64 = iVar35;
          }
        }
        else {
          puVar43 = (undefined8 *)*plVar54;
          iVar35 = *(int *)(lVar55 + lVar63 * 0x38 + 0x30);
          uVar58 = iVar35 + uVar67;
          puVar38 = *(undefined8 **)(lVar50 + 0xf8);
          uVar32 = *(uint *)(lVar50 + 0x104);
          uVar42 = uVar32 & 0x3fffffff;
          if ((int)uVar42 < (int)uVar58) {
            if (0x3fffffff < (int)uVar58) {
              FUN_032bd0a8(uVar58);
              uVar32 = *(uint *)(lVar50 + 0x104);
              uVar42 = uVar32 & 0x3fffffff;
            }
            uVar41 = (uVar32 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar41) {
              uVar41 = 0x3fffffff;
            }
            local_6c[0] = uVar58;
            if ((int)uVar58 <= (int)uVar41) {
              local_6c[0] = uVar41;
            }
            local_98 = (ulong)local_6c[0] << 5;
            if ((int)local_6c[0] < (int)uVar42 || 0x3fffffff < (int)local_6c[0]) {
              local_90 = (long *)0x1;
              local_80 = (ulong *)local_6c;
              local_88 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_90);
              uVar32 = *(uint *)(lVar50 + 0x104);
              uVar42 = uVar32 & 0x3fffffff;
            }
            puVar30 = (undefined8 *)
                      (**(code **)(*(long *)puVar13 + 0x10))(puVar13,local_98,&local_98);
            if (0 < (int)uVar67) {
              uVar28 = puVar38[3];
              puVar30[1] = puVar38[1];
              puVar30[3] = uVar28;
              uVar28 = *puVar38;
              puVar30[2] = puVar38[2];
              *puVar30 = uVar28;
              if (uVar67 != 1) {
                lVar55 = (ulong)uVar67 - 1;
                puVar45 = puVar30;
                puVar46 = puVar38;
                do {
                  uVar28 = puVar46[7];
                  lVar55 = lVar55 + -1;
                  puVar45[5] = puVar46[5];
                  puVar45[7] = uVar28;
                  uVar28 = puVar46[4];
                  puVar45[6] = puVar46[6];
                  puVar45[4] = uVar28;
                  puVar45 = puVar45 + 4;
                  puVar46 = puVar46 + 4;
                } while (lVar55 != 0);
              }
            }
            if (-1 < (int)uVar32) {
              (**(code **)(*(long *)puVar13 + 0x18))(puVar13,puVar38,(ulong)uVar42 << 5);
            }
            if (local_98 < 0x7ffffffe0) {
              uVar33 = (undefined4)(local_98 >> 5);
            }
            else {
              uVar33 = 0x3fffffff;
            }
            *(undefined4 *)(lVar50 + 0x104) = uVar33;
            *(undefined8 **)(lVar50 + 0xf8) = puVar30;
            puVar38 = puVar30;
          }
          if (iVar35 != 0) {
            puVar38 = puVar38 + (long)(int)uVar67 * 4;
            uVar39 = (long)iVar35 * 0x20 - 0x20;
            uVar67 = ((uint)(uVar39 >> 5) & 0x7ffffff) + 1;
            puVar30 = puVar43;
            if ((uVar67 & 3) != 0) {
              lVar55 = -((ulong)uVar67 & 3);
              puVar46 = puVar38;
              do {
                uVar28 = puVar30[3];
                puVar38 = puVar46 + 4;
                bVar14 = lVar55 != -1;
                lVar55 = lVar55 + 1;
                puVar46[1] = puVar30[1];
                puVar46[3] = uVar28;
                uVar28 = *puVar30;
                puVar46[2] = puVar30[2];
                *puVar46 = uVar28;
                puVar30 = puVar30 + 4;
                puVar46 = puVar38;
              } while (bVar14);
            }
            if (0x5f < uVar39) {
              do {
                uVar28 = puVar30[3];
                puVar38[1] = puVar30[1];
                puVar38[3] = uVar28;
                uVar28 = *puVar30;
                puVar38[2] = puVar30[2];
                *puVar38 = uVar28;
                uVar28 = puVar30[5];
                puVar38[7] = puVar30[7];
                puVar38[5] = uVar28;
                uVar28 = puVar30[4];
                puVar38[6] = puVar30[6];
                puVar38[4] = uVar28;
                uVar47 = puVar30[9];
                puVar38[0xb] = puVar30[0xb];
                uVar28 = puVar30[10];
                uVar48 = puVar30[8];
                puVar38[9] = uVar47;
                puVar38[10] = uVar28;
                puVar38[8] = uVar48;
                uVar28 = puVar30[0xc];
                uVar47 = puVar30[0xd];
                puVar46 = puVar30 + 0xe;
                uVar48 = puVar30[0xf];
                puVar30 = puVar30 + 0x10;
                puVar38[0xe] = *puVar46;
                puVar38[0xf] = uVar48;
                puVar38[0xc] = uVar28;
                puVar38[0xd] = uVar47;
                puVar38 = puVar38 + 0x10;
              } while (puVar30 != puVar43 + (long)iVar35 * 4);
            }
          }
          *(uint *)(lVar50 + 0x100) = uVar58;
          lVar55 = *(long *)(lVar21 + 0x80) + lVar63 * 0x38;
          uVar67 = *(uint *)(lVar55 + 0x34);
          *(undefined4 *)(lVar55 + 0x30) = 0;
          if ((-1 < (int)uVar67) && (lVar40 = *(long *)(lVar55 + 0x28), lVar40 != 0)) {
            (**(code **)(*(long *)puVar13 + 0x18))(puVar13,lVar40,((ulong)uVar67 & 0x3fffffff) << 5)
            ;
          }
          *(long *)(lVar55 + 0x28) = 0;
          *(uint *)(lVar55 + 0x34) = 0x80000000;
        }
        lVar55 = *(long *)(lVar21 + 0x80);
        if (*(int *)(lVar55 + lVar63 * 0x38 + 0x10) == 0) {
          if (((*(int *)(lVar55 + lVar63 * 0x38 + 0x20) == 0) &&
              (*(int *)(lVar55 + lVar63 * 0x38 + 0x30) == 0)) && (*(int *)(lVar50 + 0xa0) == 0)) {
            bVar14 = *(int *)(lVar50 + 0xb0) != 0;
          }
          else {
            bVar14 = true;
          }
        }
        else {
          bVar14 = true;
        }
        sVar9 = (short)iVar49;
        if (*(char *)(*(long *)(lVar21 + 0x90) + 0x98) == '\0') {
          lVar50 = *(long *)(lVar27 + 0x38d490);
          if (lVar50 == 0) {
            lVar50 = FUN_0333d16c(0,1);
            *(long *)(lVar27 + 0x38d490) = lVar50;
          }
          plVar54 = *(long **)(*(long *)(lVar50 + 8) + 0x58);
          plVar54 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x40,0);
          plVar54[1] = 0xffffffff;
          plVar29 = plVar54 + 2;
          *plVar29 = 1;
          *plVar54 = (long)&PTR_LAB_042f15f0;
          plVar54[4] = (long)&PTR_LAB_042f1640;
          plVar54[5] = lVar21;
          if (*(long *)(lVar21 + 8) != 0) {
            plVar31 = (long *)(lVar21 + 0x10);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar11) {
                *plVar31 = *plVar31 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          puVar3 = (uint *)(param_1 + 0x334);
          *(uint *)(plVar54 + 6) = uVar66;
          sVar20 = FUN_0333b6e8(param_1,plVar54,0x40);
          if ((param_3 != -1) && (sVar20 != -1)) {
            iVar35 = *(int *)(param_1 + 0x330);
            uVar58 = *(uint *)(param_1 + 0x334);
            uVar67 = iVar35 + 1;
            if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
              lVar50 = *(long *)(param_1 + 0x328);
            }
            else {
              uVar28 = *(undefined8 *)(param_1 + 0x328);
              if (0x3ffffffe < iVar35) {
                FUN_032bd0a8(uVar67);
                uVar58 = *puVar3;
              }
              uVar58 = (uVar58 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar58) {
                uVar58 = 0x3fffffff;
              }
              uVar42 = uVar67;
              if ((int)uVar67 <= (int)uVar58) {
                uVar42 = uVar58;
              }
              lVar50 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
              *(long *)(param_1 + 0x328) = lVar50;
              iVar35 = *(int *)(param_1 + 0x330);
            }
            *(uint *)(param_1 + 0x330) = uVar67;
            psVar1 = (short *)(lVar50 + (long)iVar35 * 4);
            *psVar1 = param_3;
            psVar1[1] = sVar20;
          }
          iVar35 = *(int *)(param_1 + 0x330);
          uVar58 = *(uint *)(param_1 + 0x334);
          uVar67 = iVar35 + 1;
          if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
            lVar50 = *(long *)(param_1 + 0x328);
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + 0x328);
            if (0x3ffffffe < iVar35) {
              FUN_032bd0a8(uVar67);
              uVar58 = *puVar3;
            }
            uVar58 = (uVar58 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar58) {
              uVar58 = 0x3fffffff;
            }
            uVar42 = uVar67;
            if ((int)uVar67 <= (int)uVar58) {
              uVar42 = uVar58;
            }
            lVar50 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
            *(long *)(param_1 + 0x328) = lVar50;
            iVar35 = *(int *)(param_1 + 0x330);
          }
          psVar1 = (short *)(lVar50 + (long)iVar35 * 4);
          *(uint *)(param_1 + 0x330) = uVar67;
          *psVar1 = sVar20;
          psVar1[1] = sVar9;
          if (plVar54[1] != 0) {
            do {
              lVar50 = *plVar29;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar11) {
                *plVar29 = lVar50 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar50 + -1 == 0) {
              (**(code **)(*plVar54 + 0x18))();
            }
          }
        }
        if (bVar14) {
          puVar3 = (uint *)(param_1 + 0x334);
          cVar10 = *(char *)(*(long *)(lVar21 + 0x90) + 0x98);
          if (cVar10 == '\x02') {
            lVar50 = *(long *)(lVar27 + 0x38d490);
            if (lVar50 == 0) {
              lVar50 = FUN_0333d16c(0,1);
              *(long *)(lVar27 + 0x38d490) = lVar50;
            }
            plVar54 = *(long **)(*(long *)(lVar50 + 8) + 0x58);
            plVar54 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x40,0);
            *plVar54 = (long)&PTR_LAB_042f1750;
            plVar54[1] = 0xffffffff;
            plVar54[2] = 1;
            plVar54[4] = (long)&PTR_LAB_042f17a0;
            plVar54[5] = lVar21;
            if (*(long *)(lVar21 + 8) != 0) {
              plVar29 = (long *)(lVar21 + 0x10);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *plVar29 = *plVar29 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
LAB_03201a18:
            *(uint *)(plVar54 + 6) = uVar66;
            sVar19 = FUN_0333b6e8(param_1,plVar54,0x40);
            if ((param_3 != -1) && (sVar19 != -1)) {
              iVar35 = *(int *)(param_1 + 0x330);
              uVar58 = *(uint *)(param_1 + 0x334);
              uVar67 = iVar35 + 1;
              if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
                lVar50 = *(long *)(param_1 + 0x328);
              }
              else {
                uVar28 = *(undefined8 *)(param_1 + 0x328);
                if (0x3ffffffe < iVar35) {
                  FUN_032bd0a8(uVar67);
                  uVar58 = *puVar3;
                }
                uVar58 = (uVar58 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar58) {
                  uVar58 = 0x3fffffff;
                }
                uVar42 = uVar67;
                if ((int)uVar67 <= (int)uVar58) {
                  uVar42 = uVar58;
                }
                lVar50 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
                *(long *)(param_1 + 0x328) = lVar50;
                iVar35 = *(int *)(param_1 + 0x330);
              }
              *(uint *)(param_1 + 0x330) = uVar67;
              psVar1 = (short *)(lVar50 + (long)iVar35 * 4);
              *psVar1 = param_3;
              psVar1[1] = sVar19;
            }
            iVar35 = *(int *)(param_1 + 0x330);
            uVar58 = *(uint *)(param_1 + 0x334);
            uVar67 = iVar35 + 1;
            if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
              lVar50 = *(long *)(param_1 + 0x328);
            }
            else {
              uVar28 = *(undefined8 *)(param_1 + 0x328);
              if (0x3ffffffe < iVar35) {
                FUN_032bd0a8(uVar67);
                uVar58 = *puVar3;
              }
              uVar58 = (uVar58 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar58) {
                uVar58 = 0x3fffffff;
              }
              uVar42 = uVar67;
              if ((int)uVar67 <= (int)uVar58) {
                uVar42 = uVar58;
              }
              lVar50 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
              *(long *)(param_1 + 0x328) = lVar50;
              iVar35 = *(int *)(param_1 + 0x330);
            }
            *(uint *)(param_1 + 0x330) = uVar67;
            psVar1 = (short *)(lVar50 + (long)iVar35 * 4);
            *psVar1 = sVar19;
            psVar1[1] = sVar9;
            if (plVar54[1] != 0) {
              plVar29 = plVar54 + 2;
              do {
                lVar50 = *plVar29;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *plVar29 = lVar50 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar50 + -1 == 0) {
                (**(code **)(*plVar54 + 0x18))(plVar54);
              }
            }
          }
          else if (cVar10 == '\x01') {
            lVar50 = *(long *)(lVar27 + 0x38d490);
            if (lVar50 == 0) {
              lVar50 = FUN_0333d16c(0,1);
              *(long *)(lVar27 + 0x38d490) = lVar50;
            }
            plVar54 = *(long **)(*(long *)(lVar50 + 8) + 0x58);
            plVar54 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x40,0);
            *plVar54 = (long)&PTR_LAB_042f16a0;
            plVar54[1] = 0xffffffff;
            plVar54[2] = 1;
            plVar54[4] = (long)&PTR_LAB_042f16f0;
            plVar54[5] = lVar21;
            if (*(long *)(lVar21 + 8) != 0) {
              plVar29 = (long *)(lVar21 + 0x10);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *plVar29 = *plVar29 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            goto LAB_03201a18;
          }
          lVar50 = *(long *)(lVar21 + 0x80);
          iVar35 = *(int *)(param_1 + 0x20);
          uVar58 = *(uint *)(param_1 + 0x24);
          uVar67 = iVar35 + 1;
          if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
            lVar55 = *(long *)(param_1 + 0x18);
            iVar34 = iVar35;
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + 0x18);
            if (0x3ffffffe < iVar35) {
              FUN_032bd0a8(uVar67);
              uVar58 = *puVar61;
            }
            uVar58 = (uVar58 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar58) {
              uVar58 = 0x3fffffff;
            }
            uVar42 = uVar67;
            if ((int)uVar67 <= (int)uVar58) {
              uVar42 = uVar58;
            }
            lVar55 = FUN_032bd1d4(puVar13,uVar42,0x18,uVar28,iVar35,puVar61);
            *(long *)(param_1 + 0x18) = lVar55;
            iVar34 = *(int *)(param_1 + 0x20);
          }
          *(uint *)(param_1 + 0x20) = uVar67;
          puVar38 = (undefined8 *)(lVar55 + (long)iVar34 * 0x18);
          *(undefined2 *)(puVar38 + 1) = 1;
          *(undefined1 *)((long)puVar38 + 10) = 0x40;
          *puVar38 = 0;
          puVar38[2] = 0;
          piVar64 = (int *)(lVar50 + lVar63 * 0x38 + 0x10);
          iVar34 = *piVar64;
          if (((iVar34 != 0) || (*(int *)(lVar50 + lVar63 * 0x38 + 0x20) != 0)) ||
             (*(int *)(lVar50 + lVar63 * 0x38 + 0x30) != 0)) {
            lVar37 = lVar37 + lVar63 * 0x80;
            plVar54 = (long *)(lVar37 + 0x20);
            if ((int)(*(uint *)(lVar37 + 0x2c) & 0x3fffffff) < iVar34) {
              lVar55 = FUN_031cdedc(puVar13,iVar34,*plVar54,*(undefined4 *)(lVar37 + 0x28));
              *plVar54 = lVar55;
            }
            lVar55 = *(long *)(lVar27 + 0x38d490);
            if (lVar55 == 0) {
              lVar55 = FUN_0333d16c(0,1);
              *(long *)(lVar27 + 0x38d490) = lVar55;
            }
            plVar29 = *(long **)(*(long *)(lVar55 + 8) + 0x58);
            plVar29 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x970,0);
            FUN_03208088(plVar29,*(undefined4 *)(lVar21 + 0x18),iVar34);
            *(undefined4 *)(plVar29 + 0x127) = *(undefined4 *)(*(long *)(lVar21 + 0x90) + 0x9c);
            lVar55 = *(long *)(lVar21 + 0x20);
            lVar40 = *(long *)(lVar55 + 0x180);
            plVar29[0x129] = *(long *)(lVar55 + 0x188);
            plVar29[0x128] = lVar40;
            lVar40 = *(long *)(lVar55 + 400);
            plVar29[299] = *(long *)(lVar55 + 0x198);
            plVar29[0x12a] = lVar40;
            lVar40 = *(long *)(lVar55 + 0x1a0);
            plVar29[0x12d] = *(long *)(lVar55 + 0x1a8);
            plVar29[300] = lVar40;
            if ((int)(*(uint *)((long)plVar29 + 0x924) & 0x3fffffff) < iVar34) {
              lVar55 = FUN_03208648(puVar13,iVar34,plVar29[0x123],(int)plVar29[0x124],
                                    (long)plVar29 + 0x924);
              plVar29[0x123] = lVar55;
            }
            lVar55 = *(long *)(*(long *)(*(long *)(lVar21 + 0x78) + 0x38) +
                              (long)*(int *)(lVar50 + lVar63 * 0x38) * 0xf0);
            if (*(char *)(lVar55 + 0x30) == '\x01') {
              iVar34 = *piVar64;
            }
            else {
              FUN_02898b44(lVar55 + 0x20);
              iVar34 = *piVar64;
            }
            if (iVar34 != 0) {
              puVar62 = *(undefined4 **)(lVar50 + lVar63 * 0x38 + 8);
              puVar6 = puVar62 + iVar34;
              do {
                uVar33 = *puVar62;
                iVar34 = (int)plVar29[0x124];
                lVar50 = plVar29[0x123];
                *(int *)(plVar29 + 0x124) = iVar34 + 1;
                puVar43 = (undefined8 *)(lVar50 + (long)iVar34 * 0x30);
                puVar38 = puVar43;
                do {
                  *puVar38 = 0;
                  puVar38[1] = 0;
                  puVar38[5] = 0;
                  puVar38[2] = 0xffffffffffffffff;
                  puVar38[3] = 0;
                  *(undefined8 *)((long)puVar38 + 0x1d) = 0;
                  puVar38 = puVar38 + 6;
                } while (puVar38 != puVar43 + 6);
                lVar40 = 0x58;
                iVar8 = *(int *)(lVar37 + 0x28);
                *(int *)(lVar37 + 0x28) = iVar8 + 1;
                lVar57 = *plVar54 + (long)iVar8 * 0x58;
                lVar63 = lVar57;
                do {
                  FUN_031ce804(lVar63);
                  lVar63 = lVar63 + 0x58;
                  lVar40 = lVar40 + -0x58;
                } while (lVar40 != 0);
                *(long *)(lVar50 + (long)iVar34 * 0x30 + 0x28) = lVar57;
                *puVar43 = *(undefined8 *)(lVar21 + 0x58);
                local_90 = (long *)CONCAT44(local_90._4_4_,uVar33);
                (**(code **)(**(long **)(lVar21 + 0x60) + 0x28))
                          (*(long **)(lVar21 + 0x60),lVar55,&local_90,puVar43,plVar29 + 0x125);
                lVar63 = (long)DAT_0444b53c;
                lVar50 = *(long *)(lVar27 + 0x38d490);
                if (lVar50 == 0) {
                  lVar50 = FUN_0333d16c(0,1);
                  *(long *)(lVar27 + 0x38d490) = lVar50;
                }
                if (*(long *)(lVar50 + lVar63 * 8 + 0x18) != 0) {
                  FUN_0332a954();
                }
                puVar62 = puVar62 + 1;
              } while (puVar62 != puVar6);
            }
            sVar19 = FUN_0333b858(param_1,plVar29,*(undefined4 *)(lVar21 + 0x18),1,0x40);
            if ((param_3 != -1) && (sVar19 != -1)) {
              iVar34 = *(int *)(param_1 + 0x330);
              uVar58 = *(uint *)(param_1 + 0x334);
              uVar67 = iVar34 + 1;
              if (iVar34 < (int)(uVar58 & 0x3fffffff)) {
                lVar37 = *(long *)(param_1 + 0x328);
              }
              else {
                uVar28 = *(undefined8 *)(param_1 + 0x328);
                if (0x3ffffffe < iVar34) {
                  FUN_032bd0a8(uVar67);
                  uVar58 = *puVar3;
                }
                uVar58 = (uVar58 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar58) {
                  uVar58 = 0x3fffffff;
                }
                uVar42 = uVar67;
                if ((int)uVar67 <= (int)uVar58) {
                  uVar42 = uVar58;
                }
                lVar37 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar34,puVar3);
                *(long *)(param_1 + 0x328) = lVar37;
                iVar34 = *(int *)(param_1 + 0x330);
              }
              *(uint *)(param_1 + 0x330) = uVar67;
              psVar1 = (short *)(lVar37 + (long)iVar34 * 4);
              *psVar1 = param_3;
              psVar1[1] = sVar19;
            }
            iVar34 = *(int *)(param_1 + 0x330);
            uVar58 = *(uint *)(param_1 + 0x334);
            uVar67 = iVar34 + 1;
            if (iVar34 < (int)(uVar58 & 0x3fffffff)) {
              lVar37 = *(long *)(param_1 + 0x328);
            }
            else {
              uVar28 = *(undefined8 *)(param_1 + 0x328);
              if (0x3ffffffe < iVar34) {
                FUN_032bd0a8(uVar67);
                uVar58 = *puVar3;
              }
              uVar58 = (uVar58 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar58) {
                uVar58 = 0x3fffffff;
              }
              uVar42 = uVar67;
              if ((int)uVar67 <= (int)uVar58) {
                uVar42 = uVar58;
              }
              lVar37 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar34,puVar3);
              *(long *)(param_1 + 0x328) = lVar37;
              iVar34 = *(int *)(param_1 + 0x330);
            }
            *(uint *)(param_1 + 0x330) = uVar67;
            psVar1 = (short *)(lVar37 + (long)iVar34 * 4);
            *psVar1 = sVar19;
            psVar1[1] = (short)iVar35;
            if ((plVar29 != (long *)0x0) && (plVar29[1] != 0)) {
              plVar54 = plVar29 + 2;
              do {
                lVar37 = *plVar54;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar54,0x10);
                if (bVar11) {
                  *plVar54 = lVar37 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar37 + -1 == 0) {
                (**(code **)(*plVar29 + 0x18))();
              }
            }
          }
          lVar37 = *(long *)(lVar27 + 0x38d490);
          if (lVar37 == 0) {
            lVar37 = FUN_0333d16c(0,1);
            *(long *)(lVar27 + 0x38d490) = lVar37;
          }
          plVar54 = *(long **)(*(long *)(lVar37 + 8) + 0x58);
          plVar54 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x40,0);
          plVar54[1] = 0xffffffff;
          plVar29 = plVar54 + 2;
          *plVar29 = 1;
          *plVar54 = (long)&PTR_LAB_042f1498;
          plVar54[4] = (long)&PTR_LAB_042f14e0;
          plVar54[5] = lVar21;
          if (*(long *)(lVar21 + 8) != 0) {
            plVar31 = (long *)(lVar21 + 0x10);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar11) {
                *plVar31 = *plVar31 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(uint *)(plVar54 + 6) = uVar66;
          sVar20 = FUN_0333b6e8(param_1,plVar54,0x40);
          uVar58 = *(uint *)(param_1 + 0x334);
          iVar34 = *(int *)(param_1 + 0x330);
          uVar67 = iVar34 + 1;
          if (iVar34 < (int)(uVar58 & 0x3fffffff)) {
            lVar37 = *(long *)(param_1 + 0x328);
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + 0x328);
            if (0x3ffffffe < iVar34) {
              FUN_032bd0a8(uVar67);
              uVar58 = *puVar3;
            }
            uVar58 = (uVar58 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar58) {
              uVar58 = 0x3fffffff;
            }
            uVar42 = uVar67;
            if ((int)uVar67 <= (int)uVar58) {
              uVar42 = uVar58;
            }
            lVar37 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar34,puVar3);
            *(long *)(param_1 + 0x328) = lVar37;
            iVar34 = *(int *)(param_1 + 0x330);
          }
          *(uint *)(param_1 + 0x330) = uVar67;
          psVar1 = (short *)(lVar37 + (long)iVar34 * 4);
          *psVar1 = (short)iVar35;
          psVar1[1] = sVar20;
          lVar37 = *(long *)(lVar27 + 0x38d490);
          if (lVar37 == 0) {
            lVar37 = FUN_0333d16c(0,1);
            *(long *)(lVar27 + 0x38d490) = lVar37;
          }
          plVar31 = *(long **)(*(long *)(lVar37 + 8) + 0x58);
          plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x40,0);
          plVar31[1] = 0xffffffff;
          plVar22 = plVar31 + 2;
          *plVar22 = 1;
          *plVar31 = (long)&PTR_LAB_042f1540;
          plVar31[4] = (long)&PTR_LAB_042f1590;
          plVar31[5] = lVar21;
          if (*(long *)(lVar21 + 8) != 0) {
            plVar65 = (long *)(lVar21 + 0x10);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar65,0x10);
              if (bVar11) {
                *plVar65 = *plVar65 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(uint *)(plVar31 + 6) = uVar66;
          sVar19 = FUN_0333b6e8(param_1,plVar31,0x40);
          uVar58 = *(uint *)(param_1 + 0x334);
          iVar35 = *(int *)(param_1 + 0x330);
          uVar67 = iVar35 + 1;
          if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
            lVar21 = *(long *)(param_1 + 0x328);
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + 0x328);
            if (0x3ffffffe < iVar35) {
              FUN_032bd0a8(uVar67);
              uVar58 = *puVar3;
            }
            uVar58 = (uVar58 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar58) {
              uVar58 = 0x3fffffff;
            }
            uVar42 = uVar67;
            if ((int)uVar67 <= (int)uVar58) {
              uVar42 = uVar58;
            }
            lVar21 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
            *(long *)(param_1 + 0x328) = lVar21;
            iVar35 = *(int *)(param_1 + 0x330);
          }
          psVar1 = (short *)(lVar21 + (long)iVar35 * 4);
          *(uint *)(param_1 + 0x330) = uVar67;
          *psVar1 = sVar20;
          psVar1[1] = sVar19;
          uVar58 = *(uint *)(param_1 + 0x334);
          iVar35 = *(int *)(param_1 + 0x330);
          uVar67 = iVar35 + 1;
          if (iVar35 < (int)(uVar58 & 0x3fffffff)) {
            lVar21 = *(long *)(param_1 + 0x328);
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + 0x328);
            if (0x3ffffffe < iVar35) {
              FUN_032bd0a8(uVar67);
              uVar58 = *puVar3;
            }
            uVar58 = (uVar58 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar58) {
              uVar58 = 0x3fffffff;
            }
            uVar42 = uVar67;
            if ((int)uVar67 <= (int)uVar58) {
              uVar42 = uVar58;
            }
            lVar21 = FUN_032bd1d4(puVar13,uVar42,4,uVar28,iVar35,puVar3);
            *(long *)(param_1 + 0x328) = lVar21;
            iVar35 = *(int *)(param_1 + 0x330);
          }
          *(uint *)(param_1 + 0x330) = uVar67;
          psVar1 = (short *)(lVar21 + (long)iVar35 * 4);
          *psVar1 = sVar9;
          psVar1[1] = sVar19;
          if (plVar31[1] == 0) {
LAB_032029ec:
            lVar21 = plVar54[1];
          }
          else {
            do {
              lVar21 = *plVar22;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar11) {
                *plVar22 = lVar21 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar21 + -1 != 0) goto LAB_032029ec;
            (**(code **)(*plVar31 + 0x18))();
            lVar21 = plVar54[1];
          }
          if (lVar21 != 0) {
            do {
              lVar21 = *plVar29;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar11) {
                *plVar29 = lVar21 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar21 + -1 == 0) {
              (**(code **)(*plVar54 + 0x18))(plVar54);
            }
          }
        }
        if (lVar60 == 0) goto LAB_03200178;
LAB_03200164:
        puVar38 = *(undefined8 **)(lVar60 + 8);
        uVar39 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
        if (*(ulong *)(lVar60 + 0x10) < uVar39) goto LAB_03200178;
        *(ulong *)(lVar60 + 8) = uVar39;
        if (puVar38 == (undefined8 *)0x0) goto LAB_03200178;
        *puVar38 = &DAT_0390f40e;
        uVar28 = nn::os::GetSystemTick();
        puVar38[1] = uVar28;
        if (bVar14) goto LAB_03201114;
      }
      uVar16 = local_c0[0];
      *(short *)(local_b8 + uVar36 * 2) = sVar19;
      if ((sVar19 != -1) && (local_c0[0] != 0xffff)) {
        uVar67 = *(uint *)(param_1 + 0x334);
        iVar35 = *(int *)(param_1 + 0x330);
        uVar66 = iVar35 + 1;
        if (iVar35 < (int)(uVar67 & 0x3fffffff)) {
          lVar21 = *(long *)(param_1 + 0x328);
        }
        else {
          uVar28 = *(undefined8 *)(param_1 + 0x328);
          if (0x3ffffffe < iVar35) {
            FUN_032bd0a8(uVar66);
            uVar67 = *(uint *)(param_1 + 0x334);
          }
          uVar67 = (uVar67 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar67) {
            uVar67 = 0x3fffffff;
          }
          uVar58 = uVar66;
          if ((int)uVar66 <= (int)uVar67) {
            uVar58 = uVar67;
          }
          lVar21 = FUN_032bd1d4(puVar13,uVar58,4,uVar28,iVar35,(uint *)(param_1 + 0x334));
          iVar35 = *(int *)(param_1 + 0x330);
          *(long *)(param_1 + 0x328) = lVar21;
        }
        psVar1 = (short *)(lVar21 + (long)iVar35 * 4);
        *(uint *)(param_1 + 0x330) = uVar66;
        *psVar1 = sVar19;
        psVar1[1] = uVar16;
      }
      lVar60 = (long)DAT_0444b53c;
      lVar21 = *(long *)(lVar27 + 0x38d490);
      if (lVar21 == 0) {
        lVar21 = FUN_0333d16c(0,1);
        *(long *)(lVar27 + 0x38d490) = lVar21;
      }
      if (*(long *)(lVar21 + lVar60 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      uVar36 = uVar36 + 1;
    } while ((long)uVar36 < (long)*(int *)(*(long *)(local_a0 + 0x90) + 0x28));
  }
  local_90 = &local_a0;
  local_80 = &local_b8;
  local_78 = (ulong *)local_c0;
  local_88 = (undefined *)param_1;
  if (*(int *)(local_a0 + 0xa0) != 0) {
    lVar21 = *(long *)(local_a0 + 0x98);
    uVar58 = *(int *)(local_a0 + 0xa8) - 1;
    uVar67 = (int)uVar58 >> 5;
    iVar49 = 0;
    uVar66 = 0xffffffff;
    uVar42 = ~uVar67 >> 0x1f;
    iVar35 = 0;
    do {
      if (iVar35 < (int)uVar67) {
        lVar60 = (long)iVar35;
        do {
          uVar32 = *(uint *)(lVar21 + lVar60 * 4) & uVar66;
          if (uVar32 != 0) {
            do {
              uVar32 = (uVar32 & -uVar32) - 1;
              uVar32 = uVar32 - (uVar32 >> 1 & 0x55555555);
              uVar32 = (uVar32 >> 2 & 0x33333333) + (uVar32 & 0x33333333);
              uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
              uVar66 = -2 << (ulong)(uVar32 & 0x1f) & uVar66;
              FUN_03208bac(&local_90,uVar32 + ((int)lVar60 + iVar49) * 0x20);
              uVar32 = uVar66 & *(uint *)(lVar21 + lVar60 * 4);
            } while (uVar32 != 0);
          }
          lVar60 = lVar60 + 1;
          uVar66 = 0xffffffff;
        } while (lVar60 != (int)uVar67);
      }
      uVar66 = uVar66 & ((-2 << (ulong)(uVar58 & 0x1f) | 1U) ^ 0xfffffffe);
      iVar49 = iVar49 + 1;
      lVar21 = lVar21 + 4;
      bVar14 = uVar42 != 0;
      uVar42 = uVar42 - 1;
      iVar35 = uVar67 - 1;
    } while (bVar14);
  }
  lVar60 = (long)DAT_0444b53c;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  if (*(long *)(lVar21 + lVar60 * 8 + 0x18) != 0) {
    FUN_0332a954();
    lVar21 = *(long *)(lVar27 + 0x38d490);
  }
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar54 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar54 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x30,0);
  plVar54[1] = 0xffffffff;
  plVar29 = plVar54 + 2;
  *plVar29 = 1;
  *plVar54 = (long)&PTR_LAB_042f18b0;
  plVar54[4] = (long)&PTR_LAB_042f18f8;
  plVar54[5] = local_a0;
  if ((local_a0 != 0) && (*(long *)(local_a0 + 8) != 0)) {
    plVar31 = (long *)(local_a0 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar14) {
        *plVar31 = *plVar31 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar15 = FUN_0333b6e8(param_1,plVar54,0x40);
  uVar16 = local_c0[0];
  puVar3 = (uint *)(param_1 + 0x330);
  uVar67 = *(uint *)(param_1 + 0x334);
  uVar58 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar58 + 1;
  plVar31 = (long *)(param_1 + 0x328);
  puVar4 = (uint *)(param_1 + 0x334);
  if ((int)uVar58 < (int)(uVar67 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar58) {
      FUN_032bd0a8(uVar66);
      uVar67 = *puVar4;
    }
    uVar67 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar67) {
      uVar67 = 0x3fffffff;
    }
    uVar42 = uVar66;
    if ((int)uVar66 <= (int)uVar67) {
      uVar42 = uVar67;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar42,4,lVar21,uVar58);
    *plVar31 = lVar21;
    uVar58 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar58 * 4);
  *puVar2 = uVar16;
  puVar2[1] = uVar15;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar22 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar22 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x30,0);
  plVar22[1] = 0xffffffff;
  plVar65 = plVar22 + 2;
  *plVar65 = 1;
  *plVar22 = (long)&PTR_LAB_042f1958;
  plVar22[4] = (long)&PTR_LAB_042f19a0;
  plVar22[5] = local_a0;
  if ((local_a0 != 0) && (*(long *)(local_a0 + 8) != 0)) {
    plVar23 = (long *)(local_a0 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = *plVar23 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar16 = FUN_0333b6e8(param_1,plVar22,0x40);
  uVar67 = *(uint *)(param_1 + 0x334);
  uVar58 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar58 + 1;
  if ((int)uVar58 < (int)(uVar67 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar58) {
      FUN_032bd0a8(uVar66);
      uVar67 = *puVar4;
    }
    uVar67 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar67) {
      uVar67 = 0x3fffffff;
    }
    uVar42 = uVar66;
    if ((int)uVar66 <= (int)uVar67) {
      uVar42 = uVar67;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar42,4,lVar21,uVar58,puVar4);
    *plVar31 = lVar21;
    uVar58 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar58 * 4);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar23 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar23 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x30,0);
  plVar23[1] = 0xffffffff;
  plVar51 = plVar23 + 2;
  *plVar51 = 1;
  *plVar23 = (long)&PTR_LAB_042f1a00;
  plVar23[4] = (long)&PTR_LAB_042f1a48;
  plVar23[5] = local_a0;
  if ((local_a0 != 0) && (*(long *)(local_a0 + 8) != 0)) {
    plVar24 = (long *)(local_a0 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar14) {
        *plVar24 = *plVar24 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar17 = FUN_0333b6e8(param_1,plVar23,0x40);
  uVar67 = *(uint *)(param_1 + 0x334);
  uVar58 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar58 + 1;
  if ((int)uVar58 < (int)(uVar67 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar58) {
      FUN_032bd0a8(uVar66);
      uVar67 = *puVar4;
    }
    uVar67 = (uVar67 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar67) {
      uVar67 = 0x3fffffff;
    }
    uVar42 = uVar66;
    if ((int)uVar66 <= (int)uVar67) {
      uVar42 = uVar67;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar42,4,lVar21,uVar58);
    *plVar31 = lVar21;
    uVar58 = *puVar3;
  }
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar58 * 4);
  *(uint *)(param_1 + 0x330) = uVar66;
  *puVar2 = uVar15;
  puVar2[1] = uVar17;
  uVar67 = *(uint *)(param_1 + 0x20);
  uVar58 = *(uint *)(param_1 + 0x24);
  uVar66 = uVar67 + 1;
  if ((int)uVar67 < (int)(uVar58 & 0x3fffffff)) {
    lVar21 = *(long *)(param_1 + 0x18);
    uVar58 = uVar67;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < (int)uVar67) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar61;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar42 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar42 = uVar58;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar42,0x18,uVar28,uVar67,puVar61);
    uVar58 = *(uint *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar21;
  }
  puVar38 = (undefined8 *)(lVar21 + (long)(int)uVar58 * 0x18);
  *(uint *)(param_1 + 0x20) = uVar66;
  *(undefined2 *)(puVar38 + 1) = 1;
  *puVar38 = 0;
  *(undefined1 *)((long)puVar38 + 10) = 0x40;
  puVar38[2] = 0;
  uVar58 = *(uint *)(param_1 + 0x334);
  uVar42 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar32,4,lVar21,uVar42);
    *plVar31 = lVar21;
    uVar42 = *puVar3;
  }
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar42 * 4);
  *puVar3 = uVar66;
  *puVar2 = uVar16;
  uVar15 = (ushort)uVar67;
  puVar2[1] = uVar15;
  uVar58 = *puVar4;
  uVar42 = *puVar3;
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar32,4,lVar21,uVar42);
    *plVar31 = lVar21;
    uVar42 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar42 * 4);
  *puVar2 = uVar17;
  puVar2[1] = uVar15;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar24 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x920,0);
  lVar21 = local_a0;
  uVar33 = *(undefined4 *)(local_a0 + 0x18);
  uVar7 = *(undefined4 *)(local_a0 + 0xd0);
  plVar24[1] = 0xffffffff;
  plVar56 = plVar24 + 2;
  *plVar56 = 1;
  *plVar24 = (long)&PTR_LAB_042f1f48;
  plVar24[4] = (long)&PTR_LAB_042f1f88;
  plVar24[0xe] = (long)(plVar24 + 0x10);
  plVar24[0xf] = -0x7fffffef00000000;
  plVar24[0x99] = -0x7fffffef00000000;
  plVar24[0x98] = (long)(plVar24 + 0x9a);
  *(undefined4 *)(plVar24 + 0x122) = uVar33;
  FUN_0332bcc0(plVar24 + 6,uVar33,uVar7,1);
  *plVar24 = (long)&PTR_LAB_042f1e70;
  plVar24[4] = (long)&PTR_LAB_042f1eb8;
  plVar24[0x123] = lVar21;
  if ((lVar21 != 0) && (*(long *)(lVar21 + 8) != 0)) {
    plVar25 = (long *)(lVar21 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar14) {
        *plVar25 = *plVar25 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar17 = FUN_0333b858(param_1,plVar24,*(undefined4 *)(local_a0 + 0x18),1,0x40);
  uVar58 = *(uint *)(param_1 + 0x334);
  uVar42 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar32,4,lVar21,uVar42,puVar4);
    *plVar31 = lVar21;
    uVar42 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar42 * 4);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar25 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar25 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x940,0);
  lVar21 = local_a0;
  uVar33 = *(undefined4 *)(local_a0 + 0x18);
  uVar7 = *(undefined4 *)(local_a0 + 0x118);
  plVar25[1] = 0xffffffff;
  plVar53 = plVar25 + 2;
  *plVar53 = 1;
  *plVar25 = (long)&PTR_LAB_042f20a8;
  plVar25[4] = (long)&PTR_LAB_042f20e8;
  plVar25[0xe] = (long)(plVar25 + 0x10);
  *(undefined4 *)(plVar25 + 0xf) = 0;
  *(undefined4 *)((long)plVar25 + 0x7c) = 0x80000011;
  plVar25[0x98] = (long)(plVar25 + 0x9a);
  *(undefined4 *)(plVar25 + 0x99) = 0;
  *(undefined4 *)((long)plVar25 + 0x4cc) = 0x80000011;
  *(undefined4 *)(plVar25 + 0x122) = uVar33;
  FUN_0332bcc0(plVar25 + 6,uVar33,uVar7,1);
  *plVar25 = (long)&PTR_LAB_042f1fd0;
  plVar25[4] = (long)&PTR_LAB_042f2018;
  plVar25[0x123] = lVar21;
  if ((lVar21 != 0) && (*(long *)(lVar21 + 8) != 0)) {
    plVar26 = (long *)(lVar21 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar14) {
        *plVar26 = *plVar26 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  nn::os::InitializeMutex((MutexType *)(plVar25 + 0x124),true,0);
  uVar18 = FUN_0333b858(param_1,plVar25,*(undefined4 *)(local_a0 + 0x18),1,0x40);
  uVar58 = *(uint *)(param_1 + 0x334);
  uVar42 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar21 = *plVar31;
  }
  else {
    lVar21 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar21 = FUN_032bd1d4(puVar13,uVar32,4,lVar21,uVar42,puVar4);
    *plVar31 = lVar21;
    uVar42 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar21 + (long)(int)uVar42 * 4);
  *puVar2 = uVar16;
  puVar2[1] = uVar18;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  plVar26 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x30,0);
  plVar26[1] = 0xffffffff;
  plVar68 = plVar26 + 2;
  *plVar68 = 1;
  *plVar26 = (long)&PTR_LAB_042f1aa8;
  plVar26[4] = (long)&PTR_LAB_042f1ae8;
  plVar26[5] = local_a0;
  if ((local_a0 != 0) && (*(long *)(local_a0 + 8) != 0)) {
    plVar5 = (long *)(local_a0 + 0x10);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar14) {
        *plVar5 = *plVar5 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar16 = FUN_0333b6e8(param_1,plVar26,0x40);
  uVar58 = *(uint *)(param_1 + 0x334);
  uVar42 = *(uint *)(param_1 + 0x330);
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar27 = *plVar31;
  }
  else {
    lVar27 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar27 = FUN_032bd1d4(puVar13,uVar32,4,lVar27,uVar42);
    *plVar31 = lVar27;
    uVar42 = *puVar3;
  }
  puVar2 = (ushort *)(lVar27 + (long)(int)uVar42 * 4);
  *puVar3 = uVar66;
  *puVar2 = uVar17;
  puVar2[1] = uVar16;
  uVar58 = *puVar4;
  uVar42 = *puVar3;
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar27 = *plVar31;
  }
  else {
    lVar27 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar27 = FUN_032bd1d4(puVar13,uVar32,4,lVar27,uVar42);
    *plVar31 = lVar27;
    uVar42 = *puVar3;
  }
  puVar2 = (ushort *)(lVar27 + (long)(int)uVar42 * 4);
  *puVar3 = uVar66;
  *puVar2 = uVar18;
  puVar2[1] = uVar16;
  uVar58 = *puVar4;
  uVar42 = *puVar3;
  uVar66 = uVar42 + 1;
  if ((int)uVar42 < (int)(uVar58 & 0x3fffffff)) {
    lVar27 = *plVar31;
  }
  else {
    lVar27 = *plVar31;
    if (0x3ffffffe < (int)uVar42) {
      FUN_032bd0a8(uVar66);
      uVar58 = *puVar4;
    }
    uVar58 = (uVar58 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar58) {
      uVar58 = 0x3fffffff;
    }
    uVar32 = uVar66;
    if ((int)uVar66 <= (int)uVar58) {
      uVar32 = uVar58;
    }
    lVar27 = FUN_032bd1d4(puVar13,uVar32,4,lVar27,uVar42);
    *plVar31 = lVar27;
    uVar42 = *puVar3;
  }
  *puVar3 = uVar66;
  puVar2 = (ushort *)(lVar27 + (long)(int)uVar42 * 4);
  *puVar2 = uVar16;
  puVar2[1] = uVar15;
  if ((plVar26 != (long *)0x0) && (plVar26[1] != 0)) {
    do {
      lVar27 = *plVar68;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar68,0x10);
      if (bVar14) {
        *plVar68 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  if ((plVar25 != (long *)0x0) && (plVar25[1] != 0)) {
    do {
      lVar27 = *plVar53;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar53,0x10);
      if (bVar14) {
        *plVar53 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  if ((plVar24 != (long *)0x0) && (plVar24[1] != 0)) {
    do {
      lVar27 = *plVar56;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar56,0x10);
      if (bVar14) {
        *plVar56 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))();
    }
  }
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    do {
      lVar27 = *plVar51;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar14) {
        *plVar51 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    do {
      lVar27 = *plVar65;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar65,0x10);
      if (bVar14) {
        *plVar65 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  if ((plVar54 != (long *)0x0) && (plVar54[1] != 0)) {
    do {
      lVar27 = *plVar29;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar14) {
        *plVar29 = lVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar54 + 0x18))(plVar54);
    }
  }
  lVar27 = local_b0;
  uVar66 = local_b0._4_4_;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  if ((-1 < lVar27) && (local_b8 != 0)) {
    (**(code **)(*(long *)puVar12 + 0x18))(puVar12,local_b8,(uVar66 & 0x3fffffff) << 1);
  }
  if (lVar52 != 0) {
    puVar38 = *(undefined8 **)(lVar52 + 8);
    uVar36 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
    if ((uVar36 <= *(ulong *)(lVar52 + 0x10)) &&
       (*(ulong *)(lVar52 + 8) = uVar36, puVar38 != (undefined8 *)0x0)) {
      *puVar38 = &DAT_0390f40e;
      uVar28 = nn::os::GetSystemTick();
      puVar38[1] = uVar28;
    }
  }
  return uVar67 & 0xffff;
}


