/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f1cb0; name: FUN_030f1cb0
 */


void FUN_030f1cb0(long param_1,long *param_2,long *param_3,float *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long *plVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined8 uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  uint local_120;
  long local_100;
  undefined8 uStack_f8;
  long local_f0;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  long local_d8;
  undefined4 local_d0;
  float fStack_cc;
  ulong local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  float *pfStack_a0;
  float local_84;
  
  fVar46 = *(float *)((long)param_2 + 0xc);
  uVar29 = (ulong)(uint)fVar46;
  if (fVar46 == 0.0) {
    lVar10 = (long)*(int *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        iVar8 = *(int *)(param_1 + 0x100);
        lVar10 = lVar10 + -1;
        if (0 < iVar8) {
          lVar11 = (long)iVar8 + -1;
          lVar17 = *(long *)(param_1 + 0x18) + lVar10 * 0x40;
          plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
          (**(code **)(*plVar14 + 0x30))(plVar14,param_1,lVar17);
          if (0 < lVar11) {
            lVar11 = (long)iVar8 + -2;
            do {
              plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
              (**(code **)(*plVar14 + 0x30))(plVar14,param_1,lVar17);
              bVar1 = 0 < lVar11;
              lVar11 = lVar11 + -1;
            } while (bVar1);
          }
        }
      } while (0 < lVar10);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar8 = *(int *)((long)param_3 + 0xc);
    goto joined_r0x030f2574;
  }
  local_100 = 0;
  uStack_f8 = 0x8000000000000000;
  lVar10 = tpidr_el0;
  lVar17 = *(long *)(lVar10 + 0x38d490);
  fStack_e8 = fVar46;
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar17;
  }
  lVar17 = *(long *)(lVar17 + 8);
  uVar27 = (ulong)(int)((int)fVar46 * 0x40 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar17 + 0x10) < uVar27) {
LAB_030f2938:
    lVar11 = FUN_032ce670(lVar17,uVar27);
  }
  else {
    lVar11 = *(long *)(lVar17 + 0x18);
    if (*(ulong *)(lVar17 + 0x20) < lVar11 + uVar27) goto LAB_030f2938;
    *(ulong *)(lVar17 + 0x18) = lVar11 + uVar27;
  }
  puVar7 = PTR_PTR_0434a080;
  local_120 = (uint)fVar46 | 0x80000000;
  uStack_f8._4_4_ = (uint)fVar46 | 0x80000000;
  local_100 = lVar11;
  local_f0 = lVar11;
  if ((int)fVar46 < 0x40000000) {
    if (0 < (int)fVar46) {
      bVar1 = true;
      goto LAB_030f1d94;
    }
    bVar1 = false;
    if ((int)fVar46 < 0) goto LAB_030f1d94;
  }
  else {
    FUN_032bd0a8(fVar46);
    fVar32 = (float)(((uint)fVar46 & 0x3fffffff) << 1);
    if (0x3ffffffe < (uint)fVar32) {
      fVar32 = 1.9999999;
    }
    local_84 = fVar46;
    if ((int)fVar46 <= (int)fVar32) {
      local_84 = fVar32;
    }
    local_b8 = (ulong)(uint)local_84 << 6;
    if (((int)local_84 < (int)((uint)fVar46 & 0x3fffffff)) || (0x3fffffff < (int)local_84)) {
      local_b0 = 1;
      pfStack_a0 = &local_84;
      local_a8 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_b0);
    }
    local_100 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_b8,&local_b8);
    if (local_b8 < 0xfffffffc0) {
      local_120 = (uint)(local_b8 >> 6);
    }
    else {
      local_120 = 0x3fffffff;
    }
    bVar1 = true;
