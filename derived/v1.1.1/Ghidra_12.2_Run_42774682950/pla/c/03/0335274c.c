/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335274c; name: FUN_0335274c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0335274c(long param_1,long param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint *local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  ulong local_80 [2];
  uint local_64;
  
  puVar18 = PTR_PTR_0434a080;
  uVar17 = _UNK_03889f38;
  uVar16 = _DAT_03889f30;
  uVar5 = *(uint *)(param_2 + 0x24);
  uVar36 = (ulong)uVar5;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  uVar2 = uVar5 & 3;
  uVar32 = 0;
  puVar29 = (undefined8 *)0x0;
  lVar31 = 0;
  uVar35 = 0xffffffff;
  uVar34 = 0x80000000;
  fVar37 = 3.40282e+38;
  do {
    fVar46 = fVar37;
    uVar1 = uVar32 + uVar5;
    lVar26 = *(long *)(param_1 + 0x20);
    uVar3 = uVar34 & 0x3fffffff;
    iVar28 = *(int *)(param_2 + 0x20);
    puVar20 = puVar29;
    if ((int)uVar3 < (int)uVar1) {
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
      }
      uVar21 = (uVar34 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      local_64 = uVar1;
      if ((int)uVar1 <= (int)uVar21) {
        local_64 = uVar21;
      }
      local_80[0] = (ulong)local_64 << 4;
      if (((int)local_64 < (int)uVar3) || (0x3fffffff < (int)local_64)) {
        local_d0 = 1;
        local_c0 = &local_64;
        uStack_c8 = 0x411b3b8;
        uStack_c4 = 0;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_d0);
      }
      puVar20 = (undefined8 *)(**(code **)(*(long *)puVar18 + 0x10))(puVar18,local_80[0],local_80);
      if (0 < (int)uVar32) {
        puVar20[1] = puVar29[1];
        *puVar20 = *puVar29;
        if (uVar32 != 1) {
          puVar20[3] = puVar29[3];
          puVar20[2] = puVar29[2];
          if (uVar32 != 2) {
            puVar20[5] = puVar29[5];
            puVar20[4] = puVar29[4];
            if (uVar32 != 3) {
              lVar22 = (ulong)uVar32 - 3;
              puVar25 = puVar29 + 6;
              puVar27 = puVar20 + 6;
              do {
                puVar27[1] = puVar25[1];
                lVar22 = lVar22 + -1;
                *puVar27 = *puVar25;
                puVar25 = puVar25 + 2;
                puVar27 = puVar27 + 2;
              } while (lVar22 != 0);
            }
          }
        }
      }
      if (-1 < (int)uVar34) {
        (**(code **)(*(long *)puVar18 + 0x18))(puVar18,puVar29,(ulong)uVar3 << 4);
      }
      if (local_80[0] < 0x3fffffff0) {
        uVar23 = (undefined4)(local_80[0] >> 4);
      }
      else {
        uVar23 = 0x3fffffff;
      }
      *(undefined4 *)((long)local_80 + lVar31 * 0x10 + -0x24) = uVar23;
      local_80[lVar31 * 2 + -6] = (ulong)puVar20;
    }
    uVar34 = (uint)lVar31;
    if ((int)uVar5 < 1) {
      auVar41._8_8_ = 0xff7fffeeff7fffee;
      auVar41._0_8_ = 0xff7fffeeff7fffee;
      fVar39 = 3.40282e+38;
      fVar40 = 3.40282e+38;
      auVar45._8_8_ = 0x7f7fffee7f7fffee;
      auVar45._0_8_ = 0x7f7fffee7f7fffee;
      fVar37 = 3.40282e+38;
      fVar38 = 3.40282e+38;
      *(uint *)(local_80 + lVar31 * 2 + -5) = uVar1;
      auVar44 = auVar41;
    }
    else {
      puVar29 = (undefined8 *)(lVar26 + (long)iVar28 * 0x10);
      puVar20 = puVar20 + (long)(int)uVar32 * 2;
      if (2 < uVar5 - 1) {
        puVar25 = puVar29;
        puVar27 = puVar20;
        iVar28 = uVar2 - uVar5;
        do {
          puVar27[1] = puVar25[1];
          *puVar27 = *puVar25;
          puVar27[3] = puVar25[3];
          puVar27[2] = puVar25[2];
          puVar27[5] = puVar25[5];
          puVar27[4] = puVar25[4];
          puVar27[7] = puVar25[7];
          puVar29 = puVar25 + 8;
          puVar20 = puVar27 + 8;
          iVar28 = iVar28 + 4;
          puVar27[6] = puVar25[6];
          puVar25 = puVar29;
          puVar27 = puVar20;
        } while (iVar28 != 0);
      }
      if (uVar2 != 0) {
        uVar32 = uVar2;
        do {
          puVar20[1] = puVar29[1];
          uVar32 = uVar32 - 1;
          *puVar20 = *puVar29;
          puVar29 = puVar29 + 2;
          puVar20 = puVar20 + 2;
        } while (uVar32 != 0);
      }
      uVar30 = local_80[lVar31 * 2 + -6];
      uVar33 = 0;
      puVar29 = (undefined8 *)(uVar30 - 0x10);
      *(uint *)(local_80 + lVar31 * 2 + -5) = uVar1;
      local_80[0] = CONCAT44(local_80[0]._4_4_,uVar34);
      do {
        puVar20 = (undefined8 *)(uVar30 + uVar33 * 0x10);
        uVar24 = puVar20[1];
        uStack_c8 = (undefined4)uVar24;
        uStack_c4 = (undefined4)((ulong)uVar24 >> 0x20);
        local_d0 = *puVar20;
        if (uVar33 == 0) {
          iVar28 = 0;
        }
        else {
          lVar26 = 0;
          puVar20 = puVar29;
          do {
            uVar19 = FUN_03352d38(local_80,&local_d0,puVar20);
            if ((uVar19 & 1) == 0) break;
            lVar26 = lVar26 + -1;
            puVar20[2] = *puVar20;
            puVar20[3] = puVar20[1];
            puVar20 = puVar20 + -2;
          } while (0 < (long)(uVar33 + lVar26));
          iVar28 = (int)uVar33 + (int)lVar26;
        }
        puVar20 = (undefined8 *)(uVar30 + (long)iVar28 * 0x10);
        puVar20[1] = CONCAT44(uStack_c4,uStack_c8);
        uVar33 = uVar33 + 1;
        puVar29 = puVar29 + 2;
        *puVar20 = local_d0;
      } while (uVar33 != uVar36);
      auVar44._8_8_ = 0xff7fffeeff7fffee;
      auVar44._0_8_ = 0xff7fffeeff7fffee;
      auVar45._8_8_ = 0x7f7fffee7f7fffee;
      auVar45._0_8_ = 0x7f7fffee7f7fffee;
      uVar33 = 0;
      uStack_108 = 0x7f7fffee7f7fffee;
      local_110 = 0x7f7fffee7f7fffee;
      uStack_f8 = 0xff7fffeeff7fffee;
      local_100 = 0xff7fffeeff7fffee;
      do {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                  (*(long **)(param_1 + 0x40),*(undefined4 *)(uVar30 + uVar33 * 0x10 + 0xc),
                   &local_d0);
        auVar6._8_4_ = uStack_c8;
        auVar6._0_8_ = local_d0;
        auVar11._8_4_ = uStack_c8;
        auVar11._0_8_ = local_d0;
        if ((long)uVar33 < (long)param_3) {
          auVar14._8_8_ = uStack_108;
          auVar14._0_8_ = local_110;
          auVar6._12_4_ = uStack_c4;
          auVar41 = NEON_fmin(auVar14,auVar6,4);
          auVar7._8_4_ = uStack_b8;
          auVar7._0_8_ = local_c0;
          uStack_108 = auVar41._8_8_;
          local_110 = auVar41._0_8_;
          auVar15._8_8_ = uStack_f8;
          auVar15._0_8_ = local_100;
          auVar7._12_4_ = uStack_b4;
          auVar41 = NEON_fmax(auVar15,auVar7,4);
          uStack_f8 = auVar41._8_8_;
          local_100 = auVar41._0_8_;
        }
        else {
          auVar11._12_4_ = uStack_c4;
          auVar45 = NEON_fmin(auVar45,auVar11,4);
          auVar12._8_4_ = uStack_b8;
          auVar12._0_8_ = local_c0;
          auVar12._12_4_ = uStack_b4;
          auVar44 = NEON_fmax(auVar44,auVar12,4);
        }
        uVar33 = uVar33 + 1;
      } while (uVar36 != uVar33);
      fVar39 = (float)uStack_108;
      fVar40 = (float)((ulong)uStack_108 >> 0x20);
      fVar37 = (float)local_110;
      fVar38 = (float)((ulong)local_110 >> 0x20);
      auVar41._8_8_ = uStack_f8;
      auVar41._0_8_ = local_100;
    }
    uVar33 = local_88;
    fVar37 = auVar41._0_4_ - fVar37;
    fVar38 = auVar41._4_4_ - fVar38;
    fVar39 = auVar41._8_4_ - fVar39;
    fVar40 = auVar41._12_4_ - fVar40;
    auVar13._8_8_ = uVar17;
    auVar13._0_8_ = uVar16;
    auVar8._4_4_ = fVar38;
    auVar8._0_4_ = fVar37;
    auVar8._8_4_ = fVar39;
    auVar8._12_4_ = fVar40;
    auVar41 = a64_TBL(ZEXT816(0),auVar8,auVar13);
    fVar37 = (fVar37 + fVar37) * auVar41._0_4_;
    fVar38 = (fVar38 + fVar38) * auVar41._4_4_;
    fVar39 = (fVar39 + fVar39) * auVar41._8_4_;
    fVar40 = (fVar40 + fVar40) * auVar41._12_4_;
    auVar42._0_4_ = auVar44._0_4_ - auVar45._0_4_;
    auVar42._4_4_ = auVar44._4_4_ - auVar45._4_4_;
    auVar42._8_4_ = auVar44._8_4_ - auVar45._8_4_;
    auVar42._12_4_ = auVar44._12_4_ - auVar45._12_4_;
    auVar9._4_4_ = fVar38;
    auVar9._0_4_ = fVar37;
    auVar9._8_4_ = fVar39;
    auVar9._12_4_ = fVar40;
    auVar10._4_4_ = fVar38;
    auVar10._0_4_ = fVar37;
    auVar10._8_4_ = fVar39;
    auVar10._12_4_ = fVar40;
    auVar41 = NEON_ext(auVar9,auVar10,8,1);
    auVar44 = a64_TBL(ZEXT816(0),auVar42,auVar13);
    auVar43._0_4_ = (auVar42._0_4_ + auVar42._0_4_) * auVar44._0_4_;
    auVar43._4_4_ = (auVar42._4_4_ + auVar42._4_4_) * auVar44._4_4_;
    auVar43._8_4_ = (auVar42._8_4_ + auVar42._8_4_) * auVar44._8_4_;
    auVar43._12_4_ = (auVar42._12_4_ + auVar42._12_4_) * auVar44._12_4_;
    auVar44 = NEON_ext(auVar43,auVar43,8,1);
    fVar37 = fVar37 + fVar38 + auVar41._0_4_ + auVar43._0_4_ + auVar43._4_4_ + auVar44._0_4_;
    if (fVar46 <= fVar37) {
      uVar34 = (uint)uVar35;
    }
    uVar35 = (ulong)uVar34;
    lVar31 = lVar31 + 1;
    if (lVar31 == 3) {
      if (0 < (int)uVar5) {
        puVar29 = *(undefined8 **)
                   ((long)local_80 +
                   ((-(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000 | uVar35 << 4) - 0x30));
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_2 + 0x20) * 0x10);
        do {
          uVar2 = (int)uVar36 - 1;
          uVar36 = (ulong)uVar2;
          uVar23 = *(undefined4 *)(puVar29 + 1);
          uVar4 = *(undefined4 *)((long)puVar29 + 0xc);
          *puVar20 = *puVar29;
          *(undefined4 *)(puVar20 + 1) = uVar23;
          *(undefined4 *)((long)puVar20 + 0xc) = uVar4;
          puVar29 = puVar29 + 2;
          puVar20 = puVar20 + 2;
        } while (uVar2 != 0);
      }
      iVar28 = *(int *)(param_2 + 0x20);
      *(int *)(param_4 + 0x20) = iVar28;
      *(int *)(param_4 + 0x24) = param_3;
      *(int *)(param_5 + 0x20) = iVar28 + param_3;
      uVar35 = local_88 >> 0x20;
      local_88 = uVar35 << 0x20;
      *(int *)(param_5 + 0x24) = *(int *)(param_2 + 0x24) - param_3;
      if ((-1 < (long)uVar33) && (local_90 != 0)) {
        (**(code **)(*(long *)puVar18 + 0x18))(puVar18,local_90,(uVar35 & 0x3fffffff) << 4);
      }
      lVar31 = local_98;
      uVar35 = (ulong)local_98._4_4_;
      local_90 = 0;
      local_88 = CONCAT44(0x80000000,(undefined4)local_88);
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < lVar31) && (local_a0 != 0)) {
        (**(code **)(*(long *)puVar18 + 0x18))(puVar18,local_a0,(uVar35 & 0x3fffffff) << 4);
      }
      lVar31 = local_a8;
      uVar35 = (ulong)local_a8._4_4_;
      local_a0 = 0;
      local_98 = CONCAT44(0x80000000,(undefined4)local_98);
      local_a8 = (ulong)local_a8._4_4_ << 0x20;
      if ((-1 < lVar31) && (local_b0 != 0)) {
        (**(code **)(*(long *)puVar18 + 0x18))(puVar18,local_b0,(uVar35 & 0x3fffffff) << 4);
      }
      return;
    }
    puVar29 = (undefined8 *)local_80[lVar31 * 2 + -6];
    uVar32 = (uint)local_80[lVar31 * 2 + -5];
    uVar34 = *(uint *)((long)local_80 + lVar31 * 0x10 + -0x24);
    if (fVar46 <= fVar37) {
      fVar37 = fVar46;
    }
  } while( true );
}


