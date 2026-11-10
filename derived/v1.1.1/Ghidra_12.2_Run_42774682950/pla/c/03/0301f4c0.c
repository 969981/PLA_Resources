/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f4c0; name: FUN_0301f4c0
 */


void FUN_0301f4c0(undefined1 (*param_1) [12],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  uVar25 = *(undefined8 *)param_1[2];
  uVar13 = (undefined4)((ulong)uVar25 >> 0x20);
  uVar24 = *(undefined8 *)*pauVar1;
  fVar12 = (float)uVar24;
  fVar11 = (float)((ulong)uVar24 >> 0x20);
  auVar22._12_4_ = uVar13;
  auVar22._0_12_ = *pauVar1;
  auVar26._12_4_ = uVar13;
  auVar26._0_12_ = *pauVar1;
  auVar26 = NEON_ext(auVar22,auVar26,8,1);
  puVar8 = (undefined8 *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x74);
  puVar8[1] = uVar25;
  *puVar8 = uVar24;
  fVar16 = (float)*(undefined8 *)(*param_1 + 8);
  fVar20 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar21 = *(undefined8 *)*param_1;
  fVar10 = (float)uVar21;
  fVar15 = (float)((ulong)uVar21 >> 0x20);
  auVar4._12_4_ = fVar20;
  auVar4._0_12_ = *param_1;
  auVar5._12_4_ = fVar20;
  auVar5._0_12_ = *param_1;
  auVar22 = NEON_ext(auVar4,auVar5,8,1);
  uVar21 = NEON_ext(uVar21,auVar22._0_8_,4,1);
  uVar24 = NEON_ext(uVar24,auVar26._0_8_,4,1);
  fVar17 = fVar10 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar18 = fVar15 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar19 = fVar16 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar20 = fVar20 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  fVar30 = (float)((ulong)uVar24 >> 0x20);
  fVar14 = fVar10 * (float)uVar24 - fVar12 * (float)uVar21;
  fVar15 = fVar15 * fVar30 - fVar11 * (float)((ulong)uVar21 >> 0x20);
  fVar16 = fVar16 * fVar12 - (float)uVar25 * fVar10;
  auVar6._4_4_ = fVar18;
  auVar6._0_4_ = fVar17;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = fVar20;
  auVar7._4_4_ = fVar18;
  auVar7._0_4_ = fVar17;
  auVar7._8_4_ = fVar19;
  auVar7._12_4_ = fVar20;
  auVar22 = NEON_ext(auVar6,auVar7,4,1);
  fVar10 = fVar12 * auVar22._0_4_ - (float)uVar24 * fVar17;
  fVar11 = fVar11 * auVar22._4_4_ - fVar30 * fVar18;
  fVar12 = (float)uVar25 * fVar17 - fVar12 * fVar19;
  fVar20 = *(float *)(lVar2 + 0x60) * fVar14 +
           (float)*(undefined8 *)(lVar2 + 0x40) * fVar15 + *(float *)(lVar2 + 0x50) * fVar16;
  fVar17 = *(float *)(lVar2 + 100) * fVar14 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar15 +
           *(float *)(lVar2 + 0x54) * fVar16;
  fVar18 = *(float *)(lVar2 + 0x68) * fVar14 +
           (float)*(undefined8 *)(lVar2 + 0x48) * fVar15 + *(float *)(lVar2 + 0x58) * fVar16;
  fVar19 = *(float *)(lVar2 + 0x6c) * fVar14 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar15 +
           *(float *)(lVar2 + 0x5c) * fVar16;
  fVar14 = *(float *)(lVar3 + 0x60) * fVar10 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar11 + *(float *)(lVar3 + 0x50) * fVar12;
  fVar15 = *(float *)(lVar3 + 100) * fVar10 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar11 +
           *(float *)(lVar3 + 0x54) * fVar12;
  fVar16 = *(float *)(lVar3 + 0x68) * fVar10 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar11 + *(float *)(lVar3 + 0x58) * fVar12;
  fVar10 = *(float *)(lVar3 + 0x6c) * fVar10 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar11 +
           *(float *)(lVar3 + 0x5c) * fVar12;
  fVar30 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar31 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar32 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar33 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  fVar12 = *(float *)(lVar2 + 0x30) * fVar20 * fVar20 + fVar30 * fVar14 * fVar14;
  fVar11 = *(float *)(lVar2 + 0x34) * fVar17 * fVar17 + fVar31 * fVar15 * fVar15;
  auVar23._0_4_ = *(float *)(lVar2 + 0x30) + fVar30;
  auVar23._4_4_ = *(float *)(lVar2 + 0x34) + fVar31;
  auVar23._8_4_ = *(float *)(lVar2 + 0x38) + fVar32;
  auVar23._12_4_ = *(float *)(lVar2 + 0x3c) + fVar33;
  auVar27._8_4_ = 0x28800000;
  auVar27._0_8_ = 0x2880000028800000;
  auVar27._12_4_ = 0x28800000;
  auVar22 = NEON_fmax(auVar23,auVar27,4);
  auVar28._12_4_ = *(float *)(lVar2 + 0x3c) * fVar19 * fVar19 + fVar33 * fVar10 * fVar10;
  auVar28._8_4_ = *(float *)(lVar2 + 0x38) * fVar18 * fVar18 + fVar32 * fVar16 * fVar16;
  auVar28._4_4_ = fVar11;
  auVar28._0_4_ = fVar12;
  auVar29._0_12_ = auVar28._0_12_;
  auVar29._12_4_ = auVar22._12_4_;
  auVar22 = NEON_ext(auVar29,auVar29,8,1);
  fVar12 = fVar12 + fVar11;
  fVar11 = auVar22._0_4_ + auVar22._4_4_;
  fVar10 = fVar12 + fVar11;
  fVar12 = fVar12 + fVar11;
  uVar24 = NEON_frecpe(CONCAT44(fVar12,fVar10),4);
  uVar25 = NEON_frecps(CONCAT44(fVar12,fVar10),uVar24,4);
  fVar11 = (float)uVar24 * (float)uVar25;
  uVar24 = NEON_frecps(CONCAT44(fVar12,fVar10),
                       CONCAT44((float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                fVar11),4);
  puVar8[3] = CONCAT44(fVar9 * fVar11 * (float)uVar24,fVar18);
  puVar8[2] = CONCAT44(fVar17,fVar20);
  puVar8[5] = CONCAT44(fVar10,fVar16);
  puVar8[4] = CONCAT44(fVar15,fVar14);
  *(float *)((long)puVar8 + 0xc) =
       *(float *)(*(long *)(param_1[3] + 4) + 4) * *(float *)(param_2 + 0x1c);
  *param_3 = puVar8 + 8;
  fVar12 = *(float *)(param_1[2] + 8);
  fVar10 = *(float *)(param_2 + 4);
  *(undefined1 *)puVar8 = 8;
  *(float *)(puVar8 + 6) = fVar12 * fVar10;
  return;
}