LAB_030f1d94:
    uStack_f8._0_4_ = fVar46;
  }
  lVar17 = local_100;
  uStack_f8._4_4_ = local_120;
  lVar9 = (**(code **)(*param_2 + 0x20))(param_2);
  if (bVar1) {
    fVar32 = 3.40282e+38;
    puVar15 = (undefined8 *)(lVar9 + 0x50);
    pfVar21 = (float *)(lVar17 + 0x34);
    uVar25 = uVar29;
    do {
      uVar22 = puVar15[-10];
      if (*(float *)(puVar15 + -6) <= fVar32) {
        fVar32 = *(float *)(puVar15 + -6);
      }
      fVar35 = *(float *)(param_1 + 0x140);
      *(undefined8 *)(pfVar21 + -0xb) = puVar15[-9];
      *(undefined8 *)(pfVar21 + -0xd) = uVar22;
      uVar22 = puVar15[-8];
      *(undefined8 *)(pfVar21 + -7) = puVar15[-7];
      *(undefined8 *)(pfVar21 + -9) = uVar22;
      *(undefined8 *)(pfVar21 + -3) = *puVar15;
      pfVar21[-1] = *(float *)(puVar15 + 2);
      pfVar21[-4] = 0.0;
      fVar45 = *(float *)(puVar15 + -6);
      pfVar21[-5] = fVar45;
      fVar45 = fVar35 - fVar45;
      if (fVar45 <= fVar35) {
        fVar35 = fVar45;
      }
      fVar37 = 0.0;
      if (0.0 <= fVar45) {
        fVar37 = fVar35;
      }
      uVar25 = uVar25 - 1;
      *pfVar21 = fVar37;
      puVar15 = puVar15 + 0x10;
      pfVar21 = pfVar21 + 0x10;
    } while (uVar25 != 0);
  }
  else {
    fVar32 = 3.40282e+38;
  }
  uVar25 = (ulong)*(int *)(param_1 + 0x20);
  fVar35 = fVar46;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar25 = uVar25 - 1;
      puVar15 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar25 * 0x40);
      fVar35 = (float)FUN_030f2e18(0x3f8ccccd,param_1,puVar15,&local_100);
      if ((int)fVar35 < 0) {
        iVar8 = *(int *)(param_1 + 0x100);
        if ((0 < iVar8) &&
           (lVar9 = (long)iVar8 + -1, plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8),
           (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar15), 0 < lVar9)) {
          lVar9 = (long)iVar8 + -2;
          do {
            plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
            (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar15);
            bVar1 = 0 < lVar9;
            lVar9 = lVar9 + -1;
          } while (bVar1);
        }
        uVar23 = (long)*(int *)(param_1 + 0x20) - 1;
        *(int *)(param_1 + 0x20) = (int)uVar23;
        if (uVar25 != (uVar23 & 0xffffffff)) {
          puVar15 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar25 * 0x40);
          puVar26 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar23 * 0x40);
          uVar22 = puVar26[5];
          puVar15[3] = puVar26[3];
          puVar15[5] = uVar22;
          puVar15[1] = puVar26[1];
          uVar22 = *puVar26;
          puVar15[2] = puVar26[2];
          *puVar15 = uVar22;
          uVar22 = puVar26[4];
          puVar15[6] = puVar26[6];
          puVar15[4] = uVar22;
        }
      }
      else {
        uVar29 = (ulong)(uint)fVar35;
        puVar26 = (undefined8 *)(lVar17 + (long)(int)fVar35 * 0x40);
        if (((puVar26[5] != puVar15[5]) || (*(int *)(puVar26 + 6) != *(int *)(puVar15 + 6))) &&
           (iVar8 = *(int *)(param_1 + 0x100), 0 < iVar8)) {
          lVar9 = (long)iVar8 + -1;
          plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
          (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar15);
          if (0 < lVar9) {
            lVar9 = (long)iVar8 + -2;
            do {
              plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
              (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar15);
              bVar1 = 0 < lVar9;
              lVar9 = lVar9 + -1;
            } while (bVar1);
          }
          iVar8 = *(int *)(param_1 + 0x100);
          if ((0 < iVar8) &&
             (lVar9 = (long)iVar8 + -1, plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8),
             (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar26), 0 < lVar9)) {
            lVar9 = (long)iVar8 + -2;
            do {
              plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
              (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar26);
              bVar1 = 0 < lVar9;
              lVar9 = lVar9 + -1;
            } while (bVar1);
          }
        }
        uVar22 = *puVar26;
        uStack_f8._0_4_ = (float)((int)fVar46 - 1);
        fVar45 = *(float *)(param_1 + 0x140);
        fVar46 = *(float *)(puVar26 + 4);
        puVar15[1] = puVar26[1];
        *puVar15 = uVar22;
        fVar45 = fVar45 - fVar46;
        uVar22 = puVar26[2];
        puVar15[3] = puVar26[3];
        puVar15[2] = uVar22;
        puVar15[5] = puVar26[5];
        fVar46 = *(float *)((long)puVar15 + 0x34);
        if (fVar45 <= *(float *)((long)puVar15 + 0x34)) {
          fVar46 = fVar45;
        }
        puVar15[4] = puVar26[4];
        uVar16 = *(undefined4 *)(puVar26 + 6);
        fVar37 = 0.0;
        if (0.0 <= fVar45) {
          fVar37 = fVar46;
        }
        *(float *)((long)puVar15 + 0x34) = fVar37;
        *(undefined4 *)(puVar15 + 6) = uVar16;
        if ((float)uStack_f8 == fVar35) {
          fVar46 = fVar35;
        }
        else {
          puVar15 = (undefined8 *)(lVar17 + (long)(int)(float)uStack_f8 * 0x40);
          uVar22 = puVar15[5];
          puVar26[3] = puVar15[3];
          puVar26[5] = uVar22;
          puVar26[1] = puVar15[1];
          uVar22 = *puVar15;
          puVar26[2] = puVar15[2];
          *puVar26 = uVar22;
          uVar22 = puVar15[4];
          puVar26[6] = puVar15[6];
          puVar26[4] = uVar22;
          uVar29 = (ulong)(uint)(float)uStack_f8;
          fVar46 = (float)uStack_f8;
        }
      }
      fVar35 = (float)uVar29;
    } while (0 < (long)uVar25);
  }
  if (0 < (int)fVar35) {
    uVar29 = 0;
    pfVar21 = (float *)(lVar17 + 0x20);
LAB_030f1f64:
    if (*pfVar21 != fVar32) goto code_r0x030f1f70;
    puVar15 = (undefined8 *)(lVar17 + (uVar29 & 0xffffffff) * 0x40);
    iVar8 = FUN_030f2e18(0x3dcccccd,param_1,puVar15,(long *)(param_1 + 0x18));
    if (iVar8 < 0) {
      iVar8 = *(int *)(param_1 + 0x100);
      if ((0 < iVar8) &&
         (lVar9 = (long)iVar8 + -1, plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8),
         (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar15), 0 < lVar9)) {
        lVar9 = (long)iVar8 + -2;
        do {
          plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
          (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar15);
          bVar1 = 0 < lVar9;
          lVar9 = lVar9 + -1;
        } while (bVar1);
      }
      uVar24 = *(uint *)(param_1 + 0x20);
      uVar29 = (ulong)uVar24;
      uVar28 = *(uint *)(param_1 + 0x24);
      uVar2 = uVar28 & 0x3fffffff;
      puVar18 = *(undefined8 **)(param_1 + 0x18);
      fVar46 = (float)(uVar24 + 1);
      puVar26 = puVar18;
      if ((int)uVar2 <= (int)uVar24) {
        if (0x3ffffffe < (int)uVar24) {
          FUN_032bd0a8(fVar46);
          uVar28 = *(uint *)(param_1 + 0x24);
          uVar2 = uVar28 & 0x3fffffff;
        }
        fVar32 = (float)((uVar28 & 0x3fffffff) << 1);
        if (0x3ffffffe < (uint)fVar32) {
          fVar32 = 1.9999999;
        }
        local_84 = fVar46;
        if ((int)fVar46 <= (int)fVar32) {
          local_84 = fVar32;
        }
        local_b8 = (ulong)(uint)local_84 << 6;
        if (((int)local_84 < (int)uVar2) || (0x3fffffff < (int)local_84)) {
          local_b0 = 1;
          pfStack_a0 = &local_84;
          local_a8 = &DAT_0411b3b8;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_b0);
          uVar28 = *(uint *)(param_1 + 0x24);
          uVar2 = uVar28 & 0x3fffffff;
        }
        puVar26 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_b8,&local_b8);
        if (0 < (int)uVar24) {
          puVar19 = puVar26;
          puVar20 = puVar18;
          do {
            uVar22 = puVar20[5];
            uVar29 = uVar29 - 1;
            puVar19[3] = puVar20[3];
            puVar19[5] = uVar22;
            puVar19[1] = puVar20[1];
            uVar22 = *puVar20;
            puVar19[2] = puVar20[2];
            *puVar19 = uVar22;
            uVar22 = puVar20[4];
            puVar19[6] = puVar20[6];
            puVar19[4] = uVar22;
            puVar20 = puVar20 + 8;
            puVar19 = puVar19 + 8;
          } while (uVar29 != 0);
        }
        if (-1 < (int)uVar28) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar18,(ulong)uVar2 << 6);
        }
        if (local_b8 < 0xfffffffc0) {
          uVar16 = (undefined4)(local_b8 >> 6);
        }
        else {
          uVar16 = 0x3fffffff;
        }
        uVar24 = *(uint *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x24) = uVar16;
        *(undefined8 **)(param_1 + 0x18) = puVar26;
      }
      puVar26 = puVar26 + (long)(int)uVar24 * 8;
      uVar22 = puVar15[5];
      puVar26[3] = puVar15[3];
      puVar26[5] = uVar22;
      puVar26[1] = puVar15[1];
      uVar22 = *puVar15;
      puVar26[2] = puVar15[2];
      *puVar26 = uVar22;
      uVar22 = puVar15[4];
      puVar26[6] = puVar15[6];
      puVar26[4] = uVar22;
      *(float *)(param_1 + 0x20) = fVar46;
    }
    else {
      puVar26 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar8 * 0x40);
      if (((puVar15[5] != puVar26[5]) || (*(int *)(puVar15 + 6) != *(int *)(puVar26 + 6))) &&
         (iVar8 = *(int *)(param_1 + 0x100), 0 < iVar8)) {
        lVar9 = (long)iVar8 + -1;
        plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
        (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar26);
        if (0 < lVar9) {
          lVar9 = (long)iVar8 + -2;
          do {
            plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
            (**(code **)(*plVar14 + 0x30))(plVar14,param_1,puVar26);
            bVar1 = 0 < lVar9;
            lVar9 = lVar9 + -1;
          } while (bVar1);
        }
        iVar8 = *(int *)(param_1 + 0x100);
        if ((0 < iVar8) &&
           (lVar9 = (long)iVar8 + -1, plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8),
           (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar15), 0 < lVar9)) {
          lVar9 = (long)iVar8 + -2;
          do {
            plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
            (**(code **)(*plVar14 + 0x28))(plVar14,param_1,puVar15);
            bVar1 = 0 < lVar9;
            lVar9 = lVar9 + -1;
          } while (bVar1);
        }
      }
      fVar32 = *(float *)(param_1 + 0x140) - *(float *)(puVar15 + 4);
      uVar22 = *puVar15;
      puVar26[1] = puVar15[1];
      *puVar26 = uVar22;
      fVar46 = *(float *)((long)puVar26 + 0x34);
      if (fVar32 <= *(float *)((long)puVar26 + 0x34)) {
        fVar46 = fVar32;
      }
      uVar22 = puVar15[2];
      puVar26[3] = puVar15[3];
      puVar26[2] = uVar22;
      puVar26[5] = puVar15[5];
      fVar35 = 0.0;
      if (0.0 <= fVar32) {
        fVar35 = fVar46;
      }
      puVar26[4] = puVar15[4];
      *(undefined4 *)(puVar26 + 6) = *(undefined4 *)(puVar15 + 6);
      *(float *)((long)puVar26 + 0x34) = fVar35;
    }
  }
