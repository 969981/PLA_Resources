/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150acc; name: FUN_03150acc
 */


void FUN_03150acc(float param_1,long param_2,long param_3,long *param_4,long param_5,long param_6,
                 long param_7)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  
  if (0 < *(int *)(*(long *)(param_2 + 0x38) + 0xb8)) {
    param_1 = param_1 * 10.0;
    auVar10._0_8_ = CONCAT44(-param_1,-param_1);
    auVar10._8_4_ = -param_1;
    auVar10._12_4_ = 0x80000000;
    lVar7 = 0;
    puVar8 = (undefined8 *)(param_5 + 0x40);
    plVar9 = (long *)(param_3 + 0x30);
    do {
      *(undefined8 *)(param_5 + 0x60 + lVar7 * 8) = 0xffffffffffffffff;
      if (param_4[lVar7] != -1) {
        plVar6 = *(long **)(param_2 + 0x28);
        lVar5 = (**(code **)(*plVar6 + 0x80))(plVar6);
        lVar5 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined4 *)(lVar5 + 0x80));
        if ((*(int *)(lVar5 + 0x4c) != 0) && ((lVar7 == 0 || (*param_4 != param_4[1])))) {
          lVar5 = *plVar9;
          pauVar1 = (undefined1 (*) [12])(lVar5 + 0x60);
          uVar18 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x68) >> 0x20);
          fVar15 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          auVar11 = *(undefined1 (*) [16])(lVar5 + 0x40);
          auVar12 = *(undefined1 (*) [16])(lVar5 + 0x50);
          auVar21 = NEON_ext(auVar12,auVar12,8,1);
          auVar20 = NEON_ext(auVar11,auVar11,8,1);
          fVar23 = *(float *)(lVar5 + 0x20);
          fVar25 = *(float *)(lVar5 + 0x24);
          fVar26 = *(float *)(lVar5 + 0x28);
          auVar22._12_4_ = uVar18;
          auVar22._0_12_ = *pauVar1;
          auVar13._12_4_ = uVar18;
          auVar13._0_12_ = *pauVar1;
          auVar22 = NEON_ext(auVar22,auVar13,8,1);
          puVar2 = (undefined8 *)(param_7 + lVar7 * 0x10);
          uVar24 = puVar2[1];
          fVar17 = (float)uVar24;
          fVar19 = (float)((ulong)uVar24 >> 0x20);
          uVar24 = *puVar2;
          fVar14 = (float)uVar24;
          fVar16 = (float)((ulong)uVar24 >> 0x20);
          puVar2 = (undefined8 *)(param_6 + lVar7 * 0x10);
          uVar27 = puVar2[1];
          uVar24 = *puVar2;
          auVar3._8_8_ = auVar10._8_8_;
          auVar3._0_8_ = auVar10._0_8_;
          auVar4._4_4_ = param_1;
          auVar4._0_4_ = param_1;
          auVar4._8_4_ = param_1;
          auVar4._12_4_ = 0;
          auVar11._0_4_ =
               (auVar20._0_4_ * fVar26 + auVar11._0_4_ * fVar23 + auVar11._4_4_ * fVar25) - fVar14;
          auVar11._4_4_ =
               (auVar21._0_4_ * fVar26 + auVar12._0_4_ * fVar23 + auVar12._4_4_ * fVar25) - fVar16;
          auVar11._8_4_ =
               (auVar22._0_4_ * fVar26 + (float)*(undefined8 *)*pauVar1 * fVar23 + fVar15 * fVar25)
               - fVar17;
          auVar11._12_4_ =
               (auVar22._4_4_ * fVar26 + fVar15 * fVar23 + auVar22._4_4_ * fVar25) - fVar19;
          fVar23 = (float)uVar24;
          auVar20._0_4_ = *(float *)(lVar5 + 0x10) - fVar23;
          fVar25 = (float)((ulong)uVar24 >> 0x20);
          auVar20._4_4_ = *(float *)(lVar5 + 0x14) - fVar25;
          fVar26 = (float)uVar27;
          auVar20._8_4_ = *(float *)(lVar5 + 0x18) - fVar26;
          fVar15 = (float)((ulong)uVar27 >> 0x20);
          auVar20._12_4_ = *(float *)(lVar5 + 0x1c) - fVar15;
          auVar22 = NEON_fmin(auVar11,auVar4,4);
          auVar13 = NEON_fmin(auVar20,auVar4,4);
          auVar22 = NEON_fmax(auVar22,auVar3,4);
          auVar13 = NEON_fmax(auVar13,auVar3,4);
          auVar12._0_8_ = CONCAT44(fVar16 + auVar22._4_4_,fVar14 + auVar22._0_4_);
          auVar12._8_4_ = fVar17 + auVar22._8_4_;
          auVar12._12_4_ = fVar19 + auVar22._12_4_;
          *(float *)(puVar8 + -3) = fVar26 + auVar13._8_4_;
          *(float *)((long)puVar8 + -0x14) = fVar15 + auVar13._12_4_;
          *(float *)(puVar8 + -4) = fVar23 + auVar13._0_4_;
          *(float *)((long)puVar8 + -0x1c) = fVar25 + auVar13._4_4_;
          puVar8[1] = auVar12._8_8_;
          *puVar8 = auVar12._0_8_;
          *(long *)(param_5 + 0x60 + lVar7 * 8) = param_4[lVar7];
        }
      }
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 2;
      plVar9 = plVar9 + 0xc;
    } while (lVar7 < *(int *)(*(long *)(param_2 + 0x38) + 0xb8));
  }
  return;
}


