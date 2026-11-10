/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f773cc; name: FUN_02f773cc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f773cc(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined8 local_b0;
  ushort local_a8 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  ulong uStack_88;
  float *local_80;
  ushort local_78;
  
  puVar7 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar6 = 0;
    if (*param_1 != 0) {
      lVar6 = *param_1 + (long)param_1;
    }
    pfVar10 = (float *)(lVar6 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    fVar22 = (float)param_3[9];
    fVar25 = (float)((ulong)param_3[9] >> 0x20);
    fVar20 = (float)param_3[8];
    fVar24 = (float)((ulong)param_3[8] >> 0x20);
    fVar23 = (float)param_3[3];
    fVar26 = (float)((ulong)param_3[3] >> 0x20);
    fVar21 = (float)param_3[2];
    fVar27 = (float)((ulong)param_3[2] >> 0x20);
    auVar13._0_4_ = ((*pfVar10 - fVar20) - fVar21) * *(float *)(param_3 + 6);
    auVar13._4_4_ = ((pfVar10[1] - fVar24) - fVar27) * *(float *)((long)param_3 + 0x34);
    auVar13._8_4_ = ((pfVar10[2] - fVar22) - fVar23) * *(float *)(param_3 + 7);
    auVar13._12_4_ = ((pfVar10[3] - fVar25) - fVar26) * *(float *)((long)param_3 + 0x3c);
    auVar35._0_4_ = *(float *)(param_3 + 6) * ((pfVar10[4] + fVar20) - fVar21);
    auVar35._4_4_ = *(float *)((long)param_3 + 0x34) * ((pfVar10[5] + fVar24) - fVar27);
    auVar35._8_4_ = *(float *)(param_3 + 7) * ((pfVar10[6] + fVar22) - fVar23);
    auVar35._12_4_ = *(float *)((long)param_3 + 0x3c) * ((fVar25 + 0.0) - fVar26);
    auVar28 = NEON_fmin(auVar13,auVar35,4);
    auVar13 = NEON_fmax(auVar13,auVar35,4);
    uVar15 = NEON_fmaxp(auVar28._0_8_,auVar28._0_8_,4);
    uVar16 = NEON_fmax(CONCAT44(auVar28._8_4_,auVar28._8_4_),uVar15,4);
    uVar15 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
    uVar15 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar15,4);
    uVar16 = NEON_fmax(uVar16,0,4);
    uVar15 = NEON_fmin(uVar15,*(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10),4);
    if ((float)uVar16 <= (float)uVar15) {
      lVar6 = param_2[1];
      uVar3 = *(ushort *)(pfVar10 + 7);
joined_r0x02f77498:
      do {
        if ((ulong)uVar3 == 0) {
          FUN_02f76af8(*param_3,*(undefined2 *)((long)pfVar10 + 0x1e));
        }
        else {
          local_a8[0] = uVar3;
          lVar12 = 0;
          if (*param_1 != 0) {
            lVar12 = *param_1 + (long)param_1;
          }
          pfVar9 = (float *)(lVar12 + (ulong)uVar3 * 0x20);
          local_78 = *(ushort *)((long)pfVar10 + 0x1e);
          local_80 = (float *)(lVar12 + (ulong)*(ushort *)((long)pfVar10 + 0x1e) * 0x20);
          local_90 = *(undefined8 *)(local_80 + 4);
          uStack_88 = *(ulong *)(local_80 + 6) & 0xffffffff;
          fStack_98 = local_80[2];
          fStack_94 = local_80[3];
          local_a0 = *local_80;
          fStack_9c = local_80[1];
          fVar22 = (float)param_3[8];
          fVar25 = (float)((ulong)param_3[8] >> 0x20);
          fVar30 = (float)param_3[9];
          fVar32 = (float)((ulong)param_3[9] >> 0x20);
          uVar34 = *(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10);
          fVar23 = (float)param_3[2];
          fVar26 = (float)((ulong)param_3[2] >> 0x20);
          fVar31 = (float)param_3[3];
          fVar33 = (float)((ulong)param_3[3] >> 0x20);
          fVar20 = (float)param_3[6];
          auVar18._0_4_ = ((*pfVar9 - fVar22) - fVar23) * fVar20;
          fVar21 = (float)((ulong)param_3[6] >> 0x20);
          auVar18._4_4_ = ((pfVar9[1] - fVar25) - fVar26) * fVar21;
          fVar24 = (float)param_3[7];
          auVar18._8_4_ = ((pfVar9[2] - fVar30) - fVar31) * fVar24;
          fVar27 = (float)((ulong)param_3[7] >> 0x20);
          auVar18._12_4_ = ((pfVar9[3] - fVar32) - fVar33) * fVar27;
          auVar14._0_4_ = fVar20 * ((pfVar9[4] + fVar22) - fVar23);
          auVar14._4_4_ = fVar21 * ((pfVar9[5] + fVar25) - fVar26);
          auVar14._8_4_ = fVar24 * ((pfVar9[6] + fVar30) - fVar31);
          auVar14._12_4_ = fVar27 * ((fVar32 + 0.0) - fVar33);
          auVar35 = NEON_fmin(auVar18,auVar14,4);
          auVar13 = NEON_fmax(auVar18,auVar14,4);
          uVar15 = NEON_fmaxp(auVar35._0_8_,auVar35._0_8_,4);
          uVar16 = NEON_fmax(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar15,4);
          uVar15 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
          uVar15 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar15,4);
          uVar29 = NEON_fmax(uVar16,0,4);
          auVar19._0_4_ = ((*local_80 - fVar22) - fVar23) * fVar20;
          auVar19._4_4_ = ((local_80[1] - fVar25) - fVar26) * fVar21;
          auVar19._8_4_ = ((local_80[2] - fVar30) - fVar31) * fVar24;
          auVar19._12_4_ = ((local_80[3] - fVar32) - fVar33) * fVar27;
          uVar16 = NEON_fmin(uVar15,uVar34,4);
          fVar20 = fVar20 * (((float)local_90 + fVar22) - fVar23);
          fVar21 = fVar21 * (((float)((ulong)local_90 >> 0x20) + fVar25) - fVar26);
          fVar24 = fVar24 * (((float)*(ulong *)(local_80 + 6) + fVar30) - fVar31);
          fVar27 = fVar27 * ((fVar32 + 0.0) - fVar33);
          fVar22 = (float)uVar29;
          auVar28._4_4_ = fVar21;
          auVar28._0_4_ = fVar20;
          auVar28._8_4_ = fVar24;
          auVar28._12_4_ = fVar27;
          auVar13 = NEON_fmin(auVar19,auVar28,4);
          auVar4._4_4_ = fVar21;
          auVar4._0_4_ = fVar20;
          auVar4._8_4_ = fVar24;
          auVar4._12_4_ = fVar27;
          auVar35 = NEON_fmax(auVar19,auVar4,4);
          uVar15 = NEON_fmaxp(auVar13._0_8_,auVar13._0_8_,4);
          uVar29 = NEON_fmax(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar15,4);
          uVar15 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
          uVar17 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar15,4);
          uVar15 = NEON_fmax(uVar29,0,4);
          fVar20 = (float)uVar15;
          uVar15 = NEON_fmin(uVar17,uVar34,4);
          bVar2 = fVar22 <= (float)uVar16 | (fVar20 <= (float)uVar15) << 1;
          if ((bVar2 == 1) || (pfVar9 = local_80, bVar2 == 2)) {
            uVar3 = *(ushort *)(pfVar9 + 7);
            pfVar10 = pfVar9;
            goto joined_r0x02f77498;
          }
          if (bVar2 == 3) {
            *(uint *)(param_3 + 10) = (uint)(fVar20 < fVar22);
            iVar11 = (int)param_2[1];
            uVar8 = *(uint *)((long)param_2 + 0xc);
            uVar1 = iVar11 + 1;
            if (iVar11 < (int)(uVar8 & 0x3fffffff)) {
              lVar12 = *param_2;
            }
            else {
              lVar12 = *param_2;
              if (0x3ffffffe < iVar11) {
                FUN_032bd0a8(uVar1);
                uVar8 = *(uint *)((long)param_2 + 0xc);
              }
              uVar8 = (uVar8 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              uVar5 = uVar1;
              if ((int)uVar1 <= (int)uVar8) {
                uVar5 = uVar8;
              }
              lVar12 = FUN_032bd1d4(puVar7,uVar5,2,lVar12,iVar11,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar12;
              iVar11 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar1;
            *(ushort *)(lVar12 + (long)iVar11 * 2) = local_a8[(ulong)(fVar20 >= fVar22) * 0x18];
            pfVar10 = *(float **)(local_a8 + ((ulong)(fVar20 < fVar22) * 6 + -1) * 4);
            uVar3 = *(ushort *)(pfVar10 + 7);
            goto joined_r0x02f77498;
          }
        }
        if ((int)param_2[1] <= (int)lVar6) {
          return;
        }
        iVar11 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar11;
        lVar12 = 0;
        if (*param_1 != 0) {
          lVar12 = *param_1 + (long)param_1;
        }
        pfVar10 = (float *)(lVar12 + (ulong)*(ushort *)(*param_2 + (long)iVar11 * 2) * 0x20);
        uVar3 = *(ushort *)(pfVar10 + 7);
      } while( true );
    }
  }
  return;
}


