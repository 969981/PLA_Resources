/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b4100; name: FUN_001b4100
 */


undefined4
FUN_001b4100(undefined8 param_1,long param_2,uint param_3,undefined1 (*param_4) [16],
            undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [12];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  float fVar37;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  
  local_88 = 0;
  local_80 = 0x8000000000000000;
  uVar17 = *(undefined8 *)PTR_PTR_04372408;
  if (0 < (int)param_3) {
    uVar1 = param_3 * 3;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
    }
    local_88 = FUN_032bd1d4(uVar17,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),0x10,0,0,
                            (long)&local_80 + 4);
    fVar37 = *(float *)(PTR_DAT_04372370 + 0x260);
    uVar20 = (ulong)param_3;
    uVar19 = 1;
    uVar22 = 0;
    do {
      puVar4 = (undefined8 *)(param_2 + uVar22 * 0x10);
      uVar6 = puVar4[1];
      uVar25 = (undefined4)uVar6;
      fVar23 = (float)((ulong)uVar6 >> 0x20);
      uVar6 = *puVar4;
      uVar15 = (undefined4)uVar6;
      uVar24 = (undefined4)((ulong)uVar6 >> 0x20);
      fVar26 = -fVar23;
      uVar2 = uVar22 + 1;
      if ((long)uVar2 < (long)(int)param_3) {
        uVar21 = uVar19;
        do {
          pauVar5 = (undefined1 (*) [12])(param_2 + uVar21 * 0x10);
          fVar27 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
          auVar31._4_4_ = uVar24;
          auVar31._0_4_ = uVar15;
          auVar31._8_4_ = uVar25;
          auVar31._12_4_ = fVar23;
          auVar32._4_4_ = uVar24;
          auVar32._0_4_ = uVar15;
          auVar32._8_4_ = uVar25;
          auVar32._12_4_ = fVar23;
          auVar32 = NEON_ext(auVar31,auVar32,8,1);
          auVar31 = *param_4;
          auVar34 = NEON_ext(auVar31,auVar31,8,1);
          auVar36._12_4_ = fVar27;
          auVar36._0_12_ = *pauVar5;
          auVar8._12_4_ = fVar27;
          auVar8._0_12_ = *pauVar5;
          auVar36 = NEON_ext(auVar36,auVar8,8,1);
          local_a0 = CONCAT44(auVar36._0_4_,auVar32._0_4_);
          uStack_98 = auVar34._0_8_;
          uStack_b8 = auVar31._0_8_;
          fVar27 = -fVar27;
          local_c0 = CONCAT44((int)*(undefined8 *)*pauVar5,uVar15);
          uStack_a8 = CONCAT44(auVar34._4_4_,auVar31._4_4_);
          local_b0 = CONCAT44((int)((ulong)*(undefined8 *)*pauVar5 >> 0x20),uVar24);
          fVar23 = -auVar31._12_4_;
          iVar14 = FUN_032c9090(&local_c0,&local_c0);
          uVar13 = local_80;
          lVar12 = local_88;
          if (-1 < iVar14) {
            uVar18 = 0;
            bVar11 = true;
            fVar33 = (float)local_c0 * fVar26 + (float)local_b0 * fVar27 + (float)local_a0 * fVar23;
            fVar35 = (float)((ulong)local_c0 >> 0x20) * fVar26 +
                     (float)((ulong)local_b0 >> 0x20) * fVar27 +
                     (float)((ulong)local_a0 >> 0x20) * fVar23;
            auVar34._0_8_ = CONCAT44(fVar35,fVar33);
            auVar34._8_4_ =
                 (float)uStack_b8 * fVar26 + (float)uStack_a8 * fVar27 + (float)uStack_98 * fVar23;
            auVar34._12_4_ =
                 (float)((ulong)uStack_b8 >> 0x20) * fVar26 +
                 (float)((ulong)uStack_a8 >> 0x20) * fVar27 +
                 (float)((ulong)uStack_98 >> 0x20) * fVar23;
            if (uVar22 != 0) goto LAB_001b429c;
LAB_001b4288:
            uVar18 = uVar18 + 1;
            if (uVar20 != uVar18) {
              while (uVar22 != uVar18) {
LAB_001b429c:
                if (uVar21 == uVar18) break;
                puVar4 = (undefined8 *)(param_2 + uVar18 * 0x10);
                uVar7 = puVar4[1];
                fVar23 = (float)((ulong)uVar7 >> 0x20);
                uVar6 = *puVar4;
                fVar27 = fVar33 * (float)uVar6;
                fVar28 = fVar35 * (float)((ulong)uVar6 >> 0x20);
                fVar29 = auVar34._8_4_ * (float)uVar7;
                fVar30 = auVar34._12_4_ * fVar23;
                auVar9._4_4_ = fVar28;
                auVar9._0_4_ = fVar27;
                auVar9._8_4_ = fVar29;
                auVar9._12_4_ = fVar30;
                auVar10._4_4_ = fVar28;
                auVar10._0_4_ = fVar27;
                auVar10._8_4_ = fVar29;
                auVar10._12_4_ = fVar30;
                auVar31 = NEON_ext(auVar9,auVar10,8,1);
                fVar23 = fVar27 + fVar28 + auVar31._0_4_ + fVar23;
                if (fVar37 < fVar23) goto LAB_001b4350;
                bVar11 = (bool)(bVar11 & fVar23 <= fVar37);
                uVar18 = uVar18 + 1;
                if (uVar20 == uVar18) goto LAB_001b42d8;
              }
              goto LAB_001b4288;
            }
LAB_001b42d8:
            if (bVar11) {
              uVar1 = (int)local_80 + 1;
              if ((int)(local_80._4_4_ & 0x3fffffff) <= (int)local_80) {
                if (0x3ffffffe < (int)local_80) {
                  FUN_032bd0a8(uVar1);
                }
                uVar16 = (local_80._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar16) {
                  uVar16 = 0x3fffffff;
                }
                uVar3 = uVar1;
                if ((int)uVar1 <= (int)uVar16) {
                  uVar3 = uVar16;
                }
                local_88 = FUN_032bd1d4(uVar17,uVar3,0x10,lVar12,uVar13 & 0xffffffff,
                                        (long)&local_80 + 4);
                auVar34._8_8_ = auVar34._8_8_;
              }
              puVar4 = (undefined8 *)(local_88 + (long)(int)local_80 * 0x10);
              puVar4[1] = auVar34._8_8_;
              *puVar4 = auVar34._0_8_;
              local_80 = CONCAT44(local_80._4_4_,uVar1);
            }
          }
LAB_001b4350:
          uVar21 = uVar21 + 1;
          if (uVar21 == uVar20) break;
          puVar4 = (undefined8 *)(param_2 + uVar22 * 0x10);
          uVar6 = puVar4[1];
          uVar25 = (undefined4)uVar6;
          fVar23 = (float)((ulong)uVar6 >> 0x20);
          uVar6 = *puVar4;
          uVar15 = (undefined4)uVar6;
          uVar24 = (undefined4)((ulong)uVar6 >> 0x20);
        } while( true );
      }
      uVar19 = uVar19 + 1;
      uVar22 = uVar2;
    } while (uVar2 != uVar20);
  }
  if ((int)local_80 < 3) {
    uVar15 = 0xffffffff;
    uVar1 = local_80._4_4_;
  }
  else {
    local_d0 = local_88;
    local_c8 = (int)local_80;
    uStack_c4 = 0x10;
    uVar15 = FUN_001b2ee0(param_1,&local_d0,param_4,param_5);
    uVar1 = local_80._4_4_;
  }
  if ((-1 < (long)local_80) && (local_80 = (ulong)uVar1 << 0x20, local_88 != 0)) {
    FUN_032cf244(uVar17,local_88,0x10,uVar1 & 0x3fffffff);
  }
  return uVar15;
}


