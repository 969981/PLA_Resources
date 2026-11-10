/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334d550; name: FUN_0334d550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0334d550(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 local_d0;
  undefined *local_c8;
  uint *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  uint uStack_a4;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  ulong local_80 [2];
  uint local_64;
  
  puVar17 = PTR_PTR_0434a080;
  uVar6 = *(uint *)(param_2 + 0x24);
  uVar31 = (ulong)uVar6;
  local_b0 = CONCAT44(local_b0._4_4_,uVar6);
  uVar9 = uVar6 - 1;
  if ((int)uVar6 < 1) {
    lVar18 = 0;
    iVar19 = -0x80000000;
  }
  else {
    lVar18 = FUN_032cf190(PTR_PTR_0434a080,4,&local_b0);
    iVar19 = (int)local_b0;
  }
  uVar16 = _UNK_03889f38;
  uVar15 = _DAT_03889f30;
  uVar3 = uVar6 & 3;
  uVar30 = 0xffffffff;
  uVar27 = 0;
  puVar34 = (undefined8 *)0x0;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  fVar46 = 3.40282e+38;
  lVar33 = 0;
  uVar29 = 0x80000000;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  uVar32 = 0xffffffff;
  local_90 = 0;
  local_88 = -0x8000000000000000;
  while( true ) {
    uVar2 = uVar27 + uVar6;
    lVar23 = *(long *)(param_1 + 0x20);
    uVar4 = uVar29 & 0x3fffffff;
    iVar26 = *(int *)(param_2 + 0x20);
    if ((int)uVar4 < (int)uVar2) {
      if (0x3fffffff < (int)uVar2) {
        FUN_032bd0a8(uVar2);
      }
      uVar20 = (uVar29 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar20) {
        uVar20 = 0x3fffffff;
      }
      local_64 = uVar2;
      if ((int)uVar2 <= (int)uVar20) {
        local_64 = uVar20;
      }
      local_80[0] = (ulong)local_64 << 4;
      if (((int)local_64 < (int)uVar4) || (0x3fffffff < (int)local_64)) {
        local_d0 = 1;
        local_c0 = &local_64;
        local_c8 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_d0);
      }
      puVar35 = (undefined8 *)(**(code **)(*(long *)puVar17 + 0x10))(puVar17,local_80[0],local_80);
      if (0 < (int)uVar27) {
        puVar35[1] = puVar34[1];
        *puVar35 = *puVar34;
        if (uVar27 != 1) {
          puVar35[3] = puVar34[3];
          puVar35[2] = puVar34[2];
          if (uVar27 != 2) {
            puVar35[5] = puVar34[5];
            puVar35[4] = puVar34[4];
            if (uVar27 != 3) {
              lVar21 = (ulong)uVar27 - 3;
              puVar24 = puVar34 + 6;
              puVar25 = puVar35 + 6;
              do {
                puVar25[1] = puVar24[1];
                lVar21 = lVar21 + -1;
                *puVar25 = *puVar24;
                puVar24 = puVar24 + 2;
                puVar25 = puVar25 + 2;
              } while (lVar21 != 0);
            }
          }
        }
      }
      if (-1 < (int)uVar29) {
        (**(code **)(*(long *)puVar17 + 0x18))(puVar17,puVar34,(ulong)uVar4 << 4);
      }
      if (local_80[0] < 0x3fffffff0) {
        uVar22 = (undefined4)(local_80[0] >> 4);
      }
      else {
        uVar22 = 0x3fffffff;
      }
      *(undefined4 *)((long)local_80 + lVar33 * 0x10 + -0x24) = uVar22;
      local_80[lVar33 * 2 + -6] = (ulong)puVar35;
    }
    else {
      puVar35 = puVar34;
    }
    if ((int)uVar6 < 1) {
      *(uint *)(local_80 + lVar33 * 2 + -5) = uVar2;
    }
    else {
      puVar34 = (undefined8 *)(lVar23 + (long)iVar26 * 0x10);
      puVar35 = puVar35 + (long)(int)uVar27 * 2;
      if (2 < uVar9) {
        puVar24 = puVar34;
        puVar25 = puVar35;
        iVar26 = uVar3 - uVar6;
        do {
          puVar25[1] = puVar24[1];
          *puVar25 = *puVar24;
          puVar25[3] = puVar24[3];
          puVar25[2] = puVar24[2];
          puVar25[5] = puVar24[5];
          puVar25[4] = puVar24[4];
          puVar25[7] = puVar24[7];
          puVar34 = puVar24 + 8;
          puVar35 = puVar25 + 8;
          iVar26 = iVar26 + 4;
          puVar25[6] = puVar24[6];
          puVar24 = puVar34;
          puVar25 = puVar35;
        } while (iVar26 != 0);
      }
      if (uVar3 != 0) {
        uVar27 = uVar3;
        do {
          puVar35[1] = puVar34[1];
          uVar27 = uVar27 - 1;
          *puVar35 = *puVar34;
          puVar34 = puVar34 + 2;
          puVar35 = puVar35 + 2;
        } while (uVar27 != 0);
      }
      *(uint *)(local_80 + lVar33 * 2 + -5) = uVar2;
      puVar35 = (undefined8 *)local_80[lVar33 * 2 + -6];
      if (1 < (int)uVar6) {
        FUN_03351340(puVar35,0,uVar9,lVar33);
      }
      auVar43._8_4_ = 0xff7fffee;
      auVar43._0_8_ = 0xff7fffeeff7fffee;
      auVar43._12_4_ = 0xff7fffee;
      auVar42._8_4_ = 0x7f7fffee;
      auVar42._0_8_ = 0x7f7fffee7f7fffee;
      auVar42._12_4_ = 0x7f7fffee;
      uVar28 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                  (*(long **)(param_1 + 0x40),*(undefined4 *)((long)puVar35 + uVar28 * 0x10 + 0xc),
                   &local_d0);
        uVar1 = uVar28 + 1;
        auVar39._8_8_ = uVar16;
        auVar39._0_8_ = uVar15;
        auVar11._8_8_ = local_c8;
        auVar11._0_8_ = local_d0;
        auVar42 = NEON_fmin(auVar42,auVar11,4);
        auVar13._8_8_ = uStack_b8;
        auVar13._0_8_ = local_c0;
        auVar43 = NEON_fmax(auVar43,auVar13,4);
        auVar37._0_4_ = auVar43._0_4_ - auVar42._0_4_;
        auVar37._4_4_ = auVar43._4_4_ - auVar42._4_4_;
        auVar37._8_4_ = auVar43._8_4_ - auVar42._8_4_;
        auVar37._12_4_ = auVar43._12_4_ - auVar42._12_4_;
        auVar39 = a64_TBL(ZEXT816(0),auVar37,auVar39);
        auVar38._0_4_ = (auVar37._0_4_ + auVar37._0_4_) * auVar39._0_4_;
        auVar38._4_4_ = (auVar37._4_4_ + auVar37._4_4_) * auVar39._4_4_;
        auVar38._8_4_ = (auVar37._8_4_ + auVar37._8_4_) * auVar39._8_4_;
        auVar38._12_4_ = (auVar37._12_4_ + auVar37._12_4_) * auVar39._12_4_;
        auVar39 = NEON_ext(auVar38,auVar38,8,1);
        *(float *)(lVar18 + uVar28 * 4) =
             (float)(int)uVar1 * (auVar38._0_4_ + auVar38._4_4_ + auVar39._0_4_);
        uVar28 = uVar1;
      } while (uVar31 != uVar1);
    }
    if (0 < (int)uVar9) {
      puVar35 = puVar35 + (long)(int)uVar9 * 2;
      iVar26 = 1;
      auVar45._8_4_ = 0xff7fffee;
      auVar45._0_8_ = 0xff7fffeeff7fffee;
      auVar45._12_4_ = 0xff7fffee;
      auVar44._8_4_ = 0x7f7fffee;
      auVar44._0_8_ = 0x7f7fffee7f7fffee;
      auVar44._12_4_ = 0x7f7fffee;
      uVar27 = uVar9;
      do {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                  (*(long **)(param_1 + 0x40),*(undefined4 *)((long)puVar35 + 0xc),&local_d0);
        uVar2 = uVar27 - 1;
        puVar35 = puVar35 + -2;
        auVar10._8_8_ = uVar16;
        auVar10._0_8_ = uVar15;
        auVar12._8_8_ = local_c8;
        auVar12._0_8_ = local_d0;
        auVar44 = NEON_fmin(auVar44,auVar12,4);
        auVar14._8_8_ = uStack_b8;
        auVar14._0_8_ = local_c0;
        auVar45 = NEON_fmax(auVar45,auVar14,4);
        fVar36 = (float)iVar26;
        iVar26 = iVar26 + 1;
        auVar40._0_4_ = auVar45._0_4_ - auVar44._0_4_;
        auVar40._4_4_ = auVar45._4_4_ - auVar44._4_4_;
        auVar40._8_4_ = auVar45._8_4_ - auVar44._8_4_;
        auVar40._12_4_ = auVar45._12_4_ - auVar44._12_4_;
        auVar43 = a64_TBL(ZEXT816(0),auVar40,auVar10);
        auVar41._0_4_ = (auVar40._0_4_ + auVar40._0_4_) * auVar43._0_4_;
        auVar41._4_4_ = (auVar40._4_4_ + auVar40._4_4_) * auVar43._4_4_;
        auVar41._8_4_ = (auVar40._8_4_ + auVar40._8_4_) * auVar43._8_4_;
        auVar41._12_4_ = (auVar40._12_4_ + auVar40._12_4_) * auVar43._12_4_;
        auVar43 = NEON_ext(auVar41,auVar41,8,1);
        fVar36 = *(float *)(lVar18 + (long)(int)uVar2 * 4) +
                 fVar36 * (auVar41._0_4_ + auVar41._4_4_ + auVar43._0_4_);
        uVar29 = (uint)lVar33;
        if (fVar46 <= fVar36) {
          uVar29 = (uint)uVar30;
          uVar27 = uVar32;
          fVar36 = fVar46;
        }
        fVar46 = fVar36;
        uVar32 = uVar27;
        uVar30 = (ulong)uVar29;
        uVar27 = uVar2;
      } while (uVar2 != 0);
    }
    lVar23 = local_88;
    lVar33 = lVar33 + 1;
    if (lVar33 == 3) break;
    puVar34 = (undefined8 *)local_80[lVar33 * 2 + -6];
    uVar27 = (uint)local_80[lVar33 * 2 + -5];
    uVar29 = *(uint *)((long)local_80 + lVar33 * 0x10 + -0x24);
  }
  iVar26 = *(int *)(param_2 + 0x20);
  *(int *)(param_3 + 0x20) = iVar26;
  *(uint *)(param_3 + 0x24) = uVar32;
  *(uint *)(param_4 + 0x20) = iVar26 + uVar32;
  iVar7 = *(int *)(param_2 + 0x24);
  iVar8 = iVar7 - uVar32;
  *(int *)(param_4 + 0x24) = iVar8;
  if ((int)uVar32 < param_5 || iVar8 < param_5) {
    uVar9 = uVar6;
    if ((int)uVar6 < 0) {
      uVar9 = uVar6 + 1;
    }
    iVar8 = (int)uVar9 >> 1;
    *(int *)(param_3 + 0x20) = iVar26;
    *(int *)(param_3 + 0x24) = iVar8;
    *(int *)(param_4 + 0x20) = iVar26 + iVar8;
    *(int *)(param_4 + 0x24) = iVar7 - iVar8;
  }
  if (0 < (int)uVar6) {
    puVar34 = *(undefined8 **)
               ((long)local_80 + ((-(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4) - 0x30));
    puVar35 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar26 * 0x10);
    do {
      uVar6 = (int)uVar31 - 1;
      uVar31 = (ulong)uVar6;
      uVar22 = *(undefined4 *)(puVar34 + 1);
      uVar5 = *(undefined4 *)((long)puVar34 + 0xc);
      *puVar35 = *puVar34;
      *(undefined4 *)(puVar35 + 1) = uVar22;
      *(undefined4 *)((long)puVar35 + 0xc) = uVar5;
      puVar34 = puVar34 + 2;
      puVar35 = puVar35 + 2;
    } while (uVar6 != 0);
  }
  uVar31 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar23) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_90,(uVar31 & 0x3fffffff) << 4);
  }
  lVar33 = local_98;
  uVar31 = (ulong)local_98._4_4_;
  local_90 = 0;
  local_88 = CONCAT44(0x80000000,(undefined4)local_88);
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_a0 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_a0,(uVar31 & 0x3fffffff) << 4);
  }
  lVar33 = local_a8;
  uVar31 = (ulong)uStack_a4;
  local_a0 = 0;
  local_98 = CONCAT44(0x80000000,(undefined4)local_98);
  local_a8 = (ulong)uStack_a4 << 0x20;
  if ((-1 < lVar33) && (local_b0 != 0)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,local_b0,(uVar31 & 0x3fffffff) << 4);
  }
  if ((lVar18 != 0) && (-1 < iVar19)) {
    (**(code **)(*(long *)puVar17 + 0x18))(puVar17,lVar18,iVar19 << 2);
  }
  return;
}


