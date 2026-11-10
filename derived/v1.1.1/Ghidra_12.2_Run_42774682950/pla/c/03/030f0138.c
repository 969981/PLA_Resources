/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f0138; name: FUN_030f0138
 */


void FUN_030f0138(long param_1,long param_2,float *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  uint *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  long local_a0;
  ulong local_88;
  uint local_7c [3];
  
  local_c0 = (long *)CONCAT44(local_c0._4_4_,(float)local_c0);
  if (param_4 != (long *)0x0) {
    uVar24 = *(uint *)((long)param_4 + 0xc);
    uVar25 = uVar24 & 0x3fffffff;
    uVar20 = *(uint *)(param_1 + 0x20);
    local_c0 = (long *)CONCAT44(local_c0._4_4_,(float)local_c0);
    if ((int)uVar25 < (int)uVar20) {
      puVar18 = (undefined8 *)*param_4;
      uVar22 = *(uint *)(param_4 + 1);
      uVar23 = (ulong)uVar22;
      if (0x3fffffff < (int)uVar20) {
        FUN_032bd0a8(uVar20);
        uVar24 = *(uint *)((long)param_4 + 0xc);
        uVar25 = uVar24 & 0x3fffffff;
      }
      puVar8 = PTR_PTR_0434a080;
      uVar12 = (uVar24 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      if ((int)uVar20 <= (int)uVar12) {
        uVar20 = uVar12;
      }
      local_120 = (ulong)uVar20 * 0x30;
      local_f0 = CONCAT44(local_f0._4_4_,uVar20);
      if (((int)uVar20 < (int)uVar25) || (0x3fffffff < (int)uVar20)) {
        local_d0 = 1.4013e-45;
        fStack_cc = 0.0;
        local_c0 = &local_f0;
        fStack_c8 = 1.712719e-36;
        fStack_c4 = 0.0;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_d0);
        uVar24 = *(uint *)((long)param_4 + 0xc);
        uVar25 = uVar24 & 0x3fffffff;
      }
      puVar9 = (undefined8 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_120,&local_120);
      if (0 < (int)uVar22) {
        puVar15 = puVar9;
        puVar16 = puVar18;
        do {
          uVar17 = puVar16[5];
          uVar23 = uVar23 - 1;
          puVar15[3] = puVar16[3];
          puVar15[5] = uVar17;
          puVar15[1] = puVar16[1];
          *puVar15 = *puVar16;
          uVar17 = puVar16[2];
          puVar15[4] = puVar16[4];
          puVar15[2] = uVar17;
          puVar16 = puVar16 + 6;
          puVar15 = puVar15 + 6;
        } while (uVar23 != 0);
      }
      if (-1 < (int)uVar24) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar18,(ulong)uVar25 * 0x30);
      }
      if (local_120 < 0xbffffffd0) {
        uVar13 = (undefined4)(local_120 / 0x30);
      }
      else {
        uVar13 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_4 + 0xc) = uVar13;
      *param_4 = (long)puVar9;
    }
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar19 = 0;
    do {
      puVar18 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar19 * 0x40);
      if (puVar18[5] != -1) {
        lVar10 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)(param_1 + 0x48) + 0xf0))
                           (*(long **)(param_1 + 0x48),*(undefined8 *)(lVar10 + 0xb0),0xf001,8);
        if (puVar9 == (undefined8 *)0x0) {
          if ((*(byte *)(lVar10 + 0x54) & 5) == 0) {
            lVar10 = (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                               (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar10 + 0x80));
            lVar14 = puVar18[5];
            fStack_c8 = (float)puVar18[1];
            fStack_c4 = (float)((ulong)puVar18[1] >> 0x20);
            local_d0 = (float)*puVar18;
            fStack_cc = (float)((ulong)*puVar18 >> 0x20);
            uVar17 = *(undefined8 *)*(undefined1 (*) [16])(puVar18 + 2);
            fStack_b8 = (float)puVar18[3];
            fStack_b4 = (float)((ulong)puVar18[3] >> 0x20);
            local_c0._0_4_ = (float)uVar17;
            local_c0._4_4_ = (float)((ulong)uVar17 >> 0x20);
            local_ac = *(undefined4 *)(param_2 + 8);
            local_a0 = lVar14;
            FUN_0301658c(lVar10,puVar18,&local_120);
            fVar26 = (float)local_120 - *(float *)(param_1 + 0xc0);
            fVar27 = (float)(local_120 >> 0x20) - *(float *)(param_1 + 0xc4);
            fVar28 = SUB84(uStack_118,0) - *(float *)(param_1 + 200);
            fVar29 = (float)((ulong)uStack_118 >> 0x20) - *(float *)(param_1 + 0xcc);
            uStack_118 = (undefined *)CONCAT44(fVar29,fVar28);
            local_120 = CONCAT44(fVar27,fVar26);
            fVar26 = fVar26 * (float)local_c0;
            fVar27 = fVar27 * local_c0._4_4_;
            fVar28 = fVar28 * fStack_b8;
            fVar29 = fVar29 * fStack_b4;
            auVar30._4_4_ = fVar27;
            auVar30._0_4_ = fVar26;
            auVar30._8_4_ = fVar28;
            auVar30._12_4_ = fVar29;
            auVar3._4_4_ = fVar27;
            auVar3._0_4_ = fVar26;
            auVar3._8_4_ = fVar28;
            auVar3._12_4_ = fVar29;
            auVar30 = NEON_ext(auVar30,auVar3,8,1);
            local_a8 = fVar26 + fVar27 + auVar30._0_4_;
            fVar26 = local_a8 * -0.9;
            if (*(float *)(puVar18 + 4) < 0.0) {
              fVar26 = fVar26 + *(float *)(puVar18 + 4) * *(float *)(param_2 + 0xc) * 0.4;
            }
            local_e0 = CONCAT44(fStack_cc,local_d0);
            auVar7._8_4_ = fStack_c8;
            auVar7._0_8_ = local_e0;
            auVar7._12_4_ = fStack_c4;
            local_f0 = 0;
            lStack_e8 = 0;
            lStack_d8 = auVar7._8_8_;
            if (fVar26 < 0.0) {
              FUN_03016274(lVar10,&local_120);
              auVar6._4_4_ = local_c0._4_4_;
              auVar6._0_4_ = (float)local_c0;
              auVar6._8_4_ = fStack_b8;
              auVar5._4_4_ = local_c0._4_4_;
              auVar5._0_4_ = (float)local_c0;
              auVar5._8_4_ = fStack_b8;
              auVar5._12_4_ = fStack_b4;
              auVar6._12_4_ = fStack_b4;
              auVar30 = NEON_ext(auVar5,auVar6,8,1);
              uVar17 = NEON_ext(CONCAT44(local_c0._4_4_,(float)local_c0),auVar30._0_8_,4,1);
              auVar31._0_4_ = local_d0 - (float)*(double *)(lVar10 + 0x10);
              auVar31._4_4_ = fStack_cc - (float)*(double *)(lVar10 + 0x18);
              auVar31._8_4_ = fStack_c8 - (float)*(double *)(lVar10 + 0x20);
              auVar31._12_4_ = fStack_c4 - 0.0;
              auVar30 = NEON_ext(auVar31,auVar31,4,1);
              auVar32._0_4_ = (float)uVar17 * auVar31._0_4_ - (float)local_c0 * auVar30._0_4_;
              auVar32._4_4_ =
                   (float)((ulong)uVar17 >> 0x20) * auVar31._4_4_ - local_c0._4_4_ * auVar30._4_4_;
              auVar32._8_4_ = (float)local_c0 * auVar31._8_4_ - fStack_b8 * auVar31._0_4_;
              auVar32._12_4_ = local_c0._4_4_ * auVar31._12_4_ - fStack_b4 * auVar31._4_4_;
              auVar30 = NEON_ext(auVar32,auVar32,4,1);
              auVar33._0_4_ =
                   auVar30._0_4_ *
                   ((float)local_100 * auVar32._0_4_ +
                   (float)local_120 * auVar32._4_4_ + SUB84(local_110,0) * auVar32._8_4_);
              auVar33._4_4_ =
                   auVar30._4_4_ *
                   ((float)((ulong)local_100 >> 0x20) * auVar32._0_4_ +
                   local_120._4_4_ * auVar32._4_4_ +
                   (float)((ulong)local_110 >> 0x20) * auVar32._8_4_);
              auVar33._8_4_ =
                   auVar32._0_4_ *
                   ((float)uStack_f8 * auVar32._0_4_ +
                   (float)uStack_118 * auVar32._4_4_ + (float)uStack_108 * auVar32._8_4_);
              auVar33._12_4_ =
                   auVar32._4_4_ *
                   ((float)((ulong)uStack_f8 >> 0x20) * auVar32._0_4_ +
                   uStack_118._4_4_ * auVar32._4_4_ +
                   (float)((ulong)uStack_108 >> 0x20) * auVar32._8_4_);
              auVar30 = NEON_ext(auVar33,auVar33,8,1);
              local_a4 = (float)((int)(short)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x30) << 0x10
                                ) + auVar33._0_4_ + auVar33._4_4_ + auVar30._0_4_;
              fVar27 = *(float *)(param_2 + 8);
              fVar28 = -(*(float *)(param_1 + 0x154) * fVar27);
              local_b0 = fVar26 / local_a4;
              if (fVar26 / local_a4 < fVar28) {
                local_b0 = fVar28;
              }
              auVar35._0_4_ = (float)local_c0 * local_b0;
              auVar35._4_4_ = local_c0._4_4_ * local_b0;
              auVar35._8_4_ = fStack_b8 * local_b0;
              auVar35._12_4_ = fStack_b4 * local_b0;
            }
            else {
              local_b0 = 0.0;
              local_a4 = (float)((int)(short)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x30) << 0x10
                                );
              fVar27 = *(float *)(param_2 + 8);
              auVar35 = ZEXT816(0);
            }
            auVar30 = *(undefined1 (*) [16])(puVar18 + 2);
            fVar26 = auVar30._0_4_ * *param_3 * fVar27;
            fVar28 = auVar30._4_4_ * param_3[1] * fVar27;
            fVar29 = auVar30._8_4_ * param_3[2] * fVar27;
            fVar27 = fVar26 + fVar28 + fVar29;
            fVar29 = fVar26 + fVar28 + fVar29;
            uVar23 = CONCAT44(fVar29,fVar27);
            uVar23 = uVar23 ^ (uVar23 ^ CONCAT44(fVar29 - local_a8,fVar27 - local_a8)) &
                              CONCAT44(-(uint)(local_a8 < 0.0),-(uint)(local_a8 < 0.0));
            fVar26 = (float)uVar23;
            fVar27 = (float)(uVar23 >> 0x20);
            auVar34._0_8_ =
                 CONCAT44(-(uint)(fVar27 < -1.1920929e-07),-(uint)(fVar26 < -1.1920929e-07));
            fVar26 = fVar26 * *(float *)(param_1 + 0x158);
            fVar27 = fVar27 * *(float *)(param_1 + 0x158);
            auVar34._8_8_ = auVar34._0_8_;
            auVar4._4_4_ = auVar35._4_4_ + auVar30._4_4_ * fVar27;
            auVar4._0_4_ = auVar35._0_4_ + auVar30._0_4_ * fVar26;
            auVar4._8_4_ = auVar35._8_4_ + auVar30._8_4_ * fVar26;
            auVar4._12_4_ = auVar35._12_4_ + auVar30._12_4_ * fVar27;
            auVar35 = auVar35 ^ (auVar35 ^ auVar4) & auVar34;
            lStack_e8 = auVar35._8_8_;
            local_f0 = auVar35._0_8_;
            lVar10 = (long)*(int *)(param_1 + 0x100);
            if (0 < *(int *)(param_1 + 0x100)) {
              do {
                lVar21 = lVar10 + -1;
                plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + lVar10 * 8 + -8);
                (**(code **)(*plVar11 + 0x40))(plVar11,param_1,&local_d0,&local_f0);
                lVar10 = lVar21;
              } while (0 < lVar21);
            }
            if (param_4 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x50) + 0xd0))
                        (*(long **)(param_1 + 0x50),lVar14,&local_f0,&local_e0,0);
            }
            else {
              uVar20 = *(uint *)(param_4 + 1);
              uVar23 = (ulong)uVar20;
              uVar22 = *(uint *)((long)param_4 + 0xc);
              uVar24 = uVar22 & 0x3fffffff;
              puVar18 = (undefined8 *)*param_4;
              uVar25 = uVar20 + 1;
              if ((int)uVar24 <= (int)uVar20) {
                if (0x3ffffffe < (int)uVar20) {
                  FUN_032bd0a8(uVar25);
                  uVar22 = *(uint *)((long)param_4 + 0xc);
                  uVar24 = uVar22 & 0x3fffffff;
                }
                puVar8 = PTR_PTR_0434a080;
                uVar12 = (uVar22 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar12) {
                  uVar12 = 0x3fffffff;
                }
                local_7c[0] = uVar25;
                if ((int)uVar25 <= (int)uVar12) {
                  local_7c[0] = uVar12;
                }
                local_88 = (ulong)local_7c[0] * 0x30;
                if (((int)local_7c[0] < (int)uVar24) || (0x3fffffff < (int)local_7c[0])) {
                  local_120 = 1;
                  local_110 = local_7c;
                  uStack_118 = &DAT_0411b3b8;
                  FUN_03320b50(0x65816502,
                               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                               ,0x5a,"Invalid requestedCapacity {}",&local_120);
                  uVar22 = *(uint *)((long)param_4 + 0xc);
                  uVar24 = uVar22 & 0x3fffffff;
                }
                puVar9 = (undefined8 *)
                         (**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_88,&local_88);
                if (0 < (int)uVar20) {
                  puVar15 = puVar9;
                  puVar16 = puVar18;
                  do {
                    uVar17 = puVar16[5];
                    uVar23 = uVar23 - 1;
                    puVar15[3] = puVar16[3];
                    puVar15[5] = uVar17;
                    puVar15[1] = puVar16[1];
                    *puVar15 = *puVar16;
                    uVar17 = puVar16[2];
                    puVar15[4] = puVar16[4];
                    puVar15[2] = uVar17;
                    puVar16 = puVar16 + 6;
                    puVar15 = puVar15 + 6;
                  } while (uVar23 != 0);
                }
                if (-1 < (int)uVar22) {
                  (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar18,(ulong)uVar24 * 0x30);
                }
                if (local_88 < 0xbffffffd0) {
                  uVar13 = (undefined4)(local_88 / 0x30);
                }
                else {
                  uVar13 = 0x3fffffff;
                }
                *(undefined4 *)((long)param_4 + 0xc) = uVar13;
                uVar20 = *(uint *)(param_4 + 1);
                *param_4 = (long)puVar9;
                puVar18 = puVar9;
              }
              plVar11 = puVar18 + (long)(int)uVar20 * 6;
              *(uint *)(param_4 + 1) = uVar25;
              *plVar11 = lVar14;
              plVar11[3] = lStack_e8;
              plVar11[2] = local_f0;
              plVar11[5] = lStack_d8;
              plVar11[4] = local_e0;
            }
          }
        }
        else {
          uVar17 = *puVar9;
          fStack_c8 = (float)puVar18[1];
          fStack_c4 = (float)((ulong)puVar18[1] >> 0x20);
          local_d0 = (float)*puVar18;
          fStack_cc = (float)((ulong)*puVar18 >> 0x20);
          local_c0 = (long *)puVar18[2];
          fStack_b8 = (float)puVar18[3];
          fStack_b4 = (float)((ulong)puVar18[3] >> 0x20);
          iVar2 = *(int *)(param_1 + 0x100);
          if (0 < iVar2) {
            lVar10 = (long)iVar2 + -1;
            plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + lVar10 * 8);
            (**(code **)(*plVar11 + 0x38))(plVar11,param_1,uVar17,&local_d0);
            if (0 < lVar10) {
              lVar10 = (long)iVar2 + -2;
              do {
                plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + lVar10 * 8);
                (**(code **)(*plVar11 + 0x38))(plVar11,param_1,uVar17,&local_d0);
                bVar1 = 0 < lVar10;
                lVar10 = lVar10 + -1;
              } while (bVar1);
            }
          }
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_1 + 0x20));
  }
  return;
}


