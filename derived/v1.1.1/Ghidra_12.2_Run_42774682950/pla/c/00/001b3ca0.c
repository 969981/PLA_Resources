/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b3ca0; name: FUN_001b3ca0
 */


undefined4 FUN_001b3ca0(long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  ulong local_128;
  ulong local_120;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = 0x8000000000000000;
  uVar19 = *(undefined8 *)PTR_PTR_04372408;
  if (0 < (int)param_3) {
    uVar3 = param_3 * 3;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
    }
    local_78 = FUN_032bd1d4(uVar19,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),0x10,0,0,
                            (long)&local_70 + 4);
    lVar30 = (long)(int)param_3;
    iVar2 = 2;
    local_120 = 1;
    local_128 = 1;
    uVar28 = 0;
    if (1 < lVar30) goto LAB_001b3da0;
    while( true ) {
      iVar2 = iVar2 + 1;
      local_120 = local_120 + 1;
      if (local_128 == param_3) break;
      uVar4 = local_128 + 1;
      uVar28 = local_128;
      local_128 = uVar4;
      if ((long)uVar4 < lVar30) {
LAB_001b3da0:
        lVar20 = (long)iVar2;
        fVar32 = -(float)((ulong)*(undefined8 *)(param_2 + uVar28 * 0x10 + 8) >> 0x20);
        uVar4 = local_120;
        do {
          uVar13 = uVar4 + 1;
          if ((long)uVar13 < lVar30) {
            puVar24 = (undefined8 *)(param_2 + uVar4 * 0x10);
            uStack_98 = puVar24[1];
            local_a0 = *puVar24;
            fVar34 = -(float)((ulong)uStack_98 >> 0x20);
            lVar29 = lVar20;
            do {
              auVar40 = *(undefined1 (*) [16])(param_2 + lVar29 * 0x10);
              puVar24 = (undefined8 *)(param_2 + uVar28 * 0x10);
              uStack_a8 = puVar24[1];
              local_b0 = *puVar24;
              uStack_88 = auVar40._8_8_;
              local_90 = auVar40._0_8_;
              FUN_032c925c(&local_b0);
              iVar16 = FUN_032c9090(&local_b0,&local_b0);
              uVar15 = local_70;
              lVar14 = local_78;
              if (-1 < iVar16) {
                fVar39 = -auVar40._12_4_;
                fVar41 = fVar32 * (float)local_b0 + fVar34 * (float)local_a0 +
                         (float)local_90 * fVar39;
                fVar42 = fVar32 * (float)((ulong)local_b0 >> 0x20) + fVar34 * local_a0._4_4_ +
                         (float)((ulong)local_90 >> 0x20) * fVar39;
                fVar43 = fVar32 * (float)uStack_a8 + fVar34 * (float)uStack_98 +
                         (float)uStack_88 * fVar39;
                fVar39 = fVar32 * (float)((ulong)uStack_a8 >> 0x20) + fVar34 * uStack_98._4_4_ +
                         (float)((ulong)uStack_88 >> 0x20) * fVar39;
                if (uVar28 == 0) {
                  uVar21 = 0;
                  bVar1 = true;
                  uVar22 = uVar21;
                  if (1 < uVar4) goto LAB_001b3ecc;
                }
                else {
                  uVar21 = 0;
                  do {
                    puVar24 = (undefined8 *)(param_2 + uVar21 * 0x10);
                    uVar33 = puVar24[1];
                    uVar25 = *puVar24;
                    uVar21 = uVar21 + 1;
                    fVar35 = fVar41 * (float)uVar25;
                    fVar36 = fVar42 * (float)((ulong)uVar25 >> 0x20);
                    fVar37 = fVar43 * (float)uVar33;
                    fVar31 = (float)((ulong)uVar33 >> 0x20);
                    fVar38 = fVar39 * fVar31;
                    auVar40._4_4_ = fVar36;
                    auVar40._0_4_ = fVar35;
                    auVar40._8_4_ = fVar37;
                    auVar40._12_4_ = fVar38;
                    auVar6._4_4_ = fVar36;
                    auVar6._0_4_ = fVar35;
                    auVar6._8_4_ = fVar37;
                    auVar6._12_4_ = fVar38;
                    auVar40 = NEON_ext(auVar40,auVar6,8,1);
                    fVar31 = fVar35 + fVar36 + auVar40._0_4_ + fVar31;
                    bVar1 = fVar31 <= 1e-05;
                  } while (fVar31 <= 1e-05 && uVar21 < uVar28);
                  uVar26 = (ulong)((int)uVar21 + 1);
                  uVar22 = uVar21;
                  if ((fVar31 <= 1e-05 && uVar26 <= uVar4) && (1e-05 < fVar31 || uVar4 != uVar26)) {
LAB_001b3ecc:
                    uVar21 = uVar22 & 0xffffffff;
                    lVar23 = (uVar22 << 0x20) + 0x200000000;
                    do {
                      puVar24 = (undefined8 *)(param_2 + 0x10 + uVar21 * 0x10);
                      uVar33 = puVar24[1];
                      uVar25 = *puVar24;
                      lVar27 = lVar23 >> 0x20;
                      fVar35 = fVar41 * (float)uVar25;
                      fVar36 = fVar42 * (float)((ulong)uVar25 >> 0x20);
                      fVar37 = fVar43 * (float)uVar33;
                      fVar31 = (float)((ulong)uVar33 >> 0x20);
                      fVar38 = fVar39 * fVar31;
                      auVar11._4_4_ = fVar36;
                      auVar11._0_4_ = fVar35;
                      auVar11._8_4_ = fVar37;
                      auVar11._12_4_ = fVar38;
                      auVar12._4_4_ = fVar36;
                      auVar12._0_4_ = fVar35;
                      auVar12._8_4_ = fVar37;
                      auVar12._12_4_ = fVar38;
                      auVar40 = NEON_ext(auVar11,auVar12,8,1);
                      fVar31 = fVar35 + fVar36 + auVar40._0_4_ + fVar31;
                      bVar1 = fVar31 <= 1e-05;
                      uVar21 = uVar21 + 1;
                      lVar23 = lVar23 + 0x100000000;
                    } while (fVar31 <= 1e-05 && lVar27 < (long)uVar4);
                  }
                }
                iVar16 = (int)uVar21 + 2;
                lVar23 = (long)iVar16;
                if (bVar1 && lVar23 < lVar29) {
                  do {
                    puVar24 = (undefined8 *)(param_2 + lVar23 * 0x10);
                    uVar33 = puVar24[1];
                    uVar25 = *puVar24;
                    lVar23 = lVar23 + 1;
                    fVar35 = fVar41 * (float)uVar25;
                    fVar36 = fVar42 * (float)((ulong)uVar25 >> 0x20);
                    fVar37 = fVar43 * (float)uVar33;
                    fVar31 = (float)((ulong)uVar33 >> 0x20);
                    fVar38 = fVar39 * fVar31;
                    auVar7._4_4_ = fVar36;
                    auVar7._0_4_ = fVar35;
                    auVar7._8_4_ = fVar37;
                    auVar7._12_4_ = fVar38;
                    auVar8._4_4_ = fVar36;
                    auVar8._0_4_ = fVar35;
                    auVar8._8_4_ = fVar37;
                    auVar8._12_4_ = fVar38;
                    auVar40 = NEON_ext(auVar7,auVar8,8,1);
                    fVar31 = fVar35 + fVar36 + auVar40._0_4_ + fVar31;
                    bVar1 = fVar31 <= 1e-05;
                  } while (fVar31 <= 1e-05 && lVar23 < lVar29);
                  iVar16 = (int)lVar23;
                }
                if (bVar1 && iVar16 + 1 < (int)param_3) {
                  lVar23 = (long)(iVar16 + 1);
                  do {
                    puVar24 = (undefined8 *)(param_2 + lVar23 * 0x10);
                    uVar33 = puVar24[1];
                    uVar25 = *puVar24;
                    lVar23 = lVar23 + 1;
                    fVar35 = fVar41 * (float)uVar25;
                    fVar36 = fVar42 * (float)((ulong)uVar25 >> 0x20);
                    fVar37 = fVar43 * (float)uVar33;
                    fVar31 = (float)((ulong)uVar33 >> 0x20);
                    fVar38 = fVar39 * fVar31;
                    auVar9._4_4_ = fVar36;
                    auVar9._0_4_ = fVar35;
                    auVar9._8_4_ = fVar37;
                    auVar9._12_4_ = fVar38;
                    auVar10._4_4_ = fVar36;
                    auVar10._0_4_ = fVar35;
                    auVar10._8_4_ = fVar37;
                    auVar10._12_4_ = fVar38;
                    auVar40 = NEON_ext(auVar9,auVar10,8,1);
                    fVar31 = fVar35 + fVar36 + auVar40._0_4_ + fVar31;
                    bVar1 = fVar31 <= 1e-05;
                  } while (fVar31 <= 1e-05 && lVar23 < lVar30);
                }
                if (bVar1) {
                  uVar3 = (int)local_70 + 1;
                  if ((int)(local_70._4_4_ & 0x3fffffff) <= (int)local_70) {
                    if (0x3ffffffe < (int)local_70) {
                      FUN_032bd0a8(uVar3);
                    }
                    uVar18 = (local_70._4_4_ & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar18) {
                      uVar18 = 0x3fffffff;
                    }
                    uVar5 = uVar3;
                    if ((int)uVar3 <= (int)uVar18) {
                      uVar5 = uVar18;
                    }
                    local_78 = FUN_032bd1d4(uVar19,uVar5,0x10,lVar14,uVar15 & 0xffffffff,
                                            (long)&local_70 + 4);
                  }
                  puVar24 = (undefined8 *)(local_78 + (long)(int)local_70 * 0x10);
                  puVar24[1] = CONCAT44(fVar39,fVar43);
                  *puVar24 = CONCAT44(fVar42,fVar41);
                  local_70 = CONCAT44(local_70._4_4_,uVar3);
                }
              }
              lVar29 = lVar29 + 1;
              if ((uint)lVar29 == param_3) break;
              puVar24 = (undefined8 *)(param_2 + uVar4 * 0x10);
              uStack_98 = puVar24[1];
              local_a0 = *puVar24;
            } while( true );
          }
          lVar20 = lVar20 + 1;
          uVar4 = uVar13;
        } while (uVar13 != param_3);
      }
    }
  }
  if ((int)local_70 < 4) {
    uVar17 = 0xffffffff;
    uVar3 = local_70._4_4_;
  }
  else {
    puVar24 = *(undefined8 **)(param_1 + 0x18);
    uVar25 = *param_4;
    *(undefined8 *)((long)puVar24 + 7) = *(undefined8 *)((long)param_4 + 7);
    *puVar24 = uVar25;
    uVar25 = param_4[2];
    puVar24[3] = param_4[3];
    puVar24[2] = uVar25;
    uVar25 = param_4[4];
    puVar24[5] = param_4[5];
    puVar24[4] = uVar25;
    uVar17 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),local_78,local_70 & 0xffffffff,0,0);
    uVar3 = local_70._4_4_;
  }
  if ((-1 < (long)local_70) && (local_70 = (ulong)uVar3 << 0x20, local_78 != 0)) {
    FUN_032cf244(uVar19,local_78,0x10,uVar3 & 0x3fffffff);
  }
  return uVar17;
}