joined_r0x030f252c:
  if (lVar17 == lVar11) {
    uStack_f8._0_4_ = 0.0;
  }
  lVar9 = *(long *)(lVar10 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar9;
  }
  lVar10 = *(long *)(lVar9 + 8);
  if (((*(ulong *)(lVar10 + 0x10) < uVar27) || (*(long *)(lVar10 + 0x18) != lVar11 + uVar27)) ||
     (*(long *)(lVar10 + 0x28) == lVar11)) {
    if (lVar11 != 0) {
      if (*(ulong *)(lVar10 + 0x10) < uVar27) {
        *(int *)(*(long *)(lVar10 + 8) + 0x20) = *(int *)(*(long *)(lVar10 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))(*(long **)(lVar10 + 0x40),lVar11,uVar27);
      }
      else if (*(long *)(lVar10 + 0x18) == lVar11 + uVar27) {
        *(long *)(lVar10 + 0x18) = lVar11;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar10,lVar11,uVar27);
      }
    }
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar11;
  }
  uStack_f8 = (ulong)uStack_f8._4_4_ << 0x20;
  if ((lVar17 != 0) && (-1 < (int)local_120)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar17,(ulong)(local_120 & 0x3fffffff) << 6);
  }
  iVar8 = *(int *)((long)param_3 + 0xc);
