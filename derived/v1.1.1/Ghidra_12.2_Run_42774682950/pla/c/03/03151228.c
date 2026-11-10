/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03151228; name: FUN_03151228
 */


void FUN_03151228(float param_1,long param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  undefined1 (*pauVar13) [12];
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  
  uVar28 = param_3[1];
  fVar9 = (float)*param_3 * param_1;
  fVar22 = (float)((ulong)*param_3 >> 0x20) * param_1;
  plVar1 = *(long **)(param_2 + 0x28);
  lVar12 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_2 + 0x20));
  pauVar13 = (undefined1 (*) [12])
             (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined4 *)(lVar12 + 0x80));
  fVar20 = (float)((int)(short)((ulong)*(undefined8 *)(pauVar13[5] + 4) >> 0x30) << 0x10);
  fVar22 = (float)((ulong)*(undefined8 *)(param_4 + 0xe0) >> 0x20) +
           (float)(CONCAT26((short)((uint)fVar22 >> 0x10),CONCAT24(SUB42(fVar22,0),fVar9)) >> 0x20)
           * fVar20;
  *(ulong *)(param_4 + 0xe8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xe8) >> 0x20) +
                (float)((ulong)uVar28 >> 0x20) * param_1 * fVar20,
                (float)*(undefined8 *)(param_4 + 0xe8) + (float)uVar28 * param_1 * fVar20);
  *(ulong *)(param_4 + 0xe0) =
       CONCAT26((short)((uint)fVar22 >> 0x10),
                CONCAT24(SUB42(fVar22,0),(float)*(undefined8 *)(param_4 + 0xe0) + fVar9 * fVar20));
  fVar9 = (float)param_3[2] * param_1;
  fVar20 = (float)((ulong)param_3[2] >> 0x20) * param_1;
  uVar14 = SUB42(fVar20,0);
  uVar16 = (undefined2)((uint)fVar20 >> 0x10);
  fVar18 = (float)param_3[3] * param_1;
  param_1 = (float)((ulong)param_3[3] >> 0x20) * param_1;
  fVar26 = (float)*(undefined8 *)(*pauVar13 + 8);
  fVar27 = (float)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
  uVar28 = *(undefined8 *)*pauVar13;
  fVar24 = (float)uVar28;
  fVar25 = (float)((ulong)uVar28 >> 0x20);
  auVar10._12_4_ = fVar27;
  auVar10._0_12_ = *pauVar13;
  auVar11._12_4_ = fVar27;
  auVar11._0_12_ = *pauVar13;
  auVar29 = NEON_ext(auVar10,auVar11,8,1);
  fVar31 = auVar29._4_4_ * auVar29._4_4_;
  fVar33 = fVar24 * fVar9 + fVar25 * fVar20 + fVar26 * fVar18;
  fVar34 = fVar24 * fVar9 + fVar25 * fVar20 + fVar26 * fVar18;
  fVar30 = fVar31 + -0.5;
  fVar31 = fVar31 + -0.5;
  uVar28 = NEON_ext(uVar28,auVar29._0_8_,4,1);
  auVar29._4_2_ = uVar14;
  auVar29._0_4_ = fVar9;
  auVar29._6_2_ = uVar16;
  auVar29._8_4_ = fVar18;
  auVar29._12_4_ = param_1;
  auVar2._4_2_ = uVar14;
  auVar2._0_4_ = fVar9;
  auVar2._6_2_ = uVar16;
  auVar2._8_4_ = fVar18;
  auVar2._12_4_ = param_1;
  auVar29 = NEON_ext(auVar29,auVar2,4,1);
  fVar23 = (float)((ulong)uVar28 >> 0x20);
  fVar22 = fVar9 * (float)uVar28 - fVar24 * auVar29._0_4_;
  fVar19 = fVar20 * fVar23 - fVar25 * auVar29._4_4_;
  uVar15 = SUB42(fVar19,0);
  uVar17 = (undefined2)((uint)fVar19 >> 0x10);
  fVar19 = fVar18 * fVar24 - fVar26 * fVar9;
  fVar21 = param_1 * fVar25 - fVar27 * (float)(CONCAT26(uVar16,CONCAT24(uVar14,fVar9)) >> 0x20);
  auVar3._4_2_ = uVar15;
  auVar3._0_4_ = fVar22;
  auVar3._6_2_ = uVar17;
  auVar3._8_4_ = fVar19;
  auVar3._12_4_ = fVar21;
  auVar4._4_2_ = uVar15;
  auVar4._0_4_ = fVar22;
  auVar4._6_2_ = uVar17;
  auVar4._8_4_ = fVar19;
  auVar4._12_4_ = fVar21;
  auVar29 = NEON_ext(auVar3,auVar4,4,1);
  fVar9 = fVar9 * fVar30 + fVar24 * fVar33 + auVar29._0_4_ * fVar27;
  fVar20 = fVar20 * fVar31 + fVar25 * fVar34 + auVar29._4_4_ * fVar27;
  fVar19 = fVar18 * fVar30 + fVar26 * fVar33 + fVar22 * fVar27;
  fVar22 = param_1 * fVar31 + fVar27 * fVar34 +
           (float)(CONCAT26(uVar17,CONCAT24(uVar15,fVar22)) >> 0x20) * fVar27;
  uVar32 = *(undefined8 *)(pauVar13[5] + 4);
  fVar9 = (fVar9 + fVar9) * (float)((int)(short)uVar32 << 0x10);
  fVar20 = (fVar20 + fVar20) * (float)((int)(short)((ulong)uVar32 >> 0x10) << 0x10);
  uVar14 = SUB42(fVar20,0);
  uVar16 = (undefined2)((uint)fVar20 >> 0x10);
  fVar18 = (fVar19 + fVar19) * (float)((int)(short)((ulong)uVar32 >> 0x20) << 0x10);
  fVar21 = (fVar22 + fVar22) * (float)((int)(short)((ulong)uVar32 >> 0x30) << 0x10);
  fVar33 = fVar24 * fVar9 + fVar25 * fVar20 + fVar26 * fVar18;
  fVar34 = fVar24 * fVar9 + fVar25 * fVar20 + fVar26 * fVar18;
  auVar5._4_2_ = uVar14;
  auVar5._0_4_ = fVar9;
  auVar5._6_2_ = uVar16;
  auVar5._8_4_ = fVar18;
  auVar5._12_4_ = fVar21;
  auVar6._4_2_ = uVar14;
  auVar6._0_4_ = fVar9;
  auVar6._6_2_ = uVar16;
  auVar6._8_4_ = fVar18;
  auVar6._12_4_ = fVar21;
  auVar29 = NEON_ext(auVar5,auVar6,4,1);
  fVar22 = fVar24 * auVar29._0_4_ - (float)uVar28 * fVar9;
  fVar19 = fVar25 * auVar29._4_4_ - fVar23 * fVar20;
  uVar15 = SUB42(fVar19,0);
  uVar17 = (undefined2)((uint)fVar19 >> 0x10);
  fVar19 = fVar26 * fVar9 - fVar24 * fVar18;
  fVar23 = fVar27 * (float)(CONCAT26(uVar16,CONCAT24(uVar14,fVar9)) >> 0x20) - fVar25 * fVar21;
  auVar7._4_2_ = uVar15;
  auVar7._0_4_ = fVar22;
  auVar7._6_2_ = uVar17;
  auVar7._8_4_ = fVar19;
  auVar7._12_4_ = fVar23;
  auVar8._4_2_ = uVar15;
  auVar8._0_4_ = fVar22;
  auVar8._6_2_ = uVar17;
  auVar8._8_4_ = fVar19;
  auVar8._12_4_ = fVar23;
  auVar29 = NEON_ext(auVar7,auVar8,4,1);
  fVar9 = fVar30 * fVar9 + fVar24 * fVar33 + auVar29._0_4_ * fVar27;
  fVar20 = fVar31 * fVar20 + fVar25 * fVar34 + auVar29._4_4_ * fVar27;
  fVar19 = fVar30 * fVar18 + fVar26 * fVar33 + fVar22 * fVar27;
  fVar18 = fVar31 * fVar21 + fVar27 * fVar34 +
           (float)(CONCAT26(uVar17,CONCAT24(uVar15,fVar22)) >> 0x20) * fVar27;
  fVar22 = (float)((ulong)*(undefined8 *)(param_4 + 0xf0) >> 0x20) + fVar20 + fVar20;
  *(ulong *)(param_4 + 0xf8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xf8) >> 0x20) + fVar18 + fVar18,
                (float)*(undefined8 *)(param_4 + 0xf8) + fVar19 + fVar19);
  *(ulong *)(param_4 + 0xf0) =
       CONCAT26((short)((uint)fVar22 >> 0x10),
                CONCAT24(SUB42(fVar22,0),(float)*(undefined8 *)(param_4 + 0xf0) + fVar9 + fVar9));
  return;
}


