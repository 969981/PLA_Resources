/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307abf0; name: FUN_0307abf0
 */


undefined8 FUN_0307abf0(long param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [12];
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
  fVar12 = (float)((uint)*(ushort *)(*(long *)(param_3 + 0x98) + 0x38) << 0x10);
  if (fVar10 < -fVar12) {
    return 1;
  }
  fVar26 = (float)*(undefined8 *)(param_5 + 0x40);
  fVar13 = fVar26 * (float)*param_4;
  fVar28 = (float)((ulong)*(undefined8 *)(param_5 + 0x40) >> 0x20);
  fVar16 = fVar28 * (float)((ulong)*param_4 >> 0x20);
  fVar29 = (float)*(undefined8 *)(param_5 + 0x48);
  fVar17 = fVar29 * (float)param_4[1];
  fVar14 = -(fVar13 + fVar16 + fVar17);
  uVar15 = CONCAT44(-(fVar13 + fVar16 + fVar17),fVar14);
  if ((float)*(undefined8 *)(param_5 + 0x60) * fVar14 < (float)*(undefined8 *)(param_5 + 0x90)) {
    return 2;
  }
  uVar11 = NEON_frecpe(uVar15,4);
  uVar15 = NEON_frecps(uVar15,uVar11,4);
  if ((float)*(undefined8 *)(param_5 + 0x68) <
      *(float *)(param_3 + 4) * (float)uVar11 * (float)uVar15) {
    return 3;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x30);
  pauVar7 = *(undefined1 (**) [12])(param_2 + 0x30);
  pauVar1 = (undefined1 (*) [12])(pauVar7[2] + 8);
  uVar30 = (undefined4)((ulong)*(undefined8 *)(pauVar7[3] + 4) >> 0x20);
  fVar25 = (float)*(undefined8 *)*pauVar1;
  fVar27 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar20 = (undefined4)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
  fVar18 = (float)*(undefined8 *)*pauVar7;
  fVar19 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(pauVar7[1] + 4);
  uVar24 = (undefined4)((ulong)*(undefined8 *)pauVar7[2] >> 0x20);
  fVar22 = (float)*(undefined8 *)*pauVar2;
  fVar23 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar33._12_4_ = uVar24;
  auVar33._0_12_ = *pauVar2;
  auVar4._12_4_ = uVar24;
  auVar4._0_12_ = *pauVar2;
  auVar33 = NEON_ext(auVar33,auVar4,8,1);
  auVar31._12_4_ = uVar20;
  auVar31._0_12_ = *pauVar7;
  auVar3._12_4_ = uVar20;
  auVar3._0_12_ = *pauVar7;
  auVar31 = NEON_ext(auVar31,auVar3,8,1);
  fVar17 = auVar31._0_4_;
  fVar9 = auVar33._0_4_;
  auVar5._12_4_ = uVar30;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = uVar30;
  auVar6._0_12_ = *pauVar1;
  auVar31 = NEON_ext(auVar5,auVar6,8,1);
  fVar16 = (float)puVar8[5];
  fVar13 = (float)puVar8[4];
  fVar14 = (float)((ulong)puVar8[4] >> 0x20);
  uVar11 = puVar8[7];
  uVar15 = puVar8[6];
  fVar21 = auVar31._4_4_;
  fVar32 = auVar31._0_4_;
  *(ulong *)(param_5 + 0xe8) =
       CONCAT44(fVar21 * fVar16 + fVar27 * fVar13 + fVar21 * fVar14,
                fVar32 * fVar16 + fVar25 * fVar13 + fVar27 * fVar14);
  *(ulong *)(param_5 + 0xe0) =
       CONCAT44(fVar9 * fVar16 + fVar22 * fVar13 + fVar23 * fVar14,
                fVar17 * fVar16 + fVar18 * fVar13 + fVar19 * fVar14);
  fVar16 = (float)puVar8[3];
  fVar13 = (float)puVar8[2];
  fVar14 = (float)((ulong)puVar8[2] >> 0x20);
  *(ulong *)(param_5 + 0xd8) =
       CONCAT44(fVar21 * fVar16 + fVar27 * fVar13 + fVar21 * fVar14,
                fVar32 * fVar16 + fVar25 * fVar13 + fVar27 * fVar14);
  *(ulong *)(param_5 + 0xd0) =
       CONCAT44(fVar9 * fVar16 + fVar22 * fVar13 + fVar23 * fVar14,
                fVar17 * fVar16 + fVar18 * fVar13 + fVar19 * fVar14);
  fVar16 = (float)puVar8[1];
  fVar13 = (float)*puVar8;
  fVar14 = (float)((ulong)*puVar8 >> 0x20);
  *(ulong *)(param_5 + 200) =
       CONCAT44(fVar21 * fVar16 + fVar27 * fVar13 + fVar21 * fVar14,
                fVar32 * fVar16 + fVar25 * fVar13 + fVar27 * fVar14);
  *(ulong *)(param_5 + 0xc0) =
       CONCAT44(fVar9 * fVar16 + fVar22 * fVar13 + fVar23 * fVar14,
                fVar17 * fVar16 + fVar18 * fVar13 + fVar19 * fVar14);
  uVar36 = puVar8[9];
  uVar34 = puVar8[8];
  fVar13 = *(float *)(pauVar7[5] + 4);
  fVar14 = *(float *)(pauVar7[5] + 8);
  fVar16 = *(float *)pauVar7[6];
  uVar37 = *(undefined8 *)(pauVar7[4] + 8);
  uVar35 = *(undefined8 *)pauVar7[4];
  *(ulong *)(param_5 + 0x58) =
       CONCAT44(fVar21 * fVar29 + fVar27 * fVar26 + fVar21 * fVar28,
                fVar32 * fVar29 + fVar25 * fVar26 + fVar27 * fVar28);
  *(ulong *)(param_5 + 0x50) =
       CONCAT44(fVar9 * fVar29 + fVar22 * fVar26 + fVar23 * fVar28,
                fVar17 * fVar29 + fVar18 * fVar26 + fVar19 * fVar28);
  fVar26 = ((float)uVar15 - (float)uVar35) + ((float)uVar34 - fVar13);
  fVar28 = ((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar35 >> 0x20)) +
           ((float)((ulong)uVar34 >> 0x20) - fVar14);
  fVar29 = ((float)uVar11 - (float)uVar37) + ((float)uVar36 - fVar16);
  *(ulong *)(param_5 + 0xf8) =
       CONCAT44(fVar21 * fVar29 + fVar27 * fVar26 + fVar21 * fVar28,
                fVar32 * fVar29 + fVar25 * fVar26 + fVar27 * fVar28);
  *(ulong *)(param_5 + 0xf0) =
       CONCAT44(fVar9 * fVar29 + fVar22 * fVar26 + fVar23 * fVar28,
                fVar17 * fVar29 + fVar18 * fVar26 + fVar19 * fVar28);
  fVar26 = *(float *)(*(long *)(param_1 + 0x28) + 0x20);
  fVar28 = *(float *)(*(long *)(param_2 + 0x28) + 0x20);
  *(long *)(param_5 + 0x100) = *(long *)(param_2 + 0x28);
  *(ulong *)(param_5 + 0x78) = CONCAT44(fVar10,fVar10);
  fVar26 = fVar26 + fVar28;
  uVar15 = NEON_fmax(CONCAT44(-(fVar10 - fVar26),-(fVar10 - fVar26)),0,4);
  uVar11 = NEON_fmin(CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x70) >> 0x20) * 0.7,
                              (float)*(undefined8 *)(param_5 + 0x70) * 0.7),
                     CONCAT44(fVar12 - (float)((ulong)uVar15 >> 0x20),fVar12 - (float)uVar15),4);
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  uVar15 = NEON_fmin(CONCAT44(fVar26,fVar26),CONCAT44(fVar12 * 0.5,(float)uVar11 * 0.5),4);
  fVar10 = (float)((ulong)uVar15 >> 0x20);
  *(ulong *)(param_5 + 0x108) = CONCAT44(fVar12 - fVar10,(float)uVar11 - (float)uVar15);
  *(ulong *)(param_5 + 0x80) = CONCAT44(fVar26,fVar26);
  *(ulong *)(param_5 + 0x88) = CONCAT44(fVar26 - fVar10,fVar26 - (float)uVar15);
  return 0;
}