joined_r0x030f2574:
  if (iVar8 != 0) {
    plVar14 = (long *)(**(code **)(*param_3 + 0x20))(param_3);
    local_100 = *plVar14;
    uStack_f8 = plVar14[1];
    fVar46 = *(float *)(param_1 + 0x140);
    local_f0 = plVar14[2];
    fStack_e8 = *(float *)(plVar14 + 3);
    fStack_e4 = *(float *)((long)plVar14 + 0x1c);
    local_d8 = plVar14[10];
    local_d0 = (undefined4)plVar14[0xc];
    fStack_dc = *(float *)(plVar14 + 4);
    auVar58._0_4_ = *(float *)(plVar14 + 2) * *param_4;
    auVar58._4_4_ = *(float *)((long)plVar14 + 0x14) * param_4[1];
    auVar58._8_4_ = fStack_e8 * param_4[2];
    auVar58._12_4_ = fStack_e4 * param_4[3];
    auVar49 = NEON_ext(auVar58,auVar58,8,1);
    fVar32 = auVar58._0_4_ + auVar58._4_4_ + auVar49._0_4_;
    local_e0 = -(fStack_dc * fVar32);
    fVar32 = fVar46 + fStack_dc * fVar32;
    if (fVar32 <= fVar46) {
      fVar46 = fVar32;
    }
    fStack_cc = 0.0;
    if (0.0 <= fVar32) {
      fStack_cc = fVar46;
    }
    iVar8 = FUN_030f2e18(0x3dcccccd,param_1,&local_100,param_1 + 0x18);
    if (iVar8 == -1) {
      iVar8 = *(int *)(param_1 + 0x100);
      if ((0 < iVar8) &&
         (lVar10 = (long)iVar8 + -1, plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar10 * 8),
         (**(code **)(*plVar14 + 0x28))(plVar14,param_1,&local_100), 0 < lVar10)) {
        lVar10 = (long)iVar8 + -2;
        do {
          plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar10 * 8);
          (**(code **)(*plVar14 + 0x28))(plVar14,param_1,&local_100);
          bVar1 = 0 < lVar10;
          lVar10 = lVar10 + -1;
        } while (bVar1);
      }
      uVar24 = *(uint *)(param_1 + 0x20);
      uVar29 = (ulong)uVar24;
      uVar28 = *(uint *)(param_1 + 0x24);
      uVar2 = uVar28 & 0x3fffffff;
      puVar26 = *(undefined8 **)(param_1 + 0x18);
      fVar46 = (float)(uVar24 + 1);
      puVar15 = puVar26;
      if ((int)uVar2 <= (int)uVar24) {
        if (0x3ffffffe < (int)uVar24) {
          FUN_032bd0a8(fVar46);
          uVar28 = *(uint *)(param_1 + 0x24);
          uVar2 = uVar28 & 0x3fffffff;
        }
        puVar7 = PTR_PTR_0434a080;
        fVar32 = (float)((uVar28 & 0x3fffffff) << 1);
        if (0x3ffffffe < (uint)fVar32) {
          fVar32 = 1.9999999;
        }
        local_84 = fVar46;
        if ((int)fVar46 <= (int)fVar32) {
          local_84 = fVar32;
        }
        local_b8 = (ulong)(uint)local_84 << 6;
        if (((int)local_84 < (int)uVar2) || (0x3fffffff < (int)local_84)) {
          local_b0 = 1;
          pfStack_a0 = &local_84;
          local_a8 = &DAT_0411b3b8;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_b0);
          uVar28 = *(uint *)(param_1 + 0x24);
          uVar2 = uVar28 & 0x3fffffff;
        }
        puVar15 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_b8,&local_b8);
        if (0 < (int)uVar24) {
          puVar20 = puVar15;
          puVar18 = puVar26;
          do {
            uVar22 = puVar18[5];
            uVar29 = uVar29 - 1;
            puVar20[3] = puVar18[3];
            puVar20[5] = uVar22;
            puVar20[1] = puVar18[1];
            uVar22 = *puVar18;
            puVar20[2] = puVar18[2];
            *puVar20 = uVar22;
            uVar22 = puVar18[4];
            puVar20[6] = puVar18[6];
            puVar20[4] = uVar22;
            puVar18 = puVar18 + 8;
            puVar20 = puVar20 + 8;
          } while (uVar29 != 0);
        }
        if (-1 < (int)uVar28) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar26,(ulong)uVar2 << 6);
        }
        if (local_b8 < 0xfffffffc0) {
          uVar16 = (undefined4)(local_b8 >> 6);
        }
        else {
          uVar16 = 0x3fffffff;
        }
        uVar24 = *(uint *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x24) = uVar16;
        *(undefined8 **)(param_1 + 0x18) = puVar15;
      }
      plVar14 = puVar15 + (long)(int)uVar24 * 8;
      plVar14[3] = CONCAT44(fStack_e4,fStack_e8);
      plVar14[5] = local_d8;
      plVar14[1] = uStack_f8;
      plVar14[2] = local_f0;
      *plVar14 = local_100;
      plVar14[6] = CONCAT44(fStack_cc,local_d0);
      plVar14[4] = CONCAT44(fStack_dc,local_e0);
      *(float *)(param_1 + 0x20) = fVar46;
    }
  }
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  if (iVar8 < 1) {
    return;
  }
  uVar2 = *(int *)(param_1 + 0x20) - 2;
  uVar29 = (ulong)iVar8;
  uVar27 = -(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6;
  lVar10 = (long)(int)uVar2 + 1;
  do {
    lVar17 = lVar10;
    uVar25 = uVar27;
    while( true ) {
      puVar15 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar29 * 0x40);
      pfVar21 = (float *)(*(long *)(param_1 + 0x18) + uVar25);
      fVar46 = (float)puVar15[2] * pfVar21[4];
      fVar30 = (float)((ulong)puVar15[2] >> 0x20) * pfVar21[5];
      fVar32 = (float)puVar15[3] * pfVar21[6];
      fVar35 = (float)((ulong)puVar15[3] >> 0x20) * pfVar21[7];
      auVar49._4_4_ = fVar30;
      auVar49._0_4_ = fVar46;
      auVar49._8_4_ = fVar32;
      auVar49._12_4_ = fVar35;
      auVar38._4_4_ = fVar30;
      auVar38._0_4_ = fVar46;
      auVar38._8_4_ = fVar32;
      auVar38._12_4_ = fVar35;
      auVar38 = NEON_ext(auVar49,auVar38,8,1);
      fVar32 = *(float *)(param_1 + 0x148);
      fVar35 = *(float *)(puVar15 + 4);
      fVar36 = pfVar21[8];
      lVar11 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))
                         (*(long **)(param_1 + 0x48),puVar15[5]);
      lVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))
                        (*(long **)(param_1 + 0x48),*(undefined8 *)(pfVar21 + 10));
      pauVar12 = (undefined1 (*) [16])
                 (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                           (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar11 + 0x80));
      pauVar13 = (undefined1 (*) [16])
                 (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                           (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar9 + 0x80));
      auVar58 = *pauVar12;
      auVar49 = pauVar12[7];
      auVar47 = NEON_ext(auVar58,auVar58,8,1);
      fVar37 = auVar58._0_4_;
      fVar55 = auVar49._0_4_;
      fVar42 = auVar58._4_4_;
      fVar60 = auVar49._4_4_;
      fVar43 = auVar58._8_4_;
      fVar61 = auVar49._8_4_;
      fVar44 = auVar58._12_4_;
      fVar45 = (float)*puVar15 - (float)*(double *)pauVar12[1];
      fVar31 = (float)((ulong)*puVar15 >> 0x20) - (float)*(double *)(pauVar12[1] + 8);
      fVar33 = (float)puVar15[1] - (float)*(double *)pauVar12[2];
      fVar34 = (float)((ulong)puVar15[1] >> 0x20) - 0.0;
      fVar54 = auVar47._4_4_ * auVar47._4_4_;
      fVar56 = fVar37 * fVar55 + fVar42 * fVar60 + fVar43 * fVar61;
      fVar59 = fVar37 * fVar55 + fVar42 * fVar60 + fVar43 * fVar61;
      fVar51 = fVar54 + -0.5;
      fVar54 = fVar54 + -0.5;
      uVar22 = NEON_ext(auVar58._0_8_,auVar47._0_8_,4,1);
      auVar58 = NEON_ext(auVar49,auVar49,8,1);
      uVar57 = NEON_ext(auVar49._0_8_,auVar58._0_8_,4,1);
      auVar48._0_4_ = fVar37 * (float)uVar57 - fVar55 * (float)uVar22;
      auVar48._4_4_ =
           fVar42 * (float)((ulong)uVar57 >> 0x20) - fVar60 * (float)((ulong)uVar22 >> 0x20);
      auVar48._8_4_ = fVar43 * fVar55 - fVar61 * fVar37;
      auVar48._12_4_ = fVar44 * fVar60 - auVar49._12_4_ * fVar42;
      auVar58 = pauVar13[7];
      auVar47 = NEON_ext(auVar48,auVar48,4,1);
      fVar37 = fVar55 * fVar51 + fVar37 * fVar56 + auVar47._0_4_ * fVar44;
      fVar42 = fVar60 * fVar54 + fVar42 * fVar59 + auVar47._4_4_ * fVar44;
      fVar43 = fVar61 * fVar51 + fVar43 * fVar56 + auVar48._0_4_ * fVar44;
      fVar44 = auVar49._12_4_ * fVar54 + fVar44 * fVar59 + auVar48._4_4_ * fVar44;
      auVar47._4_4_ = fVar31;
      auVar47._0_4_ = fVar45;
      auVar47._8_4_ = fVar33;
      auVar47._12_4_ = fVar34;
      auVar52._4_4_ = fVar31;
      auVar52._0_4_ = fVar45;
      auVar52._8_4_ = fVar33;
      auVar52._12_4_ = fVar34;
      auVar47 = NEON_ext(auVar47,auVar52,4,1);
      auVar39._0_4_ = fVar37 + fVar37;
      auVar39._4_4_ = fVar42 + fVar42;
      auVar39._8_4_ = fVar43 + fVar43;
      auVar39._12_4_ = fVar44 + fVar44;
      auVar49 = NEON_ext(auVar39,auVar39,4,1);
      fVar37 = auVar47._0_4_ * auVar39._0_4_ - fVar45 * auVar49._0_4_;
      fVar42 = auVar47._4_4_ * auVar39._4_4_ - fVar31 * auVar49._4_4_;
      fVar45 = fVar45 * auVar39._8_4_ - fVar33 * auVar39._0_4_;
      fVar31 = fVar31 * auVar39._12_4_ - fVar34 * auVar39._4_4_;
      auVar3._4_4_ = fVar42;
      auVar3._0_4_ = fVar37;
      auVar3._8_4_ = fVar45;
      auVar3._12_4_ = fVar31;
      auVar4._4_4_ = fVar42;
      auVar4._0_4_ = fVar37;
      auVar4._8_4_ = fVar45;
      auVar4._12_4_ = fVar31;
      auVar47 = NEON_ext(auVar3,auVar4,4,1);
      auVar49 = *pauVar13;
      auVar52 = NEON_ext(auVar49,auVar49,8,1);
      fVar45 = auVar49._0_4_;
      fVar51 = auVar58._0_4_;
      fVar31 = auVar49._4_4_;
      fVar54 = auVar58._4_4_;
      fVar33 = auVar49._8_4_;
      fVar55 = auVar58._8_4_;
      fVar34 = auVar49._12_4_;
      auVar40._0_4_ = *pfVar21 - (float)*(double *)pauVar13[1];
      auVar40._4_4_ = pfVar21[1] - (float)*(double *)(pauVar13[1] + 8);
      auVar40._8_4_ = pfVar21[2] - (float)*(double *)pauVar13[2];
      auVar40._12_4_ = pfVar21[3] - 0.0;
      fVar44 = auVar52._4_4_ * auVar52._4_4_;
      fVar60 = fVar45 * fVar51 + fVar31 * fVar54 + fVar33 * fVar55;
      fVar61 = fVar45 * fVar51 + fVar31 * fVar54 + fVar33 * fVar55;
      fVar43 = fVar44 + -0.5;
      fVar44 = fVar44 + -0.5;
      uVar22 = NEON_ext(auVar49._0_8_,auVar52._0_8_,4,1);
      auVar49 = NEON_ext(auVar58,auVar58,8,1);
      uVar57 = NEON_ext(auVar58._0_8_,auVar49._0_8_,4,1);
      auVar53._0_4_ = fVar45 * (float)uVar57 - fVar51 * (float)uVar22;
      auVar53._4_4_ =
           fVar31 * (float)((ulong)uVar57 >> 0x20) - fVar54 * (float)((ulong)uVar22 >> 0x20);
      auVar53._8_4_ = fVar33 * fVar51 - fVar55 * fVar45;
      auVar53._12_4_ = fVar34 * fVar54 - auVar58._12_4_ * fVar31;
      auVar49 = NEON_ext(auVar53,auVar53,4,1);
      fVar45 = fVar51 * fVar43 + fVar45 * fVar60 + auVar49._0_4_ * fVar34;
      fVar31 = fVar54 * fVar44 + fVar31 * fVar61 + auVar49._4_4_ * fVar34;
      fVar33 = fVar55 * fVar43 + fVar33 * fVar60 + auVar53._0_4_ * fVar34;
      fVar34 = auVar58._12_4_ * fVar44 + fVar34 * fVar61 + auVar53._4_4_ * fVar34;
      auVar49 = NEON_ext(auVar40,auVar40,4,1);
      auVar50._0_4_ = fVar45 + fVar45;
      auVar50._4_4_ = fVar31 + fVar31;
      auVar50._8_4_ = fVar33 + fVar33;
      auVar50._12_4_ = fVar34 + fVar34;
      auVar58 = NEON_ext(auVar50,auVar50,4,1);
      auVar41._0_4_ = auVar49._0_4_ * auVar50._0_4_ - auVar40._0_4_ * auVar58._0_4_;
      auVar41._4_4_ = auVar49._4_4_ * auVar50._4_4_ - auVar40._4_4_ * auVar58._4_4_;
      auVar41._8_4_ = auVar40._0_4_ * auVar50._8_4_ - auVar40._8_4_ * auVar50._0_4_;
      auVar41._12_4_ = auVar40._4_4_ * auVar50._12_4_ - auVar40._12_4_ * auVar50._4_4_;
      auVar58 = NEON_ext(auVar41,auVar41,4,1);
      fVar45 = ((float)*(undefined8 *)pauVar12[6] + auVar47._0_4_) -
               (*(float *)pauVar13[6] + auVar58._0_4_);
      fVar31 = ((float)((ulong)*(undefined8 *)pauVar12[6] >> 0x20) + auVar47._4_4_) -
               (*(float *)(pauVar13[6] + 4) + auVar58._4_4_);
      fVar37 = ((float)*(undefined8 *)(pauVar12[6] + 8) + fVar37) -
               (*(float *)(pauVar13[6] + 8) + auVar41._0_4_);
      fVar42 = ((float)((ulong)*(undefined8 *)(pauVar12[6] + 8) >> 0x20) + fVar42) -
               (*(float *)(pauVar13[6] + 0xc) + auVar41._4_4_);
      fVar45 = fVar45 * fVar45;
      fVar31 = fVar31 * fVar31;
      fVar37 = fVar37 * fVar37;
      fVar42 = fVar42 * fVar42;
      auVar5._4_4_ = fVar31;
      auVar5._0_4_ = fVar45;
      auVar5._8_4_ = fVar37;
      auVar5._12_4_ = fVar42;
      auVar6._4_4_ = fVar31;
      auVar6._0_4_ = fVar45;
      auVar6._8_4_ = fVar37;
      auVar6._12_4_ = fVar42;
      auVar58 = NEON_ext(auVar5,auVar6,8,1);
      if ((fVar35 - fVar36) * (fVar35 - fVar36) +
          fVar32 * fVar32 * (1.0 - (fVar46 + fVar30 + auVar38._0_4_)) * 10.0 +
          (fVar45 + fVar31 + auVar58._0_4_) * 0.1 < 0.1) break;
      lVar17 = lVar17 + -1;
      uVar25 = uVar25 - 0x40;
      if (lVar17 < 1) goto LAB_030f2454;
    }
    iVar8 = *(int *)(param_1 + 0x100);
    lVar17 = *(long *)(param_1 + 0x18);
    if (0 < iVar8) {
      lVar11 = (long)iVar8 + -1;
      lVar17 = lVar17 + uVar29 * 0x40;
      plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
      (**(code **)(*plVar14 + 0x30))(plVar14,param_1,lVar17);
      if (0 < lVar11) {
        lVar11 = (long)iVar8 + -2;
        do {
          plVar14 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
          (**(code **)(*plVar14 + 0x30))(plVar14,param_1,lVar17);
          bVar1 = 0 < lVar11;
          lVar11 = lVar11 + -1;
        } while (bVar1);
      }
      lVar17 = *(long *)(param_1 + 0x18);
    }
    uVar25 = (long)*(int *)(param_1 + 0x20) - 1;
    *(int *)(param_1 + 0x20) = (int)uVar25;
    if (uVar29 != (uVar25 & 0xffffffff)) {
      puVar15 = (undefined8 *)(lVar17 + uVar29 * 0x40);
      puVar26 = (undefined8 *)(lVar17 + uVar25 * 0x40);
      uVar22 = puVar26[5];
      puVar15[3] = puVar26[3];
      puVar15[5] = uVar22;
      puVar15[1] = puVar26[1];
      uVar22 = *puVar26;
      puVar15[2] = puVar26[2];
      *puVar15 = uVar22;
      uVar22 = puVar26[4];
      puVar15[6] = puVar26[6];
      puVar15[4] = uVar22;
    }
LAB_030f2454:
    uVar29 = uVar29 - 1;
    uVar27 = uVar27 - 0x40;
    lVar10 = lVar10 + -1;
    if ((long)uVar29 < 1) {
      return;
    }
  } while( true );
code_r0x030f1f70:
  uVar29 = uVar29 + 1;
  pfVar21 = pfVar21 + 0x10;
  if ((long)(int)fVar35 == uVar29) goto joined_r0x030f252c;
  goto LAB_030f1f64;
}


